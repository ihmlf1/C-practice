#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;
int main() {
	string in;
	while (getline(cin, in, '#')) {
		unsigned long long total = 0;
		for (unsigned i = 0; i < in.size(); i++) {
			if (isdigit(in[i])) {
				total *= 2;
				total += in[i] - '0';
				total %= 131071;
			}
		}
		total %= 131071;
		if (in == "\n") {
			break;
		}
		if (total == 0) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	return 0;
}