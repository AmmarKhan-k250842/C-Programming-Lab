#include <stdio.h>


// TASK 5

/*
int main () {
	
	int num1;
	int i;
	
	printf("Enter a number: ");
	scanf("%d", &num1);
	
	int fact = num1;
	
	if (num1 > 0)
	{
		for (i = num1 - 1; i > 0; i--)
		{
			fact = fact * i;
		}
	}
	
	printf("\nFactorial of the number was: %d", fact);
	
	return 0;
}
*/




// TASK 6

/*
int main () {
	
	int sum = 0;
	int num1;
	int i = 0;
	int scount = 0;
	int bcount = 0;
	int lcount = 0;
	
	while (i == 0)
	{
		printf("\nEnter a grade: ");
	    scanf("%d", &num1);
	    
	    if (num1 > 70 && num1 <= 100)
	    {
	    	scount++;
	    	printf("\nThe grade entered was: %d", num1);
	    	sum = sum + num1;
		}
		else if (num1 < 70 && num1 > 50)
	    {
	    	bcount++;
	    	printf("\nThe grade entered was: %d", num1);
	    	sum = sum + num1;
		}
		else if (num1 < 50 && num1 >= 0)
	    {
	    	lcount++;
	    	printf("\nThe grade entered was: %d", num1);
	    	sum = sum + num1;
		}
		else if (num1 > 100)
	    {
	    	printf("\nThe grade entered was invalid, try again");
		}
		else if (num1 == -1)
	    {
	    	i = 1;
		}
	}
	
	float avg = (sum / (lcount + bcount + scount));
	
	printf("\nThe average grade was: %f", avg);
	printf("\nAmount of grades below 50 was: %d", lcount);
	printf("\nAmount of grades between 70 and 50 was: %d", bcount);
	printf("\nAmount of grades above 70 was: %d", lcount);
	
	return 0;
}
*/




// TASK 7

/*
int main () {
	
	int IB = 5000;
	int wcount = 0;
	int dcount = 0;
	int i = 1;
	int num1;
	
	while (i == 1)
	{
		printf("\nEnter a transaction amount: ");
        scanf("%d", &num1);
        
        if (num1 > 0)
        {
        	dcount++;
        	IB = IB + num1;
        	printf("\nYour current balance is: %d", IB);
		}
		if (num1 < 0)
        {
	        wcount++;
        	IB = IB + num1;
        	printf("\nYour current balance is: %d", IB);
		}
		if (num1 == 0)
        {
        	i = 0;
		}
	}
	
	printf("\nYour balance after every transaction is: %d", IB);
	printf("\nThe amount of deposits was %d and the amount of withdrawals was %d", dcount, wcount);
	
	return 0;
}
*/




// TASK 8

/*
int main() {
	
    int number;
    int i;

    printf("Enter a number to generate its multiplication table: ");
    scanf("%d", &number);

    for (i = 1; i <= 10; i++) 
	{
        printf("%d x %d = %d\n", number, i, number * i);
    }

    return 0;
}
*/




// TASK 9

#include <string.h>

/*
int main() {
    int number;
    int largest, smallest;
    char choice[10];
    int firstInput = 1;

    while (1) {
        printf("Enter a number: ");
        scanf("%d", &number);

        if (firstInput) {
            largest = smallest = number;
            firstInput = 0;
        } else {
            if (number > largest)
                largest = number;
            if (number < smallest)
                smallest = number;
        }

        printf("Largest so far: %d\n", largest);
        printf("Smallest so far: %d\n", smallest);

        printf("Do you want to continue? (yes/no): ");
        scanf("%s", choice);

        if (strcmp(choice, "no") == 0 || strcmp(choice, "No") == 0) {
            break;
        }
    }

    printf("Largest number entered: %d\n", largest);
    printf("Smallest number entered: %d\n", smallest);

    return 0;
}
*/




// TASK 10

int main() {
    int number, sum = 0;
    char choice[10];

    while (1) {
        printf("Enter a number: ");
        scanf("%d", &number);

        sum += number;

        printf("Running total: %d\n", sum);

        printf("Do you want to enter another number? (yes/no): ");
        scanf("%s", choice);

        if (strcmp(choice, "no") == 0 || strcmp(choice, "No") == 0) {
            break;
        }
    }

    printf("\nFinal sum of all entered numbers: %d\n", sum);

    return 0;
}

