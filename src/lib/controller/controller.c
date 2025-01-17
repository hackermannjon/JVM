#include <stdio.h>
#include <string.h>

#include "lib/base/class_file/class_file.h"
#include "lib/class_loader/bootstrap/bootstrap.h"
#include "lib/controller/controller.h"

int jvm_run(int argc, char **argv)
{
    if (argc != 3)
    {
        printf("[JVM - ERROR] Missing Arguments\n");
        return -1;
    }

    if (!strcmp(argv[1], "-read"))
    {
        jvm_read_class(argv[2]);
    }
    else if (!strcmp(argv[1], "-run"))
    {
        jvm_run_class(argv[2]);
    }
    else
    {
        printf("[JVM - ERROR] Wrong Option");
        return -1;
    }

    return 0;
}

void jvm_read_class(char *class_file_path)
{
    ClassFile class_file = load_class_file(class_file_path);

    // TODO: Change the code below
    printf("Fields Count: %d\n", class_file.fields_count);
    for (int i = 0; i < class_file.fields_count; ++i)
    {
        printf("%d\n", class_file.fields[i].access_flags);
        printf("%d\n", class_file.fields[i].name_index);
        printf("%d\n", class_file.fields[i].descriptor_index);
    }

    printf("\nMethod Count: %d\n", class_file.methods_count);
    for (int i = 0; i < class_file.methods_count; ++i)
    {
        printf("%d\n", class_file.methods[i].access_flags);
        printf("%d\n", class_file.methods[i].name_index);
        printf("%d\n\n", class_file.methods[i].descriptor_index);
    }

    printf("Attributes: %d\n", class_file.attributes_count);

    free_class_file(class_file);
}

void jvm_run_class(char *class_file_path)
{
    printf("[JVM ERROR] - Not Implemented yet\n");
    printf("Path: %s\n", class_file_path);
}
