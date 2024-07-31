#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};
void show(struct employee e1);

void show(struct employee e1){
    printf("%d\n",e1.code);
}



int main(int argc, char const *argv[])
{       
    struct employee e1;
    e1.code = 56;
    struct employee *ptr;
    ptr = &e1;

    show(e1);

    printf("%d \n",e1.code);
    printf("%d \n",(*ptr).code);
    printf("%d \n",ptr->code);

    return 0;
}
