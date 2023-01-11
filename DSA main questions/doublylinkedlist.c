#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
struct node{
    struct node *prev;
    int data;
    struct node *next;
};
struct node *start;
void create(void){
    int a,item;
printf("\nEnter number of nodes: ");
scanf("%d",&a);
struct node *p;
p=(struct node*)malloc(sizeof(struct node));
p->prev=NULL;
printf("Enter item 1: ");
scanf("%d",&item);
p->data=item;p->next=NULL;start=p;
for (int i = 1; i < a; i++){
    struct node *q=p;
    p=(struct node*)malloc(sizeof(struct node));
    printf("Enter item %d: ",i+1);
    scanf("%d",&item);
    q->next=p;p->prev=q;p->next=NULL;p->data=item;
}
}
void display(int a){
    struct node *p=start;
    if(a==1){
        printf("%d",start->data);
        p=p->next;
        while(p!=NULL){
            printf("--> ");
        printf("%d",p->data);
        p=p->next;
        }
        printf("\n");
        return;
    }
    else while(p->next!=NULL)
    p=p->next;
    printf("%d",p->data);
    p=p->prev;
    while(p!=NULL){
        printf("--> ");
        printf("%d",p->data);
        p=p->prev;
    }
    printf("\n");
}
void insert_head(int item){
    struct node *p=(struct node *)malloc(sizeof(struct node));
    p->data=item;p->prev=NULL;p->next=start;start->prev=p;start=p;
}
void insert_end(int item){
    struct node*p=start;
    struct node *q=(struct node *)malloc(sizeof(struct node));
    while(p->next!=NULL)
        p=p->next;
    p->next=q;q->data=item;q->next=NULL;q->prev=p;
}
int count(){
    int i=1;
    struct node *p=start;
    while(p->next!=NULL){
        p=p->next;
        i++;
    }
    return i;
}
void insert_pos(int loc,int item){
    if (loc==1){
        insert_head(item);
        printf("%d inserted at %d position(starting node)\n",item,loc);
    }
    else if (loc==count()+1){
        insert_end(item);
        printf("%d inserted at %d node(last node)\n",item,loc);
    }
    else if(loc>count()+1 || loc==0)
    printf("Location does not exist\n");   
    else {
        struct node *p=start;
        int i=2;
        while(i<loc){
            p=p->next;
            i++;
        }
        struct node *q=(struct node*)malloc(sizeof(struct node));
        q->data=item;q->next=p->next;q->prev=p;p->next->prev=q;p->next=q;
        printf("%d inserted at %d position\n",item,loc);
    }
}
void search(int item){
    struct node *p=start;
    int i=0,count=1;
    while(p!=NULL){
        if (p->data==item){
            i=1;
            break;
        }
        else {
            count++;
        p=p->next;
        }
    }
    if (i==0)
        printf("%d is not present\n",item);
    else             
        printf("%d is present at Node %d\n",item,count);
        return;
}
void delete_head(){
    struct node *p=start;
    printf("%d deleted at starting position\n",p->data);
    start=start->next;
    start->prev=NULL;
    free(p);
}
void delete_end(){
    struct node *p=start;
    while(p->next!=NULL)
        p=p->next;
    printf("Deleted item is %d at %d(last) position\n",p->data,count());
    p->prev->next=NULL;
    free(p);
}
void delete_bet(int loc){
    struct node *p=start;
    int i=1;
    if (loc>count()){
        printf("Wrong Location\n");
        return;
    }
    
    while(i<loc){
        p=p->next;
        i++;
    }
    printf("Deleted item is %d at %d position\n",p->data,loc);
    p->prev->next=p->next;p->next->prev=p->prev;
    free (p);
}
void delete(int item){
    struct node *p=start;
    int c=1,i=0;
    while(p!=NULL){
        if (p->data==item){
            i++;
        if (p==start){
            delete_head();
        }
        else if(c==count()){
            delete_end();
        }
        else 
            delete_bet(c);
        return;
        }
        c++;    
        p=p->next;
    }
if (i==0)
    printf("Element not found\n");

}
void reverse(){
    struct node*q,*p=start;
    while(p->next!=NULL)
    p=p->next;
    q=p;p=start;
    while(TRUE){
        int temp;
        temp=p->data;
        p->data=q->data;
        q->data=temp;
        if (p==q->prev || p->next==q->prev)
            break;
        p=p->next;q=q->prev;
    }
}
int main(){
    create();
    while(TRUE){
    int n,item,loc=0;
    printf("\n\tDOUBLE LINKED LIST MENU\n");
    printf("1> INSERT MENU 2> DELETE MENU 3> DISPLAY FORWARD 4> DISPLAY BACKWARD 5>COUNT 6>SEARCH 7>REVERSE .... 10> EXIT\n");
    printf("Enter your choice: ");
    scanf("%d",&n);
    // printf("\n");
    switch(n){
        case 1: printf("\nINSERTION MENU\n");
        printf("1> INSERT AT BEGINNING 2> INSERT AT END 3>INSERT AT POSITION\n");
        printf("Enter your choice :");
        scanf("%d",&n);
        switch (n){
            case 1: printf("Enter item to insert: ");
        scanf("%d",&item);
        insert_head(item);
        break;
            case 2: 
        printf("Enter item to insert: ");
        scanf("%d",&item);
        insert_end(item);
        break;
            case 3: 
        printf("Enter node location: ");
        scanf("%d",&loc);
        printf("Enter item to insert: ");
        scanf("%d",&item);
        insert_pos(loc,item);
        break;  
        default: printf("Wrong Input\n");
        break;
        }
        break;
        case 2: printf("\nDELETION MENU\n");
        printf("1> DELETE AT BEGINNING 2> DELETE AT END 3>DELETE AT POSITION 4> DELETE ITEM\n");
        printf("Enter your choice :");
        scanf("%d",&n);
        switch (n){
            case 1: delete_head();
        break;
            case 2: 
        delete_end();
        break;
            case 3: 
        printf("Enter node location: ");
        scanf("%d",&loc);
        delete_bet(loc);
        break;  
            case 4: 
        printf("Enter item: ");
        scanf("%d",&item);
        delete(item);
        break;  
        default: printf("Wrong Input\n");
        break;
        }
        break;
        case 3: display(1);
        break;
        case 4: display(2);
        break;
        case 5: printf("Number of nodes = %d\n",count());
        break;
        case 6: 
        printf("Enter item to search: ");
        scanf("%d",&item);
        search(item);
        break;
        case 7: reverse();
        break;
        case 10: 
        printf("EXITTING>>>\n");
        exit(0);
        default: printf("WRONG INPUT, TRY AGAIN\n");
    }
    }
}
/*
int main(){
    create();
    while(TRUE){
        int n,loc=0,item;
    printf("\nDOUBLY LINKED LIST MENU\n");
    printf("1> DISPLAY FORWARD 2> DISPLAY BACKWARD 3> INSERT HEAD 4> INSERT END \n5> INSERT AT POSITION 6> DELETE 7> COUNT 8> SEARCH...10> EXIT\n");
    printf("Enter your choice: ");
    scanf("%d",&n);
    printf("\n");
    switch(n){
        case 1: display(1);
                break;
        case 2: display(2);
                break;
        case 3: 
        printf("Enter item to insert: ");
        scanf("%d",&item);
        insert_head(item);
        break;
        case 4: 
        printf("Enter item to insert: ");
        scanf("%d",&item);
        insert_end(item);
        break;
        case 5: 
        printf("Enter node location: ");
        scanf("%d",&loc);
        printf("Enter item to insert: ");
        scanf("%d",&item);
        insert_pos(loc,item);
        break;
        case 6:
        printf("Enter the element to delete: ");
        scanf("%d",&item);
        delete(item);
        break;
        case 7: printf("Number of nodes = %d\n",count());
        break;
        case 8: 
        printf("Enter item to search: ");
        scanf("%d",&item);
        search(item);
        break;
        case 10:
            printf("EXITTING>>>\n");
            exit(0);
        default :printf("WRONG INPUT,TRY AGAIN\n");
    }

    }
return 0;
}
*/