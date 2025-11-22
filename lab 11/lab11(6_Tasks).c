#include <stdio.h>
#include <string.h>
#include <stdlib.h>


// TASK 5


int decode(char str[], int len, char newArr[]);

int decode(char str[], int len, char newArr[])
{
    static int x = -1;

    if (len < 0)
    {
        return 0;
    }
    else
    {
        newArr[x] = str[len];
        x++;
        len--;
        decode(str, len, newArr);
        return 1;
    }
}

int main ()
{
    char string[100];
    char newArray[100];
    int length;

    printf("Enter a cipher message: ");
    fgets(string, sizeof(string), stdin);
    string[strcspn(string, "\n")] = '\0';

    length = strlen(string);

    decode(string, length, newArray);

    printf("The decoded message is: %s", newArray);
}




// TASK 6

int powerTo(int a, int power);

int powerTo(int a, int power)
{
    if (power == 0)
    {
        return 1;
    }
    else
    {
        return (a * powerTo(a, power - 1));
    }
}

int main ()
{
    int ans, power;

    printf("What number do you want to apply power to: ");
    scanf("%d", &ans);
    printf("Enter the power: ");
    scanf("%d", &power);

    int result = powerTo(ans, power);

    printf("\nAnswer: %d", result);

    return 0;
}




// TASK 7

struct Department
{
    char name[100];
    int blockNumber;
};

struct Student
{
    int ID;
    float CGPA;
    char name[100];
    struct Department depo;
};

int main ()
{
    struct Student std = {842, 3.2, "Ammar", {"Computer Science", 3}};
    
    printf("\nStudent name is: %s", std.name);
    printf("\nStudent ID is: %d", std.ID);
    printf("\nStudent CGPA is: %.2f", std.CGPA);
    printf("\nStudent Department is: %s", std.depo.name);
    printf("\nStudent department block is: %d", std.depo.blockNumber);
}




// TASK 8

struct employee
{
    int ID;
    char name[100];
    int salary;
    char position[100];
};

int main ()
{
    struct employee em[5] = {
                                {842, "ali", 2003, "Chairman"},
                                {841, "askari", 22403, "janitor"},
                                {842, "mateen", 20433, "software engineer"},
                                {842, "ammar", 2343, "CEO"},
                                {842, "ramiz", 34355, "CFO"}
                            };

    int max = em[0].salary;
    int count = 0;

    for (int i = 0; i < 5; i++)
    {
        if (em[i].salary > max)
        {
            max = em[i].salary;
            count = i;
        }
    }

    printf("The highest salary is %d of %s", max, em[count].name);
    
    return 0;
}




// TASK 9

int stat(int x);

int stat(int x)
{
    if (x == 10)
    {
        return x;
    }
    else
    {
        stat(x + 1);
    }
}

int main ()
{
    static int count = 0;
    int result;

    result = stat(count);

    printf("The function repeated %d times", result);

    return 0;
}




// TASK 10

struct Movie
{
    char title[100];
    char genre[50];
    char director[100];
    int release_year;
    float rating;
};

void addMovie(struct Movie movies[], int *count);
void searchByGenre(struct Movie movies[], int count);
void displayMovies(struct Movie movies[], int count);

void cleanString(char *str)
{
    str[strcspn(str, "\n")] = '\0';
}

int main()
{
    struct Movie movies[MAX_MOVIES];
    int movieCount = 0;
    int choice;

    while (1)
    {
        printf("\n============================\n");
        printf("   MOVIE DATABASE SYSTEM\n");
        printf("============================\n");
        printf("1. Add Movie\n");
        printf("2. Search by Genre\n");
        printf("3. Display All Movies\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        getchar();

        if (choice == 1)
            addMovie(movies, &movieCount);
        else if (choice == 2)
            searchByGenre(movies, movieCount);
        else if (choice == 3)
            displayMovies(movies, movieCount);
        else if (choice == 4)
            break;
        else
            printf("Invalid choice. Try again.\n");
    }

    return 0;
}

void addMovie(struct Movie movies[], int *count)
{
    if (*count >= MAX_MOVIES)
    {
        printf("Movie list is full!\n");
        return;
    }

    printf("\n--- Add Movie ---\n");

    printf("Enter title: ");
    fgets(movies[*count].title, 100, stdin);
    cleanString(movies[*count].title);

    printf("Enter genre: ");
    fgets(movies[*count].genre, 50, stdin);
    cleanString(movies[*count].genre);

    printf("Enter director: ");
    fgets(movies[*count].director, 100, stdin);
    cleanString(movies[*count].director);

    printf("Enter release year: ");
    scanf("%d", &movies[*count].release_year);

    printf("Enter rating: ");
    scanf("%f", &movies[*count].rating);
    getchar();

    (*count)++;
    printf("Movie added successfully!\n");
}

void searchByGenre(struct Movie movies[], int count)
{
    char searchGenre[50];
    int found = 0;

    printf("\nEnter genre to search: ");
    fgets(searchGenre, 50, stdin);
    cleanString(searchGenre);

    printf("\n--- Movies Found ---\n");

    for (int i = 0; i < count; i++)
    {
        if (strcmp(movies[i].genre, searchGenre) == 0)
        {
            printf("\nTitle: %s\n", movies[i].title);
            printf("Genre: %s\n", movies[i].genre);
            printf("Director: %s\n", movies[i].director);
            printf("Year: %d\n", movies[i].release_year);
            printf("Rating: %.1f\n", movies[i].rating);
            found = 1;
        }
    }

    if (!found)
        printf("No movies found in this genre.\n");
}

void displayMovies(struct Movie movies[], int count)
{
    if (count == 0)
    {
        printf("No movies to display.\n");
        return;
    }

    printf("\n--- All Movies ---\n");

    for (int i = 0; i < count; i++)
    {
        printf("\nMovie %d:\n", i + 1);
        printf("Title: %s\n", movies[i].title);
        printf("Genre: %s\n", movies[i].genre);
        printf("Director: %s\n", movies[i].director);
        printf("Year: %d\n", movies[i].release_year);
        printf("Rating: %.1f\n", movies[i].rating);
    }
}