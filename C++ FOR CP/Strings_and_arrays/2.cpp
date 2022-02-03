// You have been given a String S. You need to find and print whether this string is a palindrome or not. If yes, print "YES" (without quotes), else print "NO" (without quotes).

// Input Format
// The first and only line of input contains the String S. The String shall consist of lowercase English alphabets only.

// Output Format
// Print the required answer on a single line.

// Constraints 

// Note
// String S consists of lowercase English Alphabets only.

// Sample Input
// aba
// Sample Output
// YES
#include <iostream>
using namespace std;
int main() {
string s;
cin>>s;
string s_rev;
for(int i=s.size()-1;i>=0;i++){
s_rev.push_back(s[i]);
}
if(s==s_rev){
	cout<<"YES"<<endl;
}
else{
	cout<<"NO"<<endl;
}
return 0;
}