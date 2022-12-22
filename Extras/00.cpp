// ??Linked list
#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *next;
};
#define TRUE 1
struct node *start;

// Creating link list
void create(){
    int i=0,a;
cout<<"Enter the number of elements of the list: ";
cin>>a;
struct node*p=(struct node*)malloc(sizeof(struct node));
cout<<"Enter the "<<i<<" element of the node: "<< endl;
cin>>p->data;
p->next=NULL;
start=p;
i++;
while(i<a){
cout<<"Enter the "<<i<<" element of the node: "<< endl;
p->next=(struct node *)malloc(sizeof(struct node));
p=p->next;
cin>>p->data;
p->next=NULL;
i++;
}
// p->next=NULL;
}

//Counting number of nodes of the linked list
int count(){
    int i=0;
    struct node *p=start;
    while(p!=NULL){
        p=p->next;
        i++;
    }
    return i;
}

//Displaying all the nodes arranged
void display(){
    cout<<endl;
    if(count()==1){
     cout<<start->data;   
    }
    else{
        cout<<endl;
    struct node *p=start;
    cout<<start->data;
    p=start->next;
    while(p!=NULL){
        
        cout<<"-->"<<p->data<<" ";
        p=p->next;
    }
    }
cout<<endl;
}

//Insert new element at beginning
void insert_beginning(){
struct node*p=(struct node*)malloc(sizeof(struct node));
cout<<"Enter the element: "<< endl;
cin>>p->data;
p->next=start;
start=p;
cout<<endl;
}

//Insert new element at the end position
void insert_end(){
    struct node *p=start,*q;
    while(p->next!=NULL){
        p=p->next;
    }
    q=(struct node *)malloc(sizeof(struct node));
    cout<<"enter the element to insert: ";
    cin>>q->data;
    q->next=NULL;
    p->next=q;
    cout<<endl;
}


//Deleting las element of the linked list
void delete_beginning(){
    if(count()==1){
        cout<<"Can't delete last element"<<endl;
        return;
    }
    else {
            struct node *p=start;
    cout<<start->data<<" deleted"<<endl;
    start=start->next;
    free(p);
    }
}


//Deleting last element of the linked list
void delete_end(){
        if(count()==1){
        cout<<"Can't delete last element"<<endl;
        return;
    }
        else {
            struct node *p=start;
            while(p->next->next != NULL)
                p=p->next;
                cout<<p->next->data<<" deleted"<<endl;
                p->next = NULL;
            free(p->next);
        }

}

//Searching an element
void search(){
    int a,i=0;
    struct node *p=start;
    cout<<"Enter element to search: ";
    cin>>a;
    while(p!=NULL){
        if(p->data==a){
            break;
        }
            i++;
        p=p->next;
    }
    if(p==NULL){
        cout<<"Element not found"<<endl;
        return;
    }
    else {
            cout<<p->data<<" found at position "<<i<<endl;
    }
}


int main(){
int a,item,key;
create();
while(TRUE){
    cout<<endl<<"LINKED LIST MENU"<<endl;
    cout<<"1>Display 2>Insert from beginnning 3>Insert at last 4>Delete from beginning 5>Delete from last 6>Count 7>Search 8>Exit"<<endl;
    cout<<"Enter your choice: ";
    cin>>a;
    switch(a){
        case 1: display();
            break;
        case 2: insert_beginning();
            break;
        case 3: insert_end();
            break;
        case 4: delete_beginning();
            break;
        case 5: delete_end();
            break;
        case 6: cout<<"The count is "<< count() <<endl;
            break;
        case 7: search();
            break;
        case 8:exit(0);
    }
}

}