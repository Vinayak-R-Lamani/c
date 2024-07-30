#include<stdio.h>

int change(int *a);

int change(int *a){
    *a = 77;
    return 0;
}

int main(int argc, char const *argv[])
{
    int b = 22;
    change(&b);
    printf("%d",b);
    return 0;
}
