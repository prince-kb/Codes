#include<iostream>
using namespace std;
int bsearch(int arr[],int a,int b){
    int start=0,end=a-1,mid;
    while(start <= end){
        // mid=(start+end)/2;
        mid=start/2+end/2;
        //mid=s+(e-s)/2;
        if(arr[mid]==b){
        return mid;
        }
        if(arr[mid]>b)
        end=mid-1;
        else start=mid+1;
    }
    return -1;
}
int main(){
    int a,arr[50],key;
    cout<<"Enter number of elements of array:";
    cin>>a;
    cout<<"Enter the array in ascending order"<<endl;
    for(int i=0;i<a;i++)
    cin>>arr[i];
    cout<<"Enter the element to search:";
    cin>>key;
    int b=bsearch(arr,a,key);
    cout<<key<<" found at index "<<b;
}