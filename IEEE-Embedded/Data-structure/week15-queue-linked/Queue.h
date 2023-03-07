
#include <stdio.h>
#include <stdlib.h>
typedef int QueueEntry;
typedef struct queuenode
{
    QueueEntry entry;
    struct queuenode *next;

}QueueNode;
typedef struct queue{
    QueueNode *front;
    QueueNode *rear;
    int size ;
}Queue;

void CreateQueue      (Queue*);
int  Enqueue          (QueueEntry e ,Queue *);
void Dequeue          (QueueEntry * ,Queue *);
int  QueueEmpty       (Queue*);
int  QueueFull        (Queue*);
int  QueueSize        (Queue*);
void ClearQueue       (Queue*);
void TraverseQueue    (Queue*,void(*)(QueueEntry));