#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "../include/headerA3.h"

void oneLessCar(a3Car **headLL, int whichOne) {
    
    if (*headLL == NULL) {
        printf("Linked list is empty.\n");
        return;
    }

    
    int totalCars = countCars(*headLL);

    
    while (whichOne < 1 || whichOne > totalCars) {

        printf("Invalid input. Please enter a value between 1 and %d: ", totalCars);
        scanf("%d", &whichOne);
    }

    // Remove the nth car from the linked list
    a3Car *temp = *headLL;

    if (whichOne == 1) {
        *headLL = temp->nextCar;
        
        printf("Car [Id: %d] removed.\n", temp->carId);
        free(temp);
    } else {
        for (int i = 1; temp != NULL && i < whichOne - 1; i++) {


            temp = temp->nextCar;
        }

        if (temp == NULL || temp->nextCar == NULL) {
            printf("Invalid input.\n");
            return;
        }

        a3Car *next = temp->nextCar->nextCar;
        printf("Car [Id: %d] removed.\n", temp->nextCar->carId);
        free(temp->nextCar);
        
        temp->nextCar = next;
    }
}
