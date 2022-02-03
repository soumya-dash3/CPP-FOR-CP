#include<bits/stdc++.h>
using namespace std;
void increment(int *x){
    *x=*x + 1;
}
int main(){
int a=4;
cout<<a<<endl;
increment(&a);
cout<<a<<endl;
//passing pointers to function using by reference also
}