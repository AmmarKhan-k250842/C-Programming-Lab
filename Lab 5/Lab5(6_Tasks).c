#include <stdio.h>


//TASK 5

int main () {
    int course;
    char grade;

    printf("Enter your course: ");
    scanf("%d", &course);

    printf("Enter your grade: ");
    scanf(" %c", &grade);  

    switch (course) {
        case 1:
        case 2:
        case 3:
            switch (grade) {
                case 'a':
                    printf("\nYou got an A grade");
                    break;
                case 'b':
                    printf("\nYou got a B grade");
                    break;
                case 'c':
                    printf("\nYou got a C grade");
                    break;
                case 'd':
                    printf("\nYou got a D grade");
                    break;
                case 'e':
                    printf("\nYou got an E grade");
                    break;
                case 'f':
                    printf("\nYou got an F grade");
                    break;
                default:
                    printf("\nEnter a valid grade");
            }
            break;

        default:
            printf("\nEnter a valid course");
    }

    return 0;
}




//TASK 6

int main () {
    
    int x;
    int y;
    int z;

    printf("Enter a number: ");
    scanf("%d", &x);

    printf("Enter a number: ");
    scanf(" %d", &y); 
    
    printf("Enter a number: ");
    scanf(" %d", &z); 
    
    (x > y) && (x > z) ? printf("%d is greatest number", x) :  (y > z) && (y > x) ? printf("%d is greatest number", y) : printf("%d is the greatest number", z);

    return 0;
}




//TASK 7

int main () {
    
    int a;
    int b;

    printf("Enter a number: ");
    scanf("%d", &a);

    printf("Enter a number: ");
    scanf(" %d", &b);
    
    int sum = a + b;
    int diff = a - b;
    int prod = a * b;
    int qout = a / b;
    int rem = a % b;
    
    printf("\nSum: %d", sum);
    printf("\nDifference: %d", diff);
    printf("\nProduct: %d", prod);
    printf("\nQoutient: %d", qout);
    printf("\nRemainder: %d", rem);

    return 0;
}




// TASK 8

int main () {
    
    int a;
    int b;

    printf("Enter a number: ");
    scanf("%d", &a);

    printf("Enter a number: ");
    scanf(" %d", &b);
    
    int eq = a == b;
    int great = a > b;
    int less = a < b;
    int notEq = a != b;
    int greatEq = a >= b;
    int lessEq = a <= b;
    
    printf("\na == b: %d", eq);
    printf("\na > b: %d", great);
    printf("\na < b: %d", less);
    printf("\na != b: %d", notEq);
    printf("\na >= b: %d", greatEq);
    print("\na <= b: %d", lessEq);

    return 0;
}




// TASK 9

int main () {
    
    int a;
    int b;

    printf("Enter a number: ");
    scanf("%d", &a);

    printf("Enter a number: ");
    scanf(" %d", &b);
    
    int And = a & b;
    int Or = a | b;
    int Xor = a ^ b;
    int Nota = ~a;
    int Notb = ~b;
    int lA = a << 1;
    int rA = a >> 1;
    int lb = b << 1;
    int rB = b >> 1;
    
    printf("\na AND b: %d", And);
    printf("\na OR b: %d", Or);
    printf("\na XOR b: %d", Xor);
    printf("\nNOT a: %d", Nota);
    printf("\nNOT b: %d", Notb);
    printf("\nLeft shift a: %d", lA);
    printf("\nLeft shift b: %d", lb);
    printf("\nRight shift a: %d", rA);
    printf("\nRight shift b: %d", rB);

    return 0;
}




// TASK 10

int main() {
int x, y, z;

    printf("Enter three integers:\n");
    scanf("%d %d %d", &x, &y, &z);

    if (x > y) {
        if (x > z) {
            printf("The largest number is: %d\n", x);
        } else {
            printf("The largest number is: %d\n", z);
        }
    } else {
        if (y > z) {
            printf("The largest number is: %d\n", y);
        } else {
            printf("The largest number is: %d\n", z);
        }
    }

    return 0;
}
