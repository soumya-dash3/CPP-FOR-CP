#include<bits/stdc++.h>
using namespace std;
int swap(int a,int b){
int temp=a;
a=b;
b=temp;
}
int main(){
    int a=3;
    int b=5;
    cout<<a<<" "<<b<<" "<<endl;
    swap(a,b);
    cout<<a<<" "<<b<<endl;
    //output would be 3 5 only as it is pass by value
}