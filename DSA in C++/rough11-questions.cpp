#include<iostream>
#include<vector>
using namespace std;
void print(vector <int> arr){
    cout<<arr.size();
    cout<<endl;
    for(int i=0;i<arr.size();i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}
int main(){
vector <int> arr;
cout<< "Enter the elements of the vector" << endl;
    int a;
    while(1){
        if(a==-1)
        break;
        cin>>a;
        arr.push_back(a);
    }
print(arr);
int s=0,e=arr.size()-1;
while(s<=e){
    swap(arr[s],arr[e]);
    s++,e--;
}
cout<<"After reversing"<<endl;
print (arr);
}