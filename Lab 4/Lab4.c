#include<stdio.h>
#include <string.h>

int main() {
	
	
	//TASK 1
	
	int age;
	
	printf("Enter your age: ");
	scanf("%d", &age);
	
	if (age >= 18)
	{
		printf("You are elidgible to vote");
	}
	else
	{
		printf("You are elidgible to vote");
	}
	
	
	//TASK 2
	
	int num1;
	
	printf("Enter a number: ");
	scanf("%d", &num1);
	
	int result = (num1 % 2);
	
	if (result == 1)
	{
		printf("Number is odd");
	}
	else 
	{
		printf("Number is odd");
	}
	
	// TASK 3
	
	int num1;
	int num2;
	int num3;
	printf("Enter a number: ");
	scanf("%d", &num1);
	printf("Enter another number: ");
	scanf("%d", &num2);
	printf("Enter another number: ");
	scanf("%d", &num3);
	if ((num1 > num2) && (num1 > num3))
	{
		printf("\n %d is the largest number", num1);
	}
	else if ((num2 > num1) && (num2 > num3))
	{
		printf("\n %d is the largest number", num2);
	}
	else 
	{
		printf("\n %d is the largest number", num3);
	}
	
	
	// TASK 4
	

    int marks;
    printf("Enter your marks: ");
    scanf ("%d", &marks);
    if (marks >= 90) {
        printf("Your grade is A");
    }
    else if ((marks >= 80) && (marks <= 89)) {
        printf("Your grade is B");
    }
    else if ((marks >= 70) && (marks <= 79)) {
        printf("Your grade is C");
    }
    else if ((marks >= 60) && (marks <= 69)) {
        printf ("Your grade is D");
    }
    else if (marks < 60) {
        printf ("You got an F");
    }
    
    
    // TASK 6
    
    int num1, num2, result; 
    char opp;
    printf("Enter a number: ");
    scanf(" %d", &num1);
    printf("\n Enter another number: ");
    scanf (" %d", &num2);
    printf("\n Enter an operator: ");
    scanf (" %c", &opp);
    switch (opp)
    {
       case '+':
       result = (num1 + num2);
       printf("\nYour answer is: %d", result);
       break;
       case '-':
       result = (num1 - num2);
       printf("\nYour answer is: %d", result);
       break;
       case ‘*’:
       result = (num1 * num2);
       printf("\nYour answer is: %d", result);
       break;
       case '/':
       result = (numi / num2) ;
       printf("\nYour answer is: %d", result);
       break;
    }
    
    
    // TASK 5
    
    int num1;
    printf("Enter a number: '");
    scanf(" %d", &num1);
    switch (num1) 
	{
        case 1: 
        printf ("\nStop");
        break;
        case 2:
        printf ("\nReady") 3l
        break;
        case 3: printf ("\nGo");
        break;
    }
    
    
    // TASK 7
    
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) 
	{
        printf("%d is a leap year.\n", year);
    } 
	else 
	{
        printf("%d is not a leap year.\n", year);
    }
    
    
    // TASK 8
    
    int num1;

    printf("Enter a Number: ");
    scanf("%d", &num1);

    if (num1 > 0) 
    {
        printf("%d is a positive number.\n", num1);
    } 
	else if (num1 < 0) 
    {
        printf("%d is a negetive number.\n", num1);
    }
    else if (num1 == 0) 
	{
		printf("the number you entered is zero.\n", num1);
	}
	
	
	// TASK 9
	
	 int day; 

     printf("Enter a number (1-7) to get the corresponding day of the week: ");
     scanf("%d", &day);

     switch (day) 
     {
      case 1:
      printf("Monday\n");
      break;

      case 2:
      printf("Tuesday\n");
      break;

      case 3:
      printf("Wednesday\n");
      break;

      case 4:
      printf("Thursday\n");
      break;

      case 5:
      printf("Friday\n");
      break;

      case 6:
      printf("Saterday\n");
      break;

      case 7:
      printf("Sunday\n");
      break;

      default:
      printf("Invalid input! Please enter a number between and 7.\n");
     }
     
     
     // TASK 10
     
    int pass;
	
	printf("Enter the password: ");
	scanf("%d", &pass);
	
	if (pass == 10101)
	{
		printf("\nAccess Granted!");
	}
	else 
	{
		printf("\nWrong password, try again");
	}
	
	
	return 0;
	
}
































