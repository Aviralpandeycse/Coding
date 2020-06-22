/*
Platform: Codechef
Ques Name: Life, the Universe, and Everything
Ques: Rewrite small numbers from input to output. Stop processing input after reading in the number 42. All numbers at input are integers of one or two digits.

Input:
1
2
88
42
99

Output:
1
2
88
*/

/* Solution */

#include <iostream>
using namespace std;

int main() {
	short i;
	cin>>i;
	while(i!=42){
	    cout<<i<<"\n";
	    cin>>i;
	}
	return 0;
}

