#include<stdio.h>

int returning_5(int*);
void change_to_time(int*);
// int* sum(int ,int );

int* sum(int a,int b){
       int c = a+ b;
       int* ptr = &c;
       printf("the sum is %d \n",c);
       return &ptr;
}


 
int main()
{
     int i = 2;
     sum(10,10);
     printf("%u\n",&i);
     int* ptr = sum(10,10);
     printf("%u\n",ptr);
       

} 