#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "../include/headerA3.h"

void printOne(struct car *headLL, int whichOne) {

    if (headLL == NULL) {
        printf("No cars found.\n");
        return;
    }

    int count = 1;
    struct car *current = headLL;

    while (current != NULL && count < whichOne) {
        current = current->nextCar;
        count++;
    }

    if (current == NULL) {
        
        printf("Invalid position. Position exceeds the number of cars in the list.\n");
        return;
    }

    printf("Car id: %d\n", current->carId);
    printf("Model: %s\n", current->model);
    printf("Type: %s\n", current->type);
    printf("Price: CDN $%.2lf\n", current->price);
    printf("Year of Manufacture: %d\n", current->year);
}