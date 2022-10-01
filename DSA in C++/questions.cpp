#include<iostream>
using namespace std;
void ins(int arr[],int n){
    cout<<"Enter elements of array: "<<endl;
    for(int i=0;i<n;i++)
    cin>>arr[i];
}
void printArray(int arr[],int n){
for(int i=0;i<n;i++)
cout<<arr[i]<<" ";
cout<<endl;
}
int main(){
int a,b,arr1[50],arr2[50],arr[100];
cout<< "Enter number of items of array 1" << endl;
cin>>a;
ins(arr1,a);
cout<< "Enter number of items of array 2" << endl;
cin>>b;
ins(arr2,b);
cout<<"Array 1 is -"<<endl;
printArray(arr1,a);
cout<<"Array 2 is -"<<endl;
printArray(arr2,b);

int i=0,j=0,k=0;
for(int i=0;i<a+b-2;i++){
if(arr1[i]<arr2[j]){
    arr[k]=arr1[i];
    i++;
k++;
}
else {
    arr[k]=arr2[j];
    j++;
k++;
}
}
cout<<"Merged array is -"<<endl;
printArray(arr,k);
}