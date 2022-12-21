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
    q=(struct node*)malloc(sizeof(struct node));
    cout<<"Enter the element: "<< endl;
    cin>>q->data;
    q->next=NULL;
    p->next=q;
    cout<<endl;

}


int main(){
int a,item,count,key;
create();
while(TRUE){
    cout<<endl<<"LINKED LIST MENU"<<endl;
    cout<<"1>Display 2>Insert from beginnning 3>Insert from last 4>Delete from beginning 5>Delete from last 6>Count 7>Exit"<<endl;
    cout<<"enter your choice: ";
    cin>>a;
    switch(a){
        case 1: display();
            break;
        case 2: insert_beginning();
            break;
        case 3: insert_end();
        // case 6: 
        //     count();
        //     cout<<"The count is "<<count()<<endl;
        //     break;
        case 7:exit(0);
    }
}

}