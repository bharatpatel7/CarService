#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "../include/headerA3.h"


void loadCarData (struct car ** headLL, char fileName [MAX_LENGTH]) {
    FILE *file = fopen(fileName, "r");

    if (file == NULL) {
        printf("Failed to open file.\n");
        return;
    }

    char line[MAX_LENGTH];

    while (fgets(line, sizeof(line), file)) {
        a3Car *newCar = (a3Car *)malloc(sizeof(a3Car));


        if (newCar == NULL) {
            printf("Memory allocation failed.\n");
            fclose(file);
            return;
        }

        int year;
        double price;
        int carId;
        char model[MAX_LENGTH];
        char type[MAX_LENGTH];

        if (sscanf(line, "%d,%[^,],%[^,],%d,%lf", &carId, model, type, &year, &price) == 5) {
            
            a3Car *current = *headLL;
            while (current != NULL) {
                if (current->carId == carId) {
                    
                    // Generate a new carId
                    carId += rand() % 1000 + 1; 
                    current = *headLL; 


                } else {

                    current = current->nextCar;
                }
            }

            newCar->carId = carId;
            newCar->year = year;
            newCar->price = price;
            strcpy(newCar->model, model);
            strcpy(newCar->type, type);

            // Add the new car to the linked list
            newCar->nextCar = *headLL;
            *headLL = newCar;

        } else {


            free(newCar);
            printf("Invalid data format in file.\n");
        }
    }

    fclose(file);
    printf("Car data loaded from file.\n");
    
}
