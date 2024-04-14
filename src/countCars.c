#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "../include/headerA3.h"

int countCars(a3Car *headLL) {
    int count = 0;
    a3Car *current = headLL;

    // Traverse the linked list 

    while (current != NULL) {
        count++;
        current = current->nextCar;
        
    }

    return count;
}
