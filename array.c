#include<stdio.h>
int main()
{   
    int a[]  = {1,2,3,4,5,6,7,8,9,10};
    int *ptr = a;

    printf("%d  %u",ptr+4,*(ptr+4));
    

    int arr[10];
    for(int i = 1; i <= 10;i++){
        arr[i] = 5 * i;
    }
    for (int i = 1; i <= 10; i++)
    {
        printf("%d \t",arr[i]);
        
    }
    return 0;
}