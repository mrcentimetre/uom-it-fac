#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * next;
};

struct node * top =NULL;

void push();
void display();
void pop();

int main(){
     int choice;
     while(1){
         printf("Enter choice:\n");
         scanf("%d",&choice);
         switch (choice) {
             case 1:
                 push();
                 break;
             case 2:
                 pop();
                 break;
             case 3:
                 display();
                 break;
             default:
                 printf("Invalid choice");
                 break;
         }
     }
    
}

void push(){
    struct node * newnode;
    int n;
    printf("Enter no of nodes:\n");
    scanf("%d",&n);
    for(int i=1 ; i<=n ; i++){
        newnode = (struct node*) malloc(sizeof(struct node));
        printf("Enter node %d data :\n",i);
        scanf("%d",&newnode->data);

        newnode->next = top;
        top = newnode;
    }
}

void display(){
    struct node * temp;

    temp = top;

    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void pop(){
    struct node * temp;
    temp = top;
    printf("\nPOP item is = %d\n",temp->data);

    top = temp->next;
    free(temp);
}