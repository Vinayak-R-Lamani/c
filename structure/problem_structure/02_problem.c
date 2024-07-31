#include <stdio.h>

typedef struct Date
{
    int mm;
    int dd;
    int yyyy;
} D;
int compare(D d1, D d2)
{
    if ((d1.yyyy == d2.yyyy) && (d1.mm == d2.mm) && (d1.dd == d2.dd))
    {
        return 0;
    }
    if (d1.yyyy > d2.yyyy)
    {
        return 1;
    }
    else if (d1.mm > d2.mm)
    {
        return 1;
    }
}

int main(int argc, char const *argv[])
{
    D d1 = {12, 4, 2004};
    D d2 = {13, 4, 2004};
    return 0;
}
