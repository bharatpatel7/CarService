#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "../include/headerA3.h"

int main(){

      a3Car *head = NULL;

    int choice;

    do {
        printf("\nMenu:\n");
        //done
        printf("1. Add data on a new car\n");
        //done
        printf("2. Print data of all cars\n");
        //done
        printf("3. Print data of a specific car\n");
        //done
        printf("4. Search car data based on carId\n");
        //done
        printf("5. Search car data based on model and type\n");
        //done
        printf("6. Sort cars by carId\n");
        //done
        printf("7. Load data on cars from a given text file\n");
        //done
        printf("8. Count the total number of cars in the list\n");
        //done
        printf("9. Remove data of a specific car\n");
        //done
        printf("10. Remove all car data\n");
        //done
        printf("11. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        getchar();

        switch (choice) {
            case 1:
            
                addNewCar(&head);
                break;

            case 2:
                printAll(head);

                break;
            case 3:
                
                printf("Enter the position of the car: ");
                int pos;
                 scanf("%d", &pos);
                 printOne(head, pos);
                break;


            case 4:
                printf("Enter carId to search: ");
                int carId;
                scanf("%d", &carId);
                int position = lookForCarId(head, carId);
                if (position != -1) {
                    printf("Car found at position: %d\n", position);
                } else {
                    printf("Car not found.\n");
                }
                break;

            case 5:
                printf("Enter model and type to search: ");
                char model[50];
                char type[50];
                scanf("%s %s", model, type);
                char modelType[100];
                sprintf(modelType, "%s %s", model, type);
                lookForCarModelType(head, modelType);
                break;


            case 6:
                sortCarId(&head);
                printf("Cars sorted by carId.\n");
                break;

            case 7:
                printf("Enter the filename: ");
                char fileName[MAX_LENGTH];
                fgets(fileName, MAX_LENGTH, stdin);
                fileName[strcspn(fileName, "\n")] = '\0';  // Remove newline character
                loadCarData(&head, fileName);
                break;

            case 8:
                printf("Total number of cars: %d\n", countCars(head));

                break;

            case 9:
                printf("Enter the position of the car to remove: ");
                int posToRemove;
                scanf("%d", &posToRemove);

                oneLessCar(&head, posToRemove);
                printf("Car data removed.\n");

                break;

            case 10:

                noMoreCars(&head);
                printf("All car data removed.\n");
                break;

            case 11:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice. Please enter a number between 1 and 11.\n");
        }
        
    } while (choice != 11);

    return 0;

}