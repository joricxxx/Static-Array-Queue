#ifndef ARRAY_QUEUE
#define ARRAY_QUEUE 

#include <stdio.h>
#include <stdlib.h>
typedef int ELEMENT;
typedef struct _queue_array
{
	ELEMENT *storage;
	int size, front, rear, capacity;
} *QUEUE_ARRAY;
QUEUE_ARRAY QUEUE_ARRAY_create(int capacity);
int QUEUE_ARRAY_enqueue(QUEUE_ARRAY, ELEMENT);
int QUEUE_ARRAY_dequeue(QUEUE_ARRAY);
ELEMENT QUEUE_ARRAY_getFront(QUEUE_ARRAY);
int QUEUE_ARRAY_isEmpty(QUEUE_ARRAY);
int QUEUE_ARRAY_isFull(QUEUE_ARRAY);
#endif