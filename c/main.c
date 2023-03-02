#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"

void Display(StackEntry e)
{

    printf("%d\n", e);
}
int main() {
    int choice;
    Stack s;
    StackEntry e;
    CreateStack(&s);
    StackTop(&e,&s);
    ClearStack(&s);

    /*Push(1,&s);
    Push(2,&s);
    Push(3,&s);
    Push(4,&s);*/
    printf("size of stack before any operation: %d\n",StackSize(&s));


    printf("\nOperations performed by Stack");
    while(1) {
        printf("\n1.Push the element\n2.Pop the element\n3.Exit");
        printf("\n\nEnter the choice:");
        scanf("%d", &choice);


        switch (choice) {

            case 1:
                if (!StackFull(&s)) {

                    printf("enter the element:");
                    scanf("%d", &e);

                    Push(e, &s);
                    printf("size of stack after pushing: %d\n", StackSize(&s));
                    printf("elements in stack:\n");
                    TraverseStack(&s, &Display);
                }
                break;
            case 2:
                if (!StackEmpty(&s)) {
                    Pop(&e, &s);
                    printf("size of stack after popping: %d\n", StackSize(&s));
                    printf("elements in stack:\n");
                    TraverseStack(&s, &Display);
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
