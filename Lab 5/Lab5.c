#include <stdio.h>


int main()
{
	/*
	int age;
	printf("enter a number: ");
	scanf("%d", &age);
	(age >= 18) ? printf("\nYou can vote") : printf("\nYou cannot vote");
	float aLog = log10(age);
	printf("\n\nThe Log of your age is: %f", aLog); 
	*/
	
	
	//TASK 1
	
	/*
	int g1;
	int g2;
	
	printf("Enter your first grade: ");
	scanf("%d", &g1);
	printf("Enter your second grade: ");
	scanf("%d", &g2);
	
	(g1 >= 50) ? (g2 >= 50) ? printf("\nPassed Both") : printf("\nFailed in one or more") : printf("\nFailed in one or more");
	*/
	
	
	//TASK 2
	
	/*
	float temp;
	
	printf("Enter the temprature: ");
	scanf("%f", &temp);
	
	if ((temp >= 20) && (temp <= 25))
	{
		printf("\nCondition is optimal");
	}
	else
	{
		printf("\nCondition is not optimal");
	}
	*/
	
	
	//TASK 3
	
	/*
	int num1;
	
	printf("Enter a Number: ");
	scanf("%d", &num1);
	
	int result = (num1 & 1);
	
	if (result == 1)
	{
		printf("\nThe number is odd");
	}
	else
	{
		printf("\nThe number is even");
	}
	*/
	
	
	//TASK 4
	
	/*
	int P;
	int R;
	int T;
	
	printf("Enter Principle amount: ");
	scanf("%d", &P);
	printf("Enter Rate: ");
	scanf("%d", &R);
	printf("Enter Time: ");
	scanf("%d", &T);
	
	float result = ((P * R * T) / 100);
	
	printf("The interest is: %f", result);
	*/
	
	
	
	//Class Assignment
	
	//TASK 1
	
	/*
	float num1;
	float num2;
	float result = 0;
	
	printf("Enter a Number: ");
	scanf("%f", &num1);
	printf("Enter another Number: ");
	scanf("%f", &num2);
	
	printf("\nEquation: ((num1 * 2) / (10 + num2))");
	
	result = ((num1 * 2) / (10 + num2));
	float r1 = num1 * 2;
	float r2 = num2 + 10;
	
	
	printf("\n\nAnswer: %f", result);
	printf("\n\nSince () have the most preceedence it executes (%f * 2) and (10 + %f) which results in %f / %f", num1, num2, r1, r2);
	*/
	
	
	//TASK 2
	
	/*
	int x;
	int y;
	
	printf("Enter a Number: ");
	scanf("%d", &x);
	printf("Enter another Number: ");
	scanf("%d", &y);
	
	int c1 = (x > 5) && (y < 10); 
	int c2 = (x == 10) || (y == 5); 
	int c3 = !(y == x); 
	
	printf("\n%d", c1);
	printf("\n%d", c2);
	printf("\n%d", c3);
	*/
	
	
	//TASK 3
	
	#include <math.h>
	
	/*
	int x;
	
	printf("Enter a Number: ");
	scanf("%d", &x);
	
	float sqr = sqrt(x);
	printf("The square root of your number is: %f", sqr);
	*/ 
	
	
	//TASK 4
	
	int x;
	int y;
	
	printf("Enter a Number: ");
	scanf("%d", &x);
	printf("Enter another Number: ");
	scanf("%d", &y);
	
	(x > y) ? printf("%d is greater then %d", x, y) : printf("%d is greater then %d", y, x);
	
	return 0;
}


