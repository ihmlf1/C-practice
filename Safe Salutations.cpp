#include <iostream>
using namespace std;
unsigned long long cartlen(unsigned long long);
int main(){
	unsigned short in,t=0;
	while (cin>>in) {
		if (t++)cout << endl;
		cout << cartlen(in) << endl;
	}
}
unsigned long long cartlen(unsigned long long in) {
	if (in < 2)
		return in;
	else
		return  2 * (2 * (in - 1) +1 ) *cartlen(in - 1) / (in + 1);
}



