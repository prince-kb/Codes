//Selection sort
#include<iostream>
using namespace std;
void printArray(int arr[],int a){
    cout<<endl;
    for(int i=0;i<a;i++)
    cout<<arr[i]<<" ";
    cout<<""<<endl;
}
void selection_sort(int arr[],int a){
    int j,k;
    for (int i = 0; i < a-1; i++){
        k=i;
        for (j = i+1; j < a; j++)
         if(arr[j]<arr[k])
            k=j;
            swap(arr[k],arr[i]);   
    }
    }
void bubble_sort(int arr[],int a){
for (int i = 0; i < a; i++)
{
    for (int j = 0; j < a-1; j++)
        if(arr[j]>arr[j+1])
        swap(arr[j],arr[j+1]);
}
}

void insertion_sort(int arr[],int a){
    for(int i=1;i<a;i++){
        int j;
            int k=arr[i];
        for(j=i-1;j>=0;j--){
            if (k<arr[j]){
                arr[j+1]=arr[j];
            }
            else {
                j++;break;
            }
        }
                arr[j+1]=k;
    }
}
int main(){
int a,arr[25];
// cout<< "Enter number of elements of array: ";
// cin>>a;
// for (int i = 0; i < a; i++)
//     cin>>arr[i];
a=6;
arr[0]=111;
arr[1]=12;
arr[2]=9;
arr[3]=102;
arr[4]=17;
arr[5]=100;
printArray(arr,a);
// selection_sort(arr,a);
// bubble_sort(arr,a);
insertion_sort(arr,a);
printArray(arr,a);


}