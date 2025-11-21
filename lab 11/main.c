#include <stdio.h>


// RECURSION

int factorial(int n) 
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return (n * factorial(n - 1));
    }
}

int main ()
{
    int num;

    printf("Enter a number to get its factorial: ");
    scanf("%d", &num);
    
    printf("\nThe factorial is: %d", factorial(num));
    return 0;
}





// STRUCTS & STATIC VARIABLE

struct employee
{
    int id;
    char name[20];
}emp;

int main ()
{
    char names[20];

    printf("Enter the name of the employee: ");
    scanf("%s", emp.name);

    for (int i = 0; i < 5; i++)
    {
        static int staticVar = 0;
        staticVar++;
        printf("%d\n", staticVar);
    }

    printf("\nEmployee name: %s \nStatic Var: %d", emp.name);

    return 0;
}