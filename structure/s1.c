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
    scanf("%d" , &e1.code);
    scanf("%f",&e1.salary);
    scanf("%s",&e1.name);
    printf("%d : %s : %f",e1.code,e1.name,e1.salary);
    return 0;
}
