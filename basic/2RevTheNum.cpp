/*
Platform: Codechef
Ques Name: Reverse The Number
Ques: Given an Integer N, write a program to reverse it.

Input
The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer N.

Output
For each test case, display the reverse of the given number N, in a new line 


*/

/* Solution */

#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    int n,r;
    while(t--){
        cin>>n;
        r=0;
        while(n!=0){
            r=r*10+n%10;
            n=n/10;
            
        }
        cout<<r<<"\n";
    }
	return 0;
}

