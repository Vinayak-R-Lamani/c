#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};

int main(int argc, char const *argv[])
{
    struct employee e1[3][3];
    // Input
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter code, salary and name for employee[%d][%d]:\n", i, j);
            scanf("%d", &e1[i][j].code);
            scanf("%f", &e1[i][j].salary);
            scanf("%s", e1[i][j].name);
        }
    }
    // Output
    printf("\nEmployee Details:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Code: %d, Name: %s, Salary: %.2f\n", e1[i][j].code, e1[i][j].name, e1[i][j].salary);
            printf("Code: %u, Name: %u, Salary: %u\n", &e1[i][j].code, &e1[i][j].name, &e1[i][j].salary);
        }
        printf("\n");
    }
    return 0;
}
