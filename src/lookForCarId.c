#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "../include/headerA3.h"



int lookForCarId(struct car *headLL, int key) {
    int position = 1; 

    // Traverse the linked list 
    struct car *current = headLL;

    while (current != NULL) {
        if (current->carId == key) {

            return position; // Car found
        }

        
        current = current->nextCar;
        position++;
    }

    // Car not found
    return -1;
}