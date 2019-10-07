#include "utilityFunctions.h"
#include "stdlib.h"
#include "stdio.h"
#include "stdbool.h"

bool isEmpty(int *front, int *rear)
{
    if((*front) == -1 && (*rear) == -1)
        return true;
    else
        return false;
}

void enQueue(int *array, int *front, int *rear, int newElement, int *size, int *curSize)
{
    if(front == (rear+1) % size)
    {
        printf("Your queue is full\n");
    }

    else if(isEmpty())
    {
        (*front)++;
        (*rear)++;
        array[*rear] = newElement;
        (*curSize)++;
    }

    else
    {
        *rear = (*rear +1) % *size;
        arr[*rear] = newElement;
        (*curSize)++;
    }

}
