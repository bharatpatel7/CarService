#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "../include/headerA3.h"


int lookForCarModelType(struct car *headLL, char key[100]) {
    int position = 1; 


    char copy[100];
    strcpy(copy, key);

    char *model = strtok(copy, " ");
    char *type = strtok(NULL, "\n");  

    a3Car *current = headLL;

    while (current != NULL) {
        if (strcmp(current->model, model) == 0 && strcmp(current->type, type) == 0) {

            // Print the car's data
            printf("Car id: %d\n", current->carId);
            printf("Model: %s\n", current->model);
            printf("Type: %s\n", current->type);
            printf("Price: CDN $%.2lf\n", current->price);
            printf("Year of Manufacture: %d\n", current->year);

            return position; 
        }
        current = current->nextCar;
        
        position++;
    }

    // Car not found
    printf("Car not found.\n");

    return -1;
}
