#include<bits/stdc++.h>
using namespace std;
int swap(int &a,int &b){
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
    //output would be 5 3 only as it is pass by reference
    swap(a,b);
    // swap is also an inbuilt function in cpp
    max(a,b); min(a,b);
    //these are also inbuilt functions
    // arrays are never passed by value, always passed by reference
    
}