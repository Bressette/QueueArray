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
