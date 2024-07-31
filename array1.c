#include<stdio.h>
int main()
{
    int arr[3][10];
    int mul[]  = { 1,2,3};
    for(int  i  = 0 ; i < 3 ;i++){
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = mul[i] * (j+1);
        }
        
    }

    for(int  i  = 0 ; i < 3 ;i++){
        for (int j = 0; j < 10; j++)
        {
           printf("%d ",arr[i][j]);
        }
        printf("\n");
        
    }


    int count  = 3;
    int arr1[count][count][count];
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            for (int k = 0; k < count; k++)
            {
                printf("%u \t",&arr1[i][j][k]);
                
            }
            
        }
        
    }
    return 0;
}