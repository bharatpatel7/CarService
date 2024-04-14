#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "../include/headerA3.h"

void addNewCar (struct car ** headLL){

        struct car *newCar = (struct car *)malloc(sizeof(struct car));

        if (newCar == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }

    printf("Enter the car model: ");
    fgets(newCar->model, MAX_LENGTH, stdin);

    newCar->model[strcspn(newCar->model, "\n")] = '\0';

    printf("Enter the car type: ");
    fgets(newCar->type, MAX_LENGTH, stdin);


    newCar->type[strcspn(newCar->type, "\n")] = '\0'; 

    printf("Enter its year of manufacture: ");
    scanf("%d", &newCar->year);

    printf("Enter its price: ");
    scanf("%lf", &newCar->price);


    int asciiSum = 0;
    
    for (int i = 0; i < strlen(newCar->model); i++) {
        asciiSum += newCar->model[i];
    }

    newCar->carId = asciiSum + strlen(newCar->type);


    struct car *current = *headLL;

    while (current != NULL) {
        if (current->carId == newCar->carId) {
           
            newCar->carId += rand() % 999 + 1;
            current = *headLL; 
        } else {

            current = current->nextCar;
        }
    }

    newCar->nextCar = NULL;

if (*headLL == NULL) {
        *headLL = newCar;
    } else {
       
        struct car *temp = *headLL;
        while (temp->nextCar != NULL) {
            temp = temp->nextCar;
        }

        temp->nextCar = newCar;
        
    }

    printf("Car added successfully.\n");

}