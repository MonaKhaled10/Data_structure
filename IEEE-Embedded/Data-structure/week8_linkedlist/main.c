#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *link;

}node_t;
void count_nodes(struct node *head){
    int c=0;
    if(head==NULL)
    printf("linked list is empty");
     node_t*ptr=NULL;
    ptr=head;
    while(ptr!=NULL){
        c++;
        ptr=ptr->link;

    }
    printf("no of node=%d\n",c);

}

void print_data(node_t*head){
    if(head==NULL)
        printf("linked list is empty");
    node_t *ptr=NULL;
    ptr=head;
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->link;

    }

}
/*void add_at_end(struct node *head,int data){
    struct node *ptr,*temp;
    ptr=head;
  temp=(struct node*)malloc(sizeof(node_t));
  temp->data=data;
  temp->link=NULL;
  while(ptr->link!=NULL){
      ptr=ptr->link;

  }ptr->link=temp;
}*/
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

int main() {
  node_t*head=(node_t*)malloc(sizeof(node_t));
    node_t*first=(node_t*)malloc(sizeof(node_t));
    node_t*second=(node_t*)malloc(sizeof(node_t));
    node_t*ptr=head;
    head->data=45;
    first->data=33;
    second->data=90;

    head->link=first;
    first->link=second;
    second->link=NULL;
    /*while(ptr!=NULL){
            printf("%d\n",ptr->data);
            ptr=ptr->link;}*/
    count_nodes(head);
    print_data(head);
    add_at_end(head,56);
    return 0;
}
