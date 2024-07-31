#include<stdio.h>

int main(int argc, char const *argv[])
{
    FILE *ptr;
    ptr = fopen("text.txt","w");
    int num = 44;
    fprintf(ptr,"%d",num);
    fclose(ptr);
    return 0;
}
