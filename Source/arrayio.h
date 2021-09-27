#include <stdio.h>

int TakeSmallestElement(int ARRAY[], int ARRAY_LENGTH)
{
    int MIN_NUMBER;

    for (int i = 0; i < 1; i++)
    {
        for (int j = i + 1; j < ARRAY_LENGTH; j++)
        {
            if (ARRAY[i] > ARRAY[j])
            {
                int TEMP = ARRAY[i];
                ARRAY[i] = ARRAY[j];
                ARRAY[j] = ARRAY[i];
                MIN_NUMBER = ARRAY[i];
            }
        }
    }

    return MIN_NUMBER;
}

int TakeBiggestElement(int ARRAY[], int ARRAY_LENGTH)
{
    int MAX_NUMBER;

    for (int i = 0; i < 1; i++)
    {
        for (int j = i + 1; j < ARRAY_LENGTH; j++)
        {
            if (ARRAY[i] < ARRAY[j])
            {
                ARRAY[i] = ARRAY[j];
                MAX_NUMBER = ARRAY[i];
            }
        }
    }

    return MAX_NUMBER;
}

void PrintArray(int ARRAY[], int ARRAY_LENGTH)
{
    printf("{");

    for (int i = 0; i < ARRAY_LENGTH; i++)
    {
        if (i != ARRAY_LENGTH - 1)
        {
            printf("%d, ", ARRAY[i]);
        }
        else
        {
            printf("%d", ARRAY[i]);
        }
    }

    printf("}");
}

void BubbleSort(int ARRAY[], int ARRAY_LENGTH)
{
    for (int i = 0; i < ARRAY_LENGTH; i++)
    {
        for (int j = i + 1; j < ARRAY_LENGTH; j++)
        {
            if (ARRAY[i] > ARRAY[j])
            {
                int TEMP = ARRAY[i];
                ARRAY[i] = ARRAY[j];
                ARRAY[j] = TEMP;
            }
        }
    }
}

void SelectionSort(int ARRAY[], int ARRAY_LENGTH)
{
    int MIN_INDEX;

    for (int i = 0; i < ARRAY_LENGTH; i++)
    {
        MIN_INDEX = i;
        for (int j = i + 1; j < ARRAY_LENGTH; j++)
        {
            if (ARRAY[MIN_INDEX] > ARRAY[j])
            {
                MIN_INDEX = j;
            }
        }

        int TEMP = ARRAY[i];
        ARRAY[i] = ARRAY[MIN_INDEX];
        ARRAY[MIN_INDEX] = TEMP;
    }
}

void InsertionSort(int ARRAY[], int ARRAY_LENGTH)
{
    int KEY;
    int j;

    for (int i = 1; i < ARRAY_LENGTH; i++)
    {
        KEY = ARRAY[i];
        j = i - 1;

        while (j >= 0 && ARRAY[j] > KEY)
        {
            ARRAY[j + 1] = ARRAY[j];
            j = j - 1;
        }
        ARRAY[j + 1] = KEY;
    }
}