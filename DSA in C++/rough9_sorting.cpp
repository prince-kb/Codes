#include<iostream>
using namespace std;
void printArray(int arr[],int a){
    for(int i=0;i<a;i++)
    cout<<"| "<<arr[i]<<" ";
    cout<<"|"<<endl;
}
void selection_sort(int arr[],int a,bool ch){
    if (ch == false){
        for (int i = 0; i < a-1; i++){
            for (int j = i + 1; j < a; j++){
                if (arr[j] > arr[i])
                    swap(arr[i], arr[j]);
                }}}
    else
    {
        for (int i = 0; i < a-1; i++){
            for (int j = i + 1; j < a-1; j++){
                if (arr[j] < arr[i])
                    swap(arr[i], arr[j]);
                }}}}

    void bubble_sort(int arr[],int a,bool ch){
        if(ch == false){
            bool sw = false;
            for(int i=0;i<a-1;i++){
                for(int j=0;j<a-1-i;j++){
                    if(arr[j]<arr[j+1]){
                        swap(arr[j],arr[j+1]);
                        sw == true;
                    }
            }
            if(sw==false)
            break;
            }}
        else {
            bool sw = false;
            for(int i=0;i<a-1;i++){
                for(int j=0;j<a-i-1;j++){
                    if(arr[j]>arr[j+1]){
                        swap(arr[j],arr[j+1]);
                        sw = true;
                    }}
                    if (sw == false)
                    break;
                    }}}

int main(){
    int arr[50],a,b;
    bool ch=0;
    cout<<"Enter number of elements of the array: ";
    cin>>a;
    for(int i=0;i<a;i++)
    cin>>arr[i];
    cout<<"\nThe entered array is :\n";
    printArray(arr,a);
    cout<<"\n1> Selection sort 2> Bubble sort"<<endl;
    cout<<"Enter your choice :";
    cin>>b;
    cout<<"0> Descending 1> Ascending"<<endl;
    cout<<"Enter your choice: ";
    cin>>ch;
    switch(b){
        case 1: selection_sort(arr,a,ch);
        break;
        case 2: bubble_sort(arr,a,ch);
        break;
        default : cout<<"Wrong input"<<endl;
    }
    cout<<"Sorted array is : "<<endl;
printArray(arr,a);
}