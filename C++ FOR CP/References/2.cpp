#include<bits/stdc++.h>
using namespace std;
int increment(int &n){
n++;
return n;

}
int main(){
    int a=3;
    cout<<a<<endl;
    a=increment(a);
    cout<<a<<endl;
    // output would be 3 4 as it is pass by reference
    
}