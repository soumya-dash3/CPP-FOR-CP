#include<bits/stdc++.h>
using namespace std;
int main(){
int x=4;
int *p_x=&x;
cout<<"Address x:"<<&x<<endl;
cout<<"Val p_x:"<<p_x<<endl;
cout<<"Val *p_x:"<<*p_x<<endl;
*p_x=5;
cout<<"x: "<<x<<endl;
cout<<"p_x+1 : "<<p_x + 1<<endl;
int **p_p_x=&p_x;
cout<<"Address p_x: "<<&p_x<<endl;
cout<<"Val p_p_x: "<<p_p_x<<endl;
cout<<"Val *p_p_x: "<<*p_p_x<<endl;
cout<<"Val **p_p_x: "<<**p_p_x<<endl;
**p_p_x=7;
cout<<"x: "<<x<<endl;
}