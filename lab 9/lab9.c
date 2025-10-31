#include <stdio.h>

int max();
int sort();
int square();
int displayMatrix();
int calculateSum();
int calculateAverage();
int findMax();

int main () {
	
	/*
	int num[10];
	
	for(int i = 0; i < 10; i++)
	{
		printf("Enter a number: ");
		scanf("%d", &num[i]);
	}
 	
 	printf("\n\nUnsorted Array: \n\n");
    for(int i = 0; i < 10; i++)
 	{
 		printf("%d ", num[i]);	
	}
	
	int result = sort(num[10]);
	
	printf("\n\nSorted Array: \n\n");
    for(int i = 0; i < 10; i++)
 	{
 		printf("%d ", num[i]);	
	}
	*/
	
	
	
	
	
	// TASK 1
	
	/*
	int num;
	
	printf("Enter the number you want to square: ");
	scanf("%d", &num);
	
	int ans = square(num);
	
	printf("Squared Number: %d", ans);
 	*/
 	
 	
 	
 	
 	
 	
 	// TASK 2
 	
 	/*
 	int num[5];
 	
 	for(int i = 0; i < 5; i++)
 	{
 		printf("Enter a value: ");
 		scanf("%d", &num[i]);
	}
	
	printf("\n\nArray Values: \n\n");
 	
 	for(int j = 0; j < 5; j++)
 	{
 		printf("\n%d ", *(num + j));
 		printf("\n%p ", &*(num + j));
	}
 	*/
 	
 	
 	
 	
 	// TASK 3
 	
 	
 	int numArr[2][3] = {{4, 2, 5}, {7, 9, 1}};
 	
 	findMax(numArr);
 	
	return 0;
	
}


int displayMatrix(int arr[2][3])
{
	printf("Matrix: \n\n");
	for(int i = 0; i < 2; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

int calculateSum(int arr[2][3])
{
	int sum = 0;
	for(int i = 0; i < 2; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			sum += arr[i][j];
		}
	}
	
	printf("\n\nSum of the matrix is: %d", sum);
}


int calculateAverage(int arr[2][3])
{
	int avg = 0;
	for(int i = 0; i < 2; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			avg += arr[i][j];
		}
	}
	
	int x = avg/6;
	
	printf("\n\nAverage of the matrix is: %d", x);
}

int findMax(int arr[2][3])
{
	int max = arr[0][0];
	for(int i = 0; i < 2; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			if(arr[i][j] > max)
			{
				max = arr[i][j];
			}
		}
	}
	
	printf("\n\nLargest value of Array was: %d", max);
}




int square(int a)
{
	int x = a * a;
	return x;
}


/*
int max(int a, int b, int c) 
{
	if (a > b && a > c)
	{
		return a;	
	}
	else if (b > a && b > c)
	{
		return b;
	}
	else
	{
		return c;
	}	
}


int sort(int sArr[10])
{
	int temp; 
	
	for(int i = 0; i < 10; i++)
	{
		for(int j = 0; j < 10; j++)
		{
			if(sArr[j] > sArr[j + 1])
			{
				temp = sArr[j];
				sArr[j] = sArr[j + 1];
				sArr[j + 1] = temp;
			}
		}
	}
}
*/