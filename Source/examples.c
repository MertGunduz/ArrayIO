#include <stdio.h>
#include <stdlib.h>
#include "arrayio.h"

int main(void) 
{
            int ARRAY_BUBBLESORT[] = {5, 64, 457, 3245, 653, 3, 65, 52, 659, 921, 1004, 2591, 2, 532, 901};
            int ARRAY_SELECTIONSORT[] = {54, 73, 15, 543, 65, 60, 92, 99, 195, 251, 756, 6546, 30, 53, 230};
            int ARRAY_INSERTIONSORT[] = {521, 765, 95, 5, 2, 69, 125, 99, 101, 5285, 515, 7549, 5125, 5, 509};
            
            int ARRAY_LENGTH = 15;

            printf("First Array (Before Bubble Sort)\n");
            PrintArray(ARRAY_BUBBLESORT, ARRAY_LENGTH);

            printf("\n\n");

            printf("Second Array (Before Selection Sort)\n");
            PrintArray(ARRAY_SELECTIONSORT, ARRAY_LENGTH);

            printf("\n\n");

            printf("Third Array (Before Insertion Sort)\n");
            PrintArray(ARRAY_INSERTIONSORT, ARRAY_LENGTH);
            
            printf("\n\n");

            printf("First Array (After Bubble Sort)\n");
            BubbleSort(ARRAY_BUBBLESORT, ARRAY_LENGTH);
            PrintArray(ARRAY_BUBBLESORT, ARRAY_LENGTH);

            printf("\n\n");

            printf("Second Array (After Selection Sort)\n");
            SelectionSort(ARRAY_SELECTIONSORT, ARRAY_LENGTH);
            PrintArray(ARRAY_SELECTIONSORT, ARRAY_LENGTH);

            printf("\n\n");

            printf("Third Array (After Insertion Sort)\n");
            InsertionSort(ARRAY_INSERTIONSORT, ARRAY_LENGTH);
            PrintArray(ARRAY_INSERTIONSORT, ARRAY_LENGTH);
}