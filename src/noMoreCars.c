#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "../include/headerA3.h"


void noMoreCars(a3Car **headLL) {
    char confirm;

    do {
        
        printf("Are you sure you want to remove all car data (enter y for yes, n for no): ");
        scanf(" %c", &confirm);
        if (confirm != 'y' && confirm != 'n') {
            printf("Invalid input. Please enter 'y' or 'n'.\n");
        }
        
    } while (confirm != 'y' && confirm != 'n');

    if (confirm == 'y') {
       

        while (*headLL != NULL) {
            a3Car *temp = *headLL;
            *headLL = (*headLL)->nextCar;
            free(temp);

        }
        printf("All removed. Linked list is now empty.\n");
    }
}
