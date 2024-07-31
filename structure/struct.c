#include<stdio.h>
#include<string.h>
struct  employee
{
    int code ;
    float salary;
    char name[10];
};

int main(int argc, char const *argv[])
{
    struct employee e1;
    e1.code = 10;
    strcpy(e1.name,"harry");
    e1.salary = 56000;
    printf("%d : %s : %f",e1.code,e1.name,e1.salary);
    return 0;
}
