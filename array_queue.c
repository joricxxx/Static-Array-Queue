#include "array_queue.h"
QUEUE_ARRAY QUEUE_ARRAY_create(int capacity)
{
	QUEUE_ARRAY queue = (QUEUE_ARRAY)malloc(sizeof(struct _queue_array));
	queue->storage = (ELEMENT*)malloc(sizeof(ELEMENT)*capacity);
	queue->size = queue->front = queue->rear = 0;
	queue->capacity = capacity;
	return queue;
}
int QUEUE_ARRAY_enqueue(QUEUE_ARRAY queue, ELEMENT data)
{
	if(queue->size == queue->capacity)
		return 0;
	queue->storage[queue->rear++] = data;
	queue->rear = queue->rear % queue->capacity;
	queue->size++;
	return 1;
}
int QUEUE_ARRAY_dequeue(QUEUE_ARRAY queue)
{
	if(queue->size == 0)
		return 0;
	queue->front = (queue->front+1) % queue->capacity;
	queue->size--;
	return 1;
}
ELEMENT QUEUE_ARRAY_getFront(QUEUE_ARRAY queue)
{
	return queue->storage[queue->front];
}
int QUEUE_ARRAY_isEmpty(QUEUE_ARRAY)
{
	return queue->size == 0;
}
int QUEUE_ARRAY_isFull(QUEUE_ARRAY queue)
{
	return queue->size == queue->capacity;
}