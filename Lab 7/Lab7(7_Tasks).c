#include <stdio.h>
#include <string.h>


int main () {
	
	
	// TASK 4
	
	int score[10] = {23, 67, 89, 92, 78, 56, 64, 47, 31, 11};
	int temp, i, j, median;
	
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (score[j] > score[j + 1])
			{
				temp = score[j + 1];
				score[j + 1] = score[j];
				score[j] = temp;
			}
		}
	}
	
	printf("Sorted Array: \n\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d  ", score[i]);
	}
	
	median = (10 + 1) / 2;
	
	printf("\n\n\nMedian Score is: %d", score[median]);
	
	return 0;
	
	
	
	
	// TASK 5
    
    int i, min, max, sum, maxI, minI;
    int grades[10];
    
    printf("Enter a grade: ");
    scanf("%d", &grades[0]);
    max = grades[0];
    min = grades[0];
    sum = grades[0];
    
    for(i = 1; i < 10; i++)
    {
    	printf("Enter a grade: ");
    	scanf("%d", &grades[i]);
    	
    	sum = sum + grades[i];
    	
    	if (grades[i] > max)
    	{
    		max = grades[i];
    		maxI = i; 
		}
		else if (grades[i] < min)
		{
			min = grades[i];
			minI = i;
		}
	}
    
    float avg = sum / 10;
    
    printf("\n\nGrades of students before change: \n\n");
    for(i = 0; i < 10; i++)
    {
    	printf("\nStudent %d grades: %d", i + 1, grades[i]);
	}
	printf("\n\nThe minimum grade was %d on index %d", min, minI);
	printf("\nThe maximum grade was %d on index %d", max, maxI);
	printf("\nAverage Grade: %f", avg);
	
	grades[minI] = 0;
	
	printf("\n\nGrades after changing minimum grade to 0: \n");
    for(i = 0; i < 10; i++)
    {
    	printf("\nStudent %d grades: %d", i, grades[i]);
	}
	
	
	
	
	// TASK 6
	
	int i, bNum[5], aNum[5];
    
    for(i = 0; i < 5; i++)
    {
    	printf("Enter a number: ");
    	scanf("%d", &bNum[i]);
    	
    	aNum[i] = (((bNum[i] + 10) - 5) * 2); 
	}
	
	printf("\n\nBefore Calculation \t After Calculation\n");
	for(i = 0; i < 5; i++)
	{
		printf("%d \t\t\t %d\n", bNum[i], aNum[i]);
	}
	
	
	
	
	// TASK 7
	
	int ID;
	int count = 0;
	int inventory[10];
	int inventory2[10];
	
	for (int i = 0 ; i < 10 ; i++)
	{
		printf("enter a 3-digit ID: ");
		scanf("%d" , &inventory[i]);
	}
	
	printf("enter the 3-digit ID to remove: ");
	scanf("%d" , &ID);
	
	for (int i = 0 ; i < 10 ; i++)
	{
		if (ID == inventory[i])
		{
			inventory[i] = 0;
		}
		else
		{
			inventory2[count] = inventory[i];
			count++;
		}
	}
	
	printf("\n\nUpdated Inventory: \n");
	for (int i = 0 ; i < 10 ; i++)
	{
		if (inventory2[i] != 0)
		{
			printf("%d " , inventory2[i]);
		}
	}
	
	
	
	
	// TASK 8
	
	char word[100], find, uChar;
	int i, wLen;
	
	printf("Enter a word: ");
	scanf("%s", &word);
	
	wLen = strlen(word);
	
	for(i = 0; i < wLen; i++)
	{
		if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u')
		{
			uChar = toupper(word[i]);
			word[i] = uChar;
		}
	}
	
	printf("\n\nWord after Changes: %s", word);
	
	return 0;
	
	
	
	
	// TASK 9
	
	int array1[5];
	int array2[5];
	int array3[10];
	
	for (int i = 0 ; i < 5 ; i++)
	{
		printf("Enter Data for First Array: ");
		scanf("%i" , &array1[i]);
		printf("Enter Data for Second Array: ");
		scanf("%i" , &array2[i]);
	}
	
	for (int i = 0; i < 10 ; i++)
	{
		if (i < 5)
		{
			array3[i] = array1[i];
		}
		else
		{
			array3[i] = array2[i-5];
		}
	}
	
	printf("\n\nMERGED ARRAY: \n");
	for (int i = 0 ; i < 10 ; i++){
		printf("%i " , array3[i]);
	}
	
	return 0;
	
	
	
	
	// TASK 10
	
	int size, number, index, val;
	
	printf("Enter the size of array: ");
	scanf("%d" , &size);
	
	int array[size];
	
	for (int i = 0 ; i < size ; i++)
	{
		printf("Enter Data: ");
		scanf("%i" , &array[i]);
	}
	
	printf("\nArray: ");
	for (int i = 0 ; i < size ; i++)
	{
		printf("%i  " , array[i]);
	}
	
	printf("\n\nEnter the index whichs value you want to change: ");
	scanf("%d" , &index);
	printf("\n\nEnter the Value: ");
	scanf("%d" , &val);
	
	array[index-1] = val;
	
	printf("\n\nUpdated Array: ");
	for (int i = 0 ; i < size ; i++)
	{
		printf("%i  " , array[i]);
	}	

	return 0;
	
}