#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE 20

int main() {

    while (1)
    {
        /* code */
    
    
    int option;
    printf("1 - int, 2 - float, 3 - string\n");
    scanf("%d", &option);
    
    // Consume the leftover newline character from scanf
    while (getchar() != '\n');

    switch (option) {
        // for int type conversion
        case 1: {
            int n, choice;
            printf("Enter an integer: ");
            scanf("%d", &n);
            
            // Consume the leftover newline character
            while (getchar() != '\n');

            printf("Convert into 1-float, 2-string\n");
            scanf("%d", &choice);

            switch (choice) {
                case 1: {
                    float ans = (float)n;
                    printf("Float value: %f\n", ans);
                    break;
                }
                case 2: {
                    char str[MAX_LINE];
                    sprintf(str, "%d", n);
                    printf("String value: %s\n", str);
                    break;
                }
                default:
                    printf("Invalid choice for conversion.\n");
                    break;
            }
            break;
        }

        // for float type conversion
        case 2: {
            float n;
            int choice;
            printf("Enter a float: ");
            scanf("%f", &n);

            // Consume the leftover newline character
            while (getchar() != '\n');

            printf("Convert into 1-int, 2-string\n");
            scanf("%d", &choice);

            switch (choice) {
                case 1: {
                    int ans = (int)n;
                    printf("Integer value: %d\n", ans);
                    break;
                }
                case 2: {
                    char str[MAX_LINE];
                    sprintf(str, "%f", n);
                    printf("String value: %s\n", str);
                    break;
                }
                default:
                    printf("Invalid choice for conversion.\n");
                    break;
            }
            break;
        }

        // for string type conversion
        case 3: {
            char str[MAX_LINE];
            int choice;
            printf("Enter a string: ");
            fgets(str, MAX_LINE, stdin);

            // Remove newline character from the input if it exists
            str[strcspn(str, "\n")] = '\0';

            printf("Convert into 1-int, 2-float\n");
            scanf("%d", &choice);

            switch (choice) {
                case 1: {
                    int ans = atoi(str);
                    printf("Integer value: %d\n", ans);
                    break;
                }
                case 2: {
                    float ans = atof(str);
                    printf("Float value: %f\n", ans);
                    break;
                }
                default:
                    printf("Invalid choice for conversion.\n");
                    break;
            }
            break;
        }

        default:
            printf("Invalid option.\n");
            break;
    }
    }

    return 0;
}
