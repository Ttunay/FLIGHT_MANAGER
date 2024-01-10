#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_FLIGHT 50
#define MAX_PASSENGER 100
struct Flight {
  char flightNumber[20];
  char destination;
  int capacity;
  int numPassengers;
  char passengers[MAX_PASSENGER][50];
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

    switch (choice) {
      case 1:
        displayFlights(flights,numFlights);
        break;
     case 2:
      if(numFlights< MAX_FLIGHT){
        printf("engter flight number: ");
        scanf("%s", flights[numFlights].flightNumber);
        printf("enter destination: ");
        scanf("%s", flights[numFlights].destination);
        printf("enter capacity: ");
        scanf("%d", &flights[numFlights].capacity);
        flights[numFlights].numPassengers = 0;

        numFlights++;

        printf("flight added seccessfully!\n");

      } else {
        printf("max number of flights reached. \n");
      }
     break;
      case 3:
      printf("enter the flight number: \n");
      char flightNumber[20];
      scanf("%s", flightNumber);

      int flightIndex = -1;
        for (int i =0;i<numFlights;i++) {
        if(strcmp(flights[i].flightNumber,flightNumber)==0)
        {
            flightIndex = i;
            break;
          }
        }
      if(flightIndex != -1){
          printf("enter passenger name: ");
          char passengerName[50];
          scanf("%s",passengerName);

          addPassenger(&flights[flightIndex],passengerName);
        } else{
          printf("flight not flound \n");
        }
      break;

      case 4: 
        printf("exiting to the program.\n");
      break;

      default:
          printf("invalid choice, please a valid option\n");
    }
} while (choice != 4); 
}
