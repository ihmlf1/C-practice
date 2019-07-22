#include<iostream>
using namespace std;
int main() {
	long long in;
	while (cin >> in) {
		in++;
		if (in >= 0) {
			bool check = false;
			unsigned long long total = 1;
			for (unsigned i = 1; i < in; i++) {
				total *= i;
				if (total > 6227020800) {
					check = true;
					break;
				}
			}
			if (check) {
				cout << "Overflow!" << endl;
			}
			else if (total < 10000) {
				cout << "Underflow!" << endl;
			}
			else {
				cout << total << endl;
			}
		}
		else {
			in = -in;
			if (in % 2 == 1) {
				cout << "Underflow!" << endl;
			}
			else {
				cout << "Overflow!" << endl;
			}
		}
	}
}

