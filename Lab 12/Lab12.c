#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main ()
{
    int n = 4;
    int* ptr;

    ptr = (int*) malloc(n * sizeof(int));

    if(ptr == NULL)
    {
        printf("Memory cannot be allocated");
        return 0;
    }

    printf("Enter values: \n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
    }

    printf("\nValues Entered: \n");
    for(int i = 0; i < n; i++)
    {
        printf("%d\n", *(ptr + i));
    }

    free(ptr);

    return 0;
}





/*
Task 1: Write a program that allocates memory dynamically using malloc() for an array of 5 integers. Then,
attempt to access the 6th element (out of bounds) and print its value.
*/


int main ()
{
    int n = 5;
    int* ptr;

    ptr = (int*) malloc(n * sizeof(int));

    if(ptr == NULL)
    {
        printf("memory not allocated");
    }

    ptr[4] = 10;
    int x = ptr[5];

    printf("Element 6: %d\nElement 5: %d", x, ptr[4]);

    free(ptr);

    return 0;
}





/*
Task 2: Write a C program where you dynamically allocate memory using malloc() for an integer array.
After using the memory, you mistakenly call free() twice on the same pointer. Check the consequences of
double freeing memory.
*/

int main ()
{
    int n = 5;
    int* ptr;

    ptr = (int*) malloc(n * sizeof(int));

    if(ptr == NULL)
    {
        printf("memory not allocated");
    }

    ptr[3] = 5;
    ptr[4] = 10;

    printf("Element 4: %d\nElement 5: %d", ptr[3], ptr[4]);

    free(ptr);
    free(ptr);

    printf("Element 4: %d\nElement 5: %d", ptr[3], ptr[4]);

    return 0;
}





/*
Task 3: Write a program that dynamically allocates memory for an array of integers. Instead of using array
indexing, use pointer arithmetic to initialize and print the array elements.
*/

int main ()
{
    int n = 5;
    int* ptr;

    ptr = (int*) malloc(n * sizeof(int));

    if(ptr == NULL)
    {
        printf("memory not allocated");
    }

    printf("Enter values: \n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
    }

    printf("\nEntered values: \n");
    for(int j = 0; j < n; j++)
    {
        printf("%d\n", *(ptr + j));
    }

    free(ptr);

    return 0;
}





/*
Task 4: Write a program where the user can input integers into a dynamically allocated array. If the array
size is exceeded, the program should use realloc() to resize the array, preserving the original data.
*/

int main ()
{
    int n = 3;
    int* ptr;

    ptr = (int*) malloc(n * sizeof(int));

    if(ptr == NULL)
    {
        printf("memory not allocated");
    }

    printf("Enter values: \n");
    for(int i = 0; i < 5; i++)
    {
        if(i > 3)
        {
            n = i + 1;
            ptr = realloc(ptr, n * sizeof(int));
        }
        scanf("%d", ptr + i);
    }

    printf("\nEntered values: \n");
    for(int j = 0; j < n; j++)
    {
        printf("%d\n", *(ptr + j));
    }

    free(ptr);

    return 0;
}





/*
Task 5: Write a C program to dynamically allocate memory for a 2D array (matrix) using calloc(). The
matrix should be initialized to zero. Allow the user to input values for each element and then print the
matrix.
*/

int main ()
{
    int rows = 2;
    int cols = 2;

    int** ptr = (int**) calloc(rows, sizeof(int**));
    for(int i = 0; i < rows; i++)
    {
        ptr[i] = (int*) calloc(cols, sizeof(int));
    }

    for(int x = 0; x < rows; x++)
    {
        for(int y = 0; y < cols; y++)
        {
            printf("Enter a value: ");
            scanf("%d", &ptr[x][y]);
        }
    }

    printf("\nMatrix: \n");

    for(int u = 0; u < rows; u++)
    {
        for(int z = 0; z < cols; z++)
        {
            printf("%d\t", ptr[u][z]);
        }
        printf("\n");
    }

    free(ptr);

    return 0;
}





/*
Task 6: Write a C program where you declare an integer pointer but do not initialize it using malloc(). Then,
attempt to access and modify the memory the pointer points to, before it is assigned any value. Check what
happens when an uninitialized pointer is accessed. Also attach screenshot
*/

int main ()
{
    int* ptr;

    printf("Address of ptr: %p", ptr);
    printf("\nAccessing ptr: %d", ptr);

    ptr[0] = 10;

    printf("Accessing after modification: %d", ptr);

    return 0;
}





/*
Task 7: Write a program that allocates memory dynamically using malloc(), then tries to resize the memory
block with specific allocation function. However, in this case, pass NULL to that specific allocation function
and observe the result.
*/

int main ()
{
    int n = 5;

    int* ptr = (int*) malloc(n * sizeof(int));

    ptr[0] = 5;
    printf("Before resizing: %d", ptr[0]);

    ptr = realloc(ptr, NULL);
    printf("After resizing: %d", ptr[0]);

    free(ptr);

    return 0;
}





/*
Task 8: Write a C program that dynamically allocates memory for an array using malloc(), performs some
operations on it, but forgets to call free() at the end of the program.
*/

int main ()
{
    int n = 10;
    int* ptr = (int*) malloc(n * sizeof(int));

    printf("Enter values: \n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }

    ptr[9] = 38;
    
    printf("\nEntered values: \n");
    for(int j = 0; j < n; j++)
    {
        printf("%d\n", *(ptr + j));
    }

    return 0;
}





/*
Task 9: Write a program where you allocate memory for an array of integers, but forget to multiply by
sizeof(int) in the malloc() call.
*/

int main ()
{
    int n = 3;
    int* ptr = (int*) malloc(n);

    printf("Enter values: \n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }
    
    printf("\nEntered values: \n");
    for(int j = 0; j < n; j++)
    {
        printf("%d\n", *(ptr + j));
    }

    free(ptr);

    return 0;
}





/*
Task 10: Write a program where memory is dynamically allocated for an array using malloc(), then resized
using realloc(). After resizing, free the original pointer without updating it. Attempt to access the memory
after it is freed.
*/

int main ()
{
    int n = 3;
    int* ptr = (int*) malloc(n);

    printf("Enter values: \n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }

    free(ptr);
    
    printf("\nEntered values: \n");
    for(int j = 0; j < n; j++)
    {
        printf("%d\n", *(ptr + j));
    }

    return 0;
}
