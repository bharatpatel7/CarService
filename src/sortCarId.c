#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "../include/headerA3.h"



void sortCarId (struct car ** headLL) {

    int swapped;
    a3Car *ptr1;
    a3Car *lptr = NULL;


    if (*headLL == NULL)
        return;

    do {

        swapped = 0;
        ptr1 = *headLL;

        while (ptr1->nextCar != lptr) {
            if (ptr1->carId > ptr1->nextCar->carId) {

                // Swap the data of the two nodes
                a3Car *temp = ptr1;

                ptr1 = ptr1->nextCar;
                temp->nextCar = ptr1->nextCar;
                ptr1->nextCar = temp;


                swapped = 1;
            }

            ptr1 = ptr1->nextCar;
        }

        
        lptr = ptr1;
    } while (swapped);
}
