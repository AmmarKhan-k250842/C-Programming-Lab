#include <stdio.h>
#include <string.h>

int main () {
	
	
	/*
	int numArr[5] = {3, 8, 5, 1, 7};
	int i; 
	
	printf("Base Address\tArray Index\tArray Data\tActual Address");
	for (i = 0; i < 5; i++)
	{
		printf("\n%d\t\t%d\t\t%d\t\t%d", numArr, i, numArr[i], numArr+i);
	}
	*/
	
	
	
	
	/*
	char vowel[100];
	int i;
	int vCount = 0;
	
	printf("Enter a word: ");
	scanf("%s", vowel);
	
	for (i = 0; vowel[i] != '\0'; i++)
	{
		if (vowel[i] == 'a' || vowel[i] == 'e' || vowel[i] == 'i' || vowel[i] == 'o' || vowel[i] == 'u')
		{
			vCount++;
		}
	}
	
	printf("\n\nThe word was: %s", vowel);
	printf("\nAmount of Vowels: %d", vCount);
	*/
	
	
	
	
	/*
	char word[] = "Hello";
	int test[10];
	int x = 0;
	x = sizeof(test);
	int length = strlen(word);
	printf("%d\n\n", length);
	printf("%d", sizeof(test)); 
	*/
	
	
	
	
	// TASK 1
	
	/*
	int nArr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int rArr[10];
	int i = 9;
	int x = 0;
	int temp;
	int sum = 0;
	
	for(i = 9; i >= 0; i--)
	{
		temp = nArr[i];
		rArr[x] = temp;
		x++;	
	}
	
	for(i = 0; i < 10; i++)
	{
		printf("%d  ", nArr[i]);
	}
	printf("\n\n");
	for(i = 0; i < 10; i++)
	{
		printf("%d  ", rArr[i]);
		sum = rArr[i] + sum;
	}
	
	printf("\n\nSum of all the elements: %d", sum);
	*/
	
	
	
	
	// TASK 2
	
	/*
	int set[10] = {2, 4, 3, 7, 21, 5, 12, 65, 22, 43};
	int eSum = 0;
	int oSum = 0;
	
	for(int i = 0; i < 10; i++)
	{
		if ((set[i] % 2) == 0)
		{
			eSum = eSum + set[i];
			set[i] = 1;
		}
		else 
		{
			oSum = oSum + set[i];
			set[i] = 0;
		}
	}
	
	printf("The sum of even numbers is: %d", eSum);
	printf("\nThe sum of odd numbers is: %d\n", oSum);
	printf("\n\nThe array afterwards (1 for even, 0 for odd): \n");	
	
	for(int i = 0; i < 10; i++)
	{
		printf("%d  ", set[i]);
	}
	*/
	
	
	
	
	// TASK 3
	
	
	char find;
	char word[100];
	int i;
	int fCount = 0;
	
	printf("\nEnter the character you want to search for: ");
	scanf("%c", &find);
	printf("Enter a word: ");
	scanf("%s", &word);
	
	int length = strlen(word);
	
	for(i = 0; i < length; i++)
	{
		if (word[i] == find)
		{
			fCount++;
		}
	}
	
	printf("\n\nThe amount of times the character appeared was: %d", fCount);
	
	
	return 0;
	
}