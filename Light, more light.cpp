#include <iostream>
#include<cmath>
using namespace std;
int main(){
	unsigned long long in;
	while (cin>>in&&in!=0) {
		bool check = true;
		if ((unsigned long long)sqrt(in)*(unsigned long long)sqrt(in)!=in) {
			check = false;
		}
		if (check) {
			cout << "yes" << endl;
		}
		else {
			cout << "no" << endl;
		}
	}
}



