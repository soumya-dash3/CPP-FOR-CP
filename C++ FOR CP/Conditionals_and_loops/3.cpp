// You have been given an array A of size N consisting of positive integers. You need to find and print the product of all the number in this array Modulo .

// Input Format:
// The first line contains a single integer N denoting the size of the array. The next line contains N space separated integers denoting the elements of the array

// Output Format:
// Print a single integer denoting the product of all the elements of the array Modulo .

// Constraints:


// Sample Input
// 5
// 1 2 3 4 5
// Sample Output
// 120
#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	vector<int>a(n);
	int x;
	for(int i=0;i<n;i++){
		cin>>x;
		a[i]=x;
	}
	long long int mul;
	for(int i=0;i<n;i++){
		mul=(mul*a[i])%1000000007;
	}
	cout<<mul<<endl;
}