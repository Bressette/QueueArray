#define UTILITY_FUNCTIONS_C
#ifndef UTILITY_FUNCTIONS_C

void enQueue(int *array, int *front, int *rear);
void deQueue(int *array, int *front, int *rear);
int frontElement(int *array, int *front);
bool isEmpty(int *array, int *front);
int sizeOfQueue(int *array);

//(rear+1) % sizeOfArray

#endif // UTILITY_FUNCTIONS_C
