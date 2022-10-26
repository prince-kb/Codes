#include<iostream>
using namespace std;
int disp(int arr[],int a){
for(int i=0;i<a;i++)
cout<<arr[i]<<endl;
return 0;
}
int main(){
int a,arr[10];
cout<< "Enter array: " << endl;
cin>>a;
for(int i=0;i<5;i++)
cin>>arr[i];
disp(arr,a);
}