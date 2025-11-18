#include <stdio.h>
#include <string.h>

int main () {

    

    // TASK 5

    FILE *file;

    char str1[1000];
    char str2[1000];
    
    file = fopen("backup.txt", "w");
    
    printf("Enter a string: ");
    fgets(str1, sizeof(str1), stdin);
    
    printf("Enter another string: ");
    fgets(str2, sizeof(str2), stdin);
    
    fprintf(file, "%s", str1);
    fprintf(file, "%s", str2);
    
    fclose(file);
    
    file = fopen("backup.txt", "r");
    
    char read1[1000];
    char read2[1000];
    
    fgets(read1, sizeof(read1), file);
    fgets(read2, sizeof(read2), file);
    
    printf("\nThe first string read from the file is: %s", read1);
    printf("The second string read from the file is: %s", read2);
    printf("The first string read from the input is: %s", str1);
    printf("The second string read from the input is: %s", str2);
    
    
    return 0;

    


    

    // TASK 6

    char name1[1000];
    char name2[1000];
    
    printf("Enter the first persons name: ");
    scanf("%s", name1);
    
    printf("Enter the second persons name: ");
    scanf("%s", name2);
    
    strcat(name1, name2);
    
    printf("\nYour Username is: %s", name1);
    
    
    return 0;

    


    

    // TASK 7

    FILE *file;

    char pass[1000];
    char repass[1000];
    
    printf("Enter your password: ");
    fgets(pass, sizeof(pass), stdin);  
    strcspn(pass, "\n");
    
    file = fopen("password.txt", "w");
    fprintf(file, "%s", pass);
    fclose(file);
    
    printf("Enter your password again: ");
    fgets(repass, sizeof(repass), stdin);
    strcspn(repass, "\n");
    
    file = fopen("password.txt", "r");
    fgets(pass, sizeof(pass), file);
    
    if (strcmp(pass, repass) == 0)
    {
    printf("\nPasswords Match!");
    }
    else
    {
    printf("\nPasswords Do Not Match!");
    }
    
    return 0;

    



    
    // TASK 8

    char names[3][20];
    int i;

    for (i = 0; i < 3; i++) 
    {
        printf("Enter name of student %d: ", i + 1);
        fgets(names[i], sizeof(names[i]), stdin);

        int len = strlen(names[i]);
        if (len > 0 && names[i][len - 1] == '\n')
        {
            names[i][len - 1] = '\0';
        }
    }

    printf("\nStudents:\n");
    for (i = 0; i < 3; i++) 
    {
        printf("%s\n", names[i]);
    }

    return 0;




    

    // TASK 9

    char names[3][20];
    int i, j;

    for (i = 0; i < 3; i++) 
    {
        printf("Enter name %d: ", i + 1);
        fgets(names[i], sizeof(names[i]), stdin);

        int len = strlen(names[i]);
        if (len > 0 && names[i][len - 1] == '\n') 
        {
            names[i][len - 1] = '\0';
        }
    }

    for (i = 0; i < 3; i++) 
    {
        printf("\nCharacters in Name %d:\n", i + 1);
        for (j = 0; names[i][j] != '\0'; j++) 
        {
            printf("%c ", names[i][j]);
        }
        printf("\n");
    }

    return 0;

    



    
    // TASK 10

    FILE *file;
    char name[5][1000];
    char search[1000];
    int found = 0;
    
    for (int i = 0; i < 5; i++)
        {
            printf("Enter name: ");
            scanf("%s", name[i]);
        }

    file = fopen("names.txt", "w");
    for (int i = 0; i < 5; i++)
        {
            fprintf(file, "%s\n", name[i]);
        }
    fclose(file);

    printf("\nEnter the name you want to search for: ");
    scanf("%s", search);

    file = fopen("names.txt", "r");
    for (int j = 0; j < 5; j++)
        {
            fscanf(file, "%s", name[j]);

            if (strcmp(search, name[j]) == 0)
            {
                found = 1;
                break;
            }
            else
            {
                found = 0;    
            }
        }
    fclose(file);

    if (found == 1)
    {
        printf("\nName found in directory.");
    }
    else if (found == 0)
    {
        printf("\nName not found in directory.");
    }

    return 0;
}
