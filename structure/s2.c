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
    struct employee e1[3];
    scanf("%d" , &e1[0].code);
    scanf("%f",&e1[1].salary);
    scanf("%s",&e1[2].name);
    printf("%d : %s : %f",e1[0].code,e1[1].name,e1[2].salary);
    return 0;
}
