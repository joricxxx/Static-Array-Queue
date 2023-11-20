#include "array_queue.h"
void displayQueue(QUEUE_ARRAY queue)
{
	printf("[");
	for(int i = 0; i < queue->size; i++)
		printf("%d ", queue->storage[(queue->front++)%queue->capacity]);
	printf("]\n");
}
int main()
{
	QUEUE_ARRAY queue = QUEUE_ARRAY_create(5);
	QUEUE_ARRAY_enqueue(queue, 10);
	QUEUE_ARRAY_enqueue(queue, 89);
	QUEUE_ARRAY_enqueue(queue, 34);
	QUEUE_ARRAY_enqueue(queue, 77);
	QUEUE_ARRAY_enqueue(queue, 15);
	QUEUE_ARRAY_dequeue(queue);
	QUEUE_ARRAY_dequeue(queue);	
	displayQueue(queue);

}