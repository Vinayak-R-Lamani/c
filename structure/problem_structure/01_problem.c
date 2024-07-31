#include<stdio.h>

typedef struct vector
{
    int i;
    int j;
}V;

V sumVector(V v1,V v2){
    V v3 = {v1.i + v1.j,v2.i+v2.j};
    return v3;
}

int main(int argc, char const *argv[])
{
    V v1 = {1,2};
    V v2 = {3,4};
    V v3 = sumVector(v1,v2);
    V *ptr = &v3;
    printf("%d : %d",ptr->i,v3.j);
    return 0;
}
