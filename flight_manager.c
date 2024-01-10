#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_FLIGHT 50
#define MAX_PASSAGER 100

void displayFlights(const struct FLight flight[],int numFlights)
{}
void addPassenger(struct FLight *flight, const char *passengerName)
{}
int main()
{
  struct Flight flights[MAX_FLIGHT];
  int numFlights = 0;
  int choice;
  do {
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