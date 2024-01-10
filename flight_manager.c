#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_FLIGHT 50
#define MAX_PASSENGER 100
struct Flight {
  char flightNumber[20];
  char destination;
};
void displayFlights(const struct Flight flight[],int numFlights)
{}
void addPassenger(struct Flight *flight, const char *passengerName)
{}
int main()
{
  struct Flight flights[MAX_FLIGHT];
  int numFlights = 0;
  int choice;
  do {
    printf("\n-------------------------WELCOME-------------------------------\n");
    printf("\nAirport Managermt System\n");
    printf("1. Display flight\n");
    printf("2 Add flight\n");
    printf("3 Add passenger to flight\n");
    printf("4 Exit\n");
    printf("Enter to choise: ");
    scanf("%d", &choice);
}
while (choice != 4);
} 
