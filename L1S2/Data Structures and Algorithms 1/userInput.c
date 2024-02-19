// Lecturer Minul's Code

#include <stdlib.h>
#include <stdio.h>

struct node{
    int data;
    struct node* next;
};

struct node* head=NULL;

void createnode(int x);
void display();

int main(){
    int x;
    printf("Enter how many numbers you want to add\n");
    scanf("%d",&x);

    createnode(x);
    display();
}

void createnode(int x){
    struct node* temp;
    for(int i=0;i<x;i++){
        struct node* newnode;
        newnode =(struct node*)malloc(sizeof(struct node));  //memory eken idak aran newnode kiyala data ekak  hadenawa (newnode->data=_______  newnode->next=_)
        printf("Enter you %d value\n",i+1);
        scanf("%d",&newnode->data);  // e data ekae value eka gannawa   (newnode->data=vaue)
        newnode->next=NULL;   //aluth data ekak nisa meyata next value ekak thiyenna ba (newnode->next 0)

        if(head==NULL){
            head=newnode;           //head eka mukuth nathi nisa aluth node eke address eka head ekata denawa  (head---->newnode address)
            temp=newnode;          //temp = newnode ekata denawa  ekiyanne aluthin hadunu node ekata point wenawa (temp-------->newnodeaddress)
        }
        else{
            temp->next=newnode;  // kalin hadunu node eke temp eka nisa eken eelaga eka e kyanne->next ekata aluth node eka enawa (temp->next[ara kalin para deepu node eke next eka)---->aluthen deepu newnode ekata
            temp=newnode;        // dan temp eka e kiyanna aai run weddi dan hadunu node eka anith round ekata giniyanwa   (dan ai temp eka aluth node ekata samana krnwa)
        }
    }  //ai ara widiyatama process eka wenawa
}

void display(){
    struct node* temp;  //singly nisa head eken patan aran tama yanna one head eka wenas krnna ba e nisa temporary variable ekak gannaw
    temp=head;  //eka head ekata samana krnawa
    while(temp!=NULL){   //e temp eka null wenkn e kiyanne last value eka enkn meka run wenawa
        printf("%d \t",temp->data);
        temp=temp->next;
    }
    printf("\n");
}