#include <stdio.h>
#include <string.h>

typedef struct employee
{
    int code;
    float salary;
    char name[10];
} employee;

int main(int argc, char const *argv[])
{
    employee e1;
    employee *ptr;
    e1.code = 10;

    ptr = &e1;
    printf("%d", ptr->code);
    return 0;
}
