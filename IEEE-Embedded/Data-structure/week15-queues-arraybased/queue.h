
#include <stdio.h>
#include <stdlib.h>
#define MAXQUEUE 100
typedef int QueueEntry;
typedef struct queue{
    int front;
    int rear;
    int size;
    QueueEntry entry [MAXQUEUE];
}Queue;

void CreateQueue   (Queue *);

void Enqueue      (QueueEntry e,Queue*);

void Dequeue(QueueEntry *,Queue*);

int QueueEmpty(Queue *);

int QueueFull(Queue *);

int QueueSize(Queue*);

void ClearQueue(Queue*);

void TraverseQueue(Queue *,void(*)(QueueEntry));
