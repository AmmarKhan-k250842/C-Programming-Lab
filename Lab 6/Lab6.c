#include <stdio.h>
#include <stdbool.h>

int main() {
	
	
	// LOOPS
	
	/*
	int go = 0;
	int i;
	int x;
	
	printf("Which number's table do you want: ");
	scanf("%d", &x);
	printf("\n\nTable of Number %d in reverse order:\n\n", x);
	
	
	for (i = 20; i > 0; i--)
	{
		int result = i * x;
		printf("%d x %d = %d\n", i, x, result);
	}
	*/
	
	
	//ARRAYS
	
	/*
	int x[4];
	int i;
	int num = 1;
	int swap;
	int temp;
	
	
	for (i = 0; i < 4; i++)
	{
		printf("Enter a Number: ");
		scanf("%d", &x[i]);
	}
	for (i = 0; i < 4; i++)
	{
		swap = 0;
		for (i = 0; i < 4; i++)
		{
			if (x[i] > x[i + 1])
			{
				temp = x[i + 1];
				x[i + 1] = x[i];
				x[i] = temp;
				swap = 1;
			}
		}
	}
	for (i = 0; i < 4; i++)
	{
		printf("\nArray element %d: %d", num, x[i]);
		num++;
	}
	*/
	
	
	// TASK 1
	
	int Byear;
	
	printf("Enter your birth year: ");
	scanf("%d", &Byear);
	
	int year = (2025 - Byear);
	int months = (year * 12);
	int weeks = (months * 4);
	int days = (months * 30);
	int hours = (days * 24);
	int sec = (hours * 3600);
	
	printf("\nYour age in years is: %d", year);
	printf("\nYour age in months is: %d", months);
	printf("\nYour age in weeks is: %d", weeks);
	printf("\nYour age in days is: %d", days);
	printf("\nYour age in hours is: %d", hours);
	printf("\nYour age in seconds is: %d", sec);
	
	return 0;
	
}



     
