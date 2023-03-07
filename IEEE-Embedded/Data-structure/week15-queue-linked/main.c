
#include "Queue.h"
void Display(QueueEntry  e)
{

    printf("%d\n", e);
}
int main() {
    int choice;
    Queue q;
    QueueEntry e;
    CreateQueue(&q);





    printf("size of Queue before any operation: %d\n", QueueSize(&q));


    printf("\nOperations performed by Queue");
    while(1) {
        printf("\n1.Enqueue the element\n2.Dequeue the element\n3.Exit");
        printf("\n\nEnter the choice:");
        scanf("%d", &choice);


        switch (choice) {

            case 1:
                if (!QueueFull(&e)) {

                    printf("enter the element:");
                    scanf("%d", &e);

                    Enqueue(e, &q);

                    printf("size of Queue after enqueue: %d\n", QueueSize(&q));


                    printf("elements in Queue:\n");
                    TraverseQueue(&q, Display);

                }
                break;
            case 2:
                if (!QueueEmpty(&q)) {
                    Dequeue(&e, &q);
                    printf("size of Queue after Dequeue: %d\n", QueueSize(&q));
                    printf("elements in Queue:\n");
                    TraverseQueue(&q,&Display);


                }
                break;


            case 3 :
                exit(0);

            default:
                printf("\nInvalid choice!!");
        }

    }

    return 0;
}
