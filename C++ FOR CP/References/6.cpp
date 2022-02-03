#include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;
int a[N][N];
// void func(int a[][20]){
// a[0]=5;
// }
void func(){
    a[0][0]=5;
}
int main(){
a[0][0]=7;
cout<<a[0][0]<<endl;
func();
cout<<a[0][0]<<endl;
// in 2D array atleast the column has to be specified in the function otherwise error appears
// but if it would be user defined like m and n so n can't be mentioned at that moment as such
// so another way is to declare the array globally, ie above the function
//and if it's user defined, then define N as a big number like 1e5

}