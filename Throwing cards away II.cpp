#include <iostream>
#include<cmath>
using namespace std;
int main(){
	unsigned in;
	while (cin>>in&&in!=0) {
		unsigned last,temp=in,answer=2, mutiple = 1;
		while (temp/2>0) {
			temp /= 2;
			mutiple*=2;
		}
		last = in % mutiple;
		if (last == 0) {
			answer = in;
		}
		else {
			while (last>1) {
				answer += 2;
				last--;
			}
		}
		cout << answer << endl;
	}
}




