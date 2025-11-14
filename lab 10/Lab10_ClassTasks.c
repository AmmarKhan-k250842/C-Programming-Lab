#include <stdio.h>
#include <string.h>

int main () {

    // TASK 1

    /*
    char message[50];
    int temp = 0, i = 0;

    printf("Enter the message: ");
    fgets(message, sizeof(message), stdin);

    message[strcspn(message, "\n")] = '\0';

    printf("\nThe word you entered is: %s", message);
    
    while (temp == 0)
    {
        if(message[i] == '\0')
        {
            temp = 1;
        }

        i++;
    }

    strcat(message, " falcon");

    printf("\nThe message with code word is: %s", message);
    printf("\nThe length of the message was: %d", i);
    */

    


    // TASK 2

    char message[50];
    int found = 0, i = 0;
    char find;

    printf("Enter a word: ");
    fgets(message, sizeof(message), stdin);

    printf("Enter the character you want to search for: ");
    scanf("%c", &find);

    while (message[i] != find)
    {
        i++;
    }


    printf("The character was found at position: %d", i + 1);

    return 0;
}