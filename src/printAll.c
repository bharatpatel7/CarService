#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "../include/headerA3.h"


void printAll (struct car * headLL) {
    if (headLL == NULL) {
        printf("No cars found.\n");
        return;
    }

    int count = 0;
    
    a3Car *current = headLL;

    while (current != NULL) {

        count++;
        printf("Car # %d:\n", count);
        printf("Car id: %d\n", current->carId);
        printf("Model: %s\n", current->model);
        printf("Type: %s\n", current->type);
        printf("Price: CDN $%.2lf\n", current->price);
        printf("Year of Manufacture: %d\n", current->year);
        printf("\n");
        current = current->nextCar;

        
    }

    printf("Currently, there are %d cars.\n", count);
}
