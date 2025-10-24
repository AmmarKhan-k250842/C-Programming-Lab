#include <stdio.h>

int main () {
	
	
	/*
	int i, j, k;
	int numArr[2][2][3] = {
		 {{1, 2}, {3, 4}},
		 {{5, 6}, {7, 8}},
		 {{9, 1}, {12, 7}}
	};
	
	for(k = 0; k < 3; k++)
	{
		for(j = 0; j < 2; j++)
		{
			for(i = 0; i < 2; i++)
			{
				printf("%d ", numArr[i][j][k]);	
			}
			
			printf("\n");
		}
		
		printf("\n");
	}
	*/
	
	
	/*
	// CLASS EXAMPLE
	
	int numArr[3][3];
	int row[3];
	int sum, tRow;
	
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			printf("Enter a value for row %d and column %d: ", i+1, j+1);
			scanf("%d", &numArr[i][j]);
			sum = sum + numArr[i][j];
			row[i] = row[i] = numArr[i][j];
		}
	}
	
	printf("\n\n");
	int min = numArr[0][0];
	int max = numArr[0][0];
	
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			printf("%d ", numArr[i][j]);
			
			if(numArr[i][j] < min)
			{
				min = numArr[i][j];
			}
			else if(numArr[i][j] > max)
			{
				max = numArr[i][j];
			}
		}
		printf("\n");
	}
	
	if(row[0] > row[1] && row[0] > row[2])
	{
		tRow = 0;	
	}
	else if(row[1] > row[2] && row[1] > row[0])
	{
		tRow = 1;
	}
	else
	{
		tRow = 2;
	}
	
	printf("\n\nThe sum of all the elements was: %d", sum);
	printf("\nThe smallest value of the element was: %d", min);
	printf("\nThe Largest value of the element was: %d", max);
	printf("\nRow with the largest sum was row: %d", tRow+1);
	*/
	
	
	
	
	/*
	// TASK 1
	
	int numArr[3][3];
	int arr2[3][3];
	int i, j, count;
	
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("Enter a value for row %d and column %d: ", i+1, j+1);
			scanf("%d", &numArr[i][j]);
			arr2[j][i] = numArr[i][j];
		}
	}
	
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			if(numArr[i][j] == arr2[i][j])
			{
				count++;
			}
			else
			{
				printf("Non Symmetric");
				break;
			}
		}
	}
	
	if(count == 9)
	{
		printf("Symmetric");
	}
	*/
	
	
	
	
	/*
	// TASK 2
	
	int num;
	
	printf("Enter the number of rows: ");
	scanf("%d", &num);
	
	for(int i = 0; i <= num; i++)
	{
		for(int j = 1; j <= num - i; j++)
		{
			printf(" ");
		}
		
		for(int k = 1; k <= i; k++)
		{
			printf("%d", k);
		}
		
		printf("\n");
	}
	*/
	
	
	
	
	// TASK 3
	
	int n;
	printf("Enter the size of the matrix (n x n): ");
	scanf("%d", &n);
	
	int matrix[50][50];
	int i, j;
	int MDS = 0, SDS = 0, TotalSum;
	
	printf("Enter elements of the matrix: ");
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			scanf("%d", &matrix[i][j]);
		}
	}
	
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			if (i == j)
			{
				MDS += matrix[i][j];
			}
			else if (i + j == n - 1)
			{
				SDS += matrix[i][j];
			}
		}
	}
	
	TotalSum = MDS + SDS;
	
	if (n % 2 == 1)
	{
		TotalSum -= matrix[n/2][n/2];
	}
	
	printf("\n\nSum of Main Daigonal: %d", MDS);
	printf("\nSum of Secondary Daigonal: %d", SDS);
	printf("\nSum of All Daigonals: %d", TotalSum);
	
	return 0;
	
	
}
