#include <stdio.h>


// TASK 1

/*
int sum (int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return (n%10 + sum(n / 10));
    }
}

int main ()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("\nSum of digits is: %d", sum(num));
}
*/




// TASK 2

/*
struct library
{
    char title[100];
    char author[100];
    int pCount;
    int price;
}lib;

int main ()
{
    struct library lib = {"JK Rowling", "Harry Potter", 6, 2999};

    printf("Book Author: %s", lib.author);
    printf("\nBook title: %s", lib.title);
    printf("\nBook count: %d", lib.pCount);
    printf("\nBook price: %d", lib.price);

}
*/




// TASK 3

/*
#include <string.h>

#define MAX_FLIGHTS 5
#define STR_LEN 50

typedef struct {
int flight_number;
char departure_city[STR_LEN];
char destination_city[STR_LEN];
char date[STR_LEN];
int available_seats;
} Flight;

void addFlight(Flight flights[], int *count);
void displayDetails(Flight f);
void showAllFlights(Flight flights[], int count);
void bookSeat(Flight flights[], int count);

int main() {
Flight flights[MAX_FLIGHTS];
int flightCount = 0;
int choice;

do {
printf("\n===== Flight Management System =====\n");
printf("1. Add Flight\n");
printf("2. Book a Seat\n");
printf("3. Show All Flights\n");
printf("4. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);

if (choice == 1) {
addFlight(flights, &flightCount);
} else if (choice == 2) {
bookSeat(flights, flightCount);
} else if (choice == 3) {
showAllFlights(flights, flightCount);
} else if (choice == 4) {
printf("Exiting program...\n");
} else {
printf("Invalid choice. Try again.\n");
}

} while (choice != 4);

return 0;
}

void addFlight(Flight flights[], int *count) {
if (*count >= MAX_FLIGHTS) {
printf("Cannot add more flights. Array is full.\n");
return;
}

Flight f;

printf("Enter flight number: ");
scanf("%d", &f.flight_number);

printf("Enter departure city: ");
scanf("%s", f.departure_city);

printf("Enter destination city: ");
scanf("%s", f.destination_city);

printf("Enter date (e.g. 21-11-2025): ");
scanf("%s", f.date);

printf("Enter available seats: ");
scanf("%d", &f.available_seats);

flights[*count] = f; 
(*count)++;

printf("Flight added successfully.\n");
}

void displayDetails(Flight f) {
printf("\nFlight Number : %d\n", f.flight_number);
printf("Departure City : %s\n", f.departure_city);
printf("Destination City: %s\n", f.destination_city);
printf("Date : %s\n", f.date);
printf("Available Seats : %d\n", f.available_seats);
}

void showAllFlights(Flight flights[], int count) {
if (count == 0) {
printf("No flights to show.\n");
return;
}

printf("\n--- All Flights ---\n");
for (int i = 0; i < count; i++) {
printf("Flight #%d:\n", i + 1);
displayDetails(flights[i]);
}
}

void bookSeat(Flight flights[], int count) {
if (count == 0) {
printf("No flights available to book.\n");
return;
}

int number;
printf("Enter flight number to book a seat: ");
scanf("%d", &number);

int found = 0;
for (int i = 0; i < count; i++) {
if (flights[i].flight_number == number) {
found = 1;
if (flights[i].available_seats > 0) {
flights[i].available_seats--;
printf("Seat booked successfully.\n");
printf("Updated details:\n");
displayDetails(flights[i]);
} else {
printf("No seats available on this flight.\n");
}
break;
}
}

if (!found) {
printf("Flight not found.\n");
}
}
*/




// TASK 4

int main() {
	
const float PI = 3.14159;
float radius;
float circumference, area;

printf("Enter radius of the circle: ");
scanf("%f", &radius);

circumference = 2 * PI * radius;
area = PI * radius * radius; 

printf("For radius = %.2f\n", radius);
printf("Circumference = %.2f\n", circumference);
printf("Area = %.2f\n", area);

return 0;
}
























