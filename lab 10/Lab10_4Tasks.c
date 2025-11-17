#include <stdio.h>
#include <string.h>

int main () {

    // TASK 1

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
    
    
    
    
    
    // TASK 3
    
    char code1[100], code2[100];
    int n;

    printf("Enter first product code: ");
    scanf("%s", code1);

    printf("Enter second product code: ");
    scanf("%s", code2);

    printf("Enter number of characters to compare: ");
    scanf("%d", &n);

    int len1 = strlen(code1);
    int len2 = strlen(code2);

    if (n > len1 || n > len2) {
        printf("Warning: Comparison length exceeds one or both product code lengths.\n");
    }

    int match = 1; 
    for (int i = 0; i < n; i++) {
        if (code1[i] != code2[i]) {
            match = 0;
            break;
        }
    }

    if (match) {
        printf("The product codes share the same prefix.\n");
    } else {
        printf("The product codes do NOT share the same prefix.\n");
    }
    
    
    
    
    
    // TASK 4
    
    FILE *file;
    int bookIDs[3];

    file = fopen("library.txt", "w");
    if (file == NULL) {
        printf("Error: Could not open file for writing.\n");
        exit(1);
    }

    printf("Enter three book IDs (integers):\n");
    for (int i = 0; i < 3; i++) {
        printf("Book %d ID: ", i + 1);
        if (scanf("%d", &bookIDs[i]) != 1) {
            printf("Invalid input. Please enter integers only.\n");
            fclose(file);
            exit(1);
        }
        fprintf(file, "%d\n", bookIDs[i]);
    }

    fclose(file);

    file = fopen("library.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open file for reading.\n");
        exit(1);
    }

    printf("\nBook IDs read from file:\n");
    for (int i = 0; i < 3; i++) {
        if (fscanf(file, "%d", &bookIDs[i]) == 1) {
            printf("Book %d ID: %d\n", i + 1, bookIDs[i]);
        } else {
            printf("Error reading book ID %d from file.\n", i + 1);
            fclose(file);
            exit(1);
        }
    }

    fclose(file);

    return 0;
}