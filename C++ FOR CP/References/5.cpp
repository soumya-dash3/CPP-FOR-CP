#include<bits/stdc++.h>
using namespace std;
void func(int a[]){
a[0]=5;
}
int main(){
int a[10];
int a[0]=7;
cout<<a[0]<<endl;
func(a);
cout<<a[0]<<endl;
//output will be 7 5 , the value changes according to the one mentioned in function in case of arrays

}