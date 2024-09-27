/*#include <stdio.h>
#define endl printf("\n")
int main()
{
    int num = 100;
    float decimal = 2.71828;
    char ch = 'N';
    char string[] = "Hi what's up?";
    void *pointer = &num;
    printf("integer in decimal format %d", num);
    endl;
    printf("an integer in binary format %d", num); 
    endl;
    printf("integer in octal format %o", num);
    endl;
    printf("integer in hexadecimal format %x", num);
    endl;
    printf("a floating point number %.5f", decimal);
    endl;
    printf("a number in exponential form %e", decimal);
    endl;
    printf("number in flexible form %g", decimal);
    endl;
    printf("symbol %c", ch);
    endl;
    printf("string %s", string);
    endl;
    printf("pointer %p", pointer);
    endl;
}*/


#include <stdio.h>
#define endl printf("\n")
int main()
{
    char surname[3][50];
    char initials[3][10];
    char email[3][50];
    char color[3][15];
    int n = 104; 

    for (int i = 0; i < 3; i++)
    {
        printf("Введіть дані для особи №%d", i + 1);
        endl;
        printf("Прізвище: ");
        scanf("%s", surname[i]);
        printf("Ініціали: ");
        scanf("%s", initials[i]);
        printf("Ел.пошта: ");
        scanf("%s", email[i]);
        printf("Улюблений колір: ");
        scanf("%s", color[i]);
        endl;
    }

    for (int i = 0; i < n; i++)
    {
        printf("-");
    }
    endl;

    printf("| %-5s | %-26s | %-28s | %-32s | %-20s |\n", "№ п/п", "Прізвище", "Ініціали", "Ел.пошта", "Улюблений колір");

    for (int i = 0; i < n; i++) 
    {
        printf("-");
    }
    endl;

    for (int i = 0; i < 3; i++)
    {
        printf("| %-5d | %-18s | %-20s | %-25s | %-20s |\n", i + 1, surname[i], initials[i], email[i], color[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("-");
    }
    endl;
    
}

