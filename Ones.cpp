#include<iostream>
#include<string>
using namespace std;
bool canbedevide(string,short);
int main() {
	short in;
	while (cin>>in) {
		string test = "1";
		bool check = true;
		unsigned short total = 1;
		for (;check;total++) {
			if (canbedevide(test,in)) {
				break;
			}
			else {
				test.push_back('1');
			}
		}
		cout << total << endl;
	}
}
bool canbedevide(string in,short a) {
	unsigned total = 0;
	for (short i=0;i<in.size();i++) {
		total *= 10;
		total +=in[i]-'0';
		total %= a;
	}
	if (total==0) {
		return true;
	}
	else {
		return false;
	}
}