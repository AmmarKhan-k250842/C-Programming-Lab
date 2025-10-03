#include <stdio.h>



// TASK 1

int main() {
	
    int num;
    int evenCount = 0, oddCount = 0;
    char choice;

    do {
       
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num % 2 == 0) {
            printf("%d is Even.\n", num);
            evenCount++;
        } else {
            printf("%d is Odd.\n", num);
            oddCount++;
        }

        printf("Do you want to continue? (y for yes / n for no): ");
        scanf(" %c", &choice); 

    } while (choice == 'y' || choice == 'Y');

    printf("\n--- Summary ---\n");
    printf("Total Even numbers entered: %d\n", evenCount);
    printf("Total Odd numbers entered: %d\n", oddCount);

    return 0;
}




// TASK 2

int main() {
    int n, i, j, isPrime;
    int count = 0, sum = 0;

    printf("Enter a number n: ");
    scanf("%d", &n);

    printf("Prime numbers up to %d are:\n", n);

    for (i = 2; i <= n; i++) {
        isPrime = 1; 

        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime) {
            printf("%d ", i);
            count++;
            sum += i;
        }
    }

    printf("\n\nTotal prime numbers up to %d: %d\n", n, count);
    printf("Sum of prime numbers up to %d: %d\n", n, sum);

    return 0;
}




// TASK 3

int main() {
    int n, i;
    long long first = 0, second = 1, next;
    long long sum = 0;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 0;
    }

    printf("Fibonacci sequence up to %d terms:\n", n);

    for (i = 1; i <= n; i++) {
        if (i == 1) {
            next = first;
        } else if (i == 2) {
            next = second;
        } else {
            next = first + second;
            first = second;
            second = next;
        }

        printf("%lld ", next);
        sum += next;
    }

    printf("\n\nSum of Fibonacci sequence up to %d terms: %lld\n", n, sum);

    return 0;
}




// TASK 4

int main(){
	char check , letter;
	int vowel=0;
	int consonant=0;
	
	
	printf("enter 'y' to start entering letters or enter 'n' to exit: \n");
	scanf(" %c" , &check);
	while (check == 'y'){
		printf("enter your letter: \n");
		scanf(" %c" , &letter);
		switch (letter){
			case 'A':
			case 'a':
				vowel++;
				break;
			case 'e':
			case 'E':
				vowel++;
				break;
			case 'i':
			case 'I':
				vowel++;
				break;
			case 'o':
			case 'O':
				vowel++;
				break;
			case 'u':
			case 'U':
				vowel++;
				break;
			default:
				consonant++;
				break;
		}
		printf("enter 'y' to continue or 'n' for exit: ");
		scanf(" %c" , &check);
	}
	printf("you entered %d vowels\n" ,vowel);
	printf("\nyou entered %d consonants" , consonant);
}

