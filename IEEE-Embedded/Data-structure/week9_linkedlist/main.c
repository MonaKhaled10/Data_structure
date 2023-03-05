#include <stdio.h>
#include <stdlib.h>
#include"linked.h"

struct node{
    u8 data;
    struct node *link;

};


void add_at_end(struct node *head,int data)
{
    struct node *ptr,*temp;
    ptr=head;
    temp=malloc(sizeof(struct node));
    temp->data=data;
    temp->link=NULL;
    while(ptr->link!=NULL)
    {
        ptr=ptr->link;
    }
    ptr->link=temp;
}
void del_pos(struct node**head,int position){

    struct node*current=*head;
    struct node*previous=*head;
    if(*head==NULL)
        printf("list is already empty!");
    else if(position==1){
        *head=current->link;
        free(current );
        current=NULL;
    }
    else{
        while (position!=1){
            previous =current;
            current=current->link;
            position--;}
        previous->link=current->link;
        free(current );
        current =NULL;



    }
}
void add_at_pos(struct node *head,int data,int pos)
{
    struct node *ptr=head;
    struct node *ptr2=malloc(sizeof(struct node));
    ptr2->data=data;
    ptr2->link=NULL;
    pos--;
    while(pos!=1)
    {
        ptr=ptr->link;
        pos--;
    }
    ptr2->link= ptr->link;
    ptr->link=ptr2;
}

void count_of_nodes(struct node*head){
    u8 count=0;
    if(head==NULL)
        printf("linked list is empty");
    struct node*ptr=NULL;
    ptr=head;
    while(ptr!=NULL){
        count++;
        ptr=ptr->link;

    }
    printf("\nno of nodes: %d \n",count);
}

int main() {
    u8 data,position;
    struct node *head=malloc(sizeof(struct node));
    head->data=45;
    head->link=NULL;
    add_at_end(head,98);
    add_at_end(head,3);
    add_at_end(head,55);
    add_at_end(head,34);
    struct node *ptr=head;
    printf("the linked list before modification:\n");
    while(ptr!=NULL)
    {
        printf("%d  ",ptr->data);
        ptr=ptr->link;
    }
    count_of_nodes(head);
    U8 c;

    printf("Inert or Delete? (I or D)");
    scanf("%c",&c);
    printf("%c",c);

    if(c=='D')
    {
/*printf("\nEnter data to delete of the list: ");
    scanf("%d", &data);*/
        printf("Enter the position to delete: " );
        scanf("%d", &position);
        del_pos(&head,position);
    }
    else if(c=='I')
    {


        printf("\nEnter the data and the posiotion\n");
        int data,position;
        scanf("%d",&data);
        scanf("%d",&position);
        add_at_pos(head,data,position);
    }

    printf("the linked list after modification:\n");
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d  ",ptr->data);
        ptr=ptr->link;
    }
    count_of_nodes(head);
    return 0;
}

