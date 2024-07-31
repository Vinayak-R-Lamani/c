#include<stdio.h>

int main(int argc, char const *argv[])
{
    FILE *ptr;
    ptr = fopen("text.txt","r");
    if(ptr == NULL){
        printf("the file not exists");
    }else{
    int num ;
    fscanf(ptr,"%d",&num);
    printf("the first value %d\n",num);
    fscanf(ptr,"%d",&num);
    printf("the first value %d\n",num);
    fscanf(ptr,"%d",&num);
    printf("the first value %d\n",num);

    }
    fclose(ptr);
    return 0;
}
