#define UTILITY_FUNCTIONS_C
#ifndef UTILITY_FUNCTIONS_C

void enQueue(int *array, int *front, int *rear, int newElement, int *size, int *curSize);
void deQueue(int *array, int *front, int *rear, int *size, int *curSize);
int frontElement(int *array, int *front);
bool isEmpty(int *front, int *rear);
int sizeOfQueue(int *array);

//(rear+1) % sizeOfArray

#endif // UTILITY_FUNCTIONS_C
