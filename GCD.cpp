#include<iostream>
using namespace std;
unsigned long long GCD(unsigned long long ,unsigned long long);
int main() {
	unsigned long long in;
	while (cin>>in&&in!=0) {
		unsigned long long total = 0;
		for (unsigned long long i = 1; i < in; i++) {
			for (unsigned long long j = i + 1; j <= in; j++) {
				total += GCD(i,j);
			}
		}
		cout << total << endl;
	}
}
inline unsigned long long GCD(unsigned long long i, unsigned long long j) {
	unsigned long long big=i>j?i:j, small= i < j ? i : j;
	while (true) {
		big = big - (big / small * small);
		if (big == 0) {
			return small;
		}
		small = small - (small / big * big);
		if (small == 0) {
			return big;
		}
	}
		
}