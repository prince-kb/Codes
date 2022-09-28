#include<iostream>
#include<deque>
#include<list>
#include<stack>
#include<queue>
using namespace std;
int main(){
/* 
deque <int> d;
d.push_front(11);
d.push_front(13);
d.push_back(10);
d.push_back(9);
for(int i:d)
cout<<i<<" ";
cout<<endl;
cout<<d.size()<<" ";
d.pop_back();
d.pop_front();
cout<<d.size()<<" ";
for(int i:d)
cout<<i<<" ";
cout<<endl;
d.push_front(13);
d.push_back(10);
d.erase(d.begin(),d.end());
cout<<endl;
for(int i:d)
cout<<i<<" "; */

//LIST
/* 
list<int> l;
l.push_front(5);
l.push_back(3);
for(int i:l)
cout<<i<<" ";
l.push_back(1);
l.pop_back();
l.pop_front();
l.push_front(7);
l.remove(7);
for(int i:l)
cout<<i<<" ";
 */

//STACK
/*
stack <string> s;
s.push("rnw");
s.push("al");
s.push("Ba");
cout<<s.top();
s.pop();
cout<<s.top();
s.pop();
cout<<s.top();
s.push("al");
cout<<s.size(); */

//QUEUE
queue <char> q;
q.push('q');
q.push('w');
q.push('e');
cout<<q.front()<<" ";
q.empty();
q.pop();
cout<<q.front();


}