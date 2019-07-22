#include<iostream>
using namespace std;
int main() {
	unsigned int cola;
	while (cin>>cola) {
		unsigned total = 0,emp=0;
		while (emp+cola>2) {
			total += cola ;
			emp += cola;
			cola = emp / 3;
			emp %= 3;
		}
		total += cola;
		if (emp+cola==2) {
			total++;
		}
		cout << total << endl;
	}
}
