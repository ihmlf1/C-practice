#include<iostream>
#include<string>
#include<map>
using namespace std;
int main() {
	unsigned money,statement,ca;
	string work;
	cin >> statement >> ca;
	unsigned long long total = 0;
	map<string, unsigned>wo;
	for (unsigned short i = 0; i < statement; i++) {
		cin >> work >> money;
		wo.insert(pair<string, unsigned>(work, money));
	}
	while (cin >> work) {
		if (work.find('.') != work.npos) {
			cout << total << endl;
			total = 0;
			ca--;
			if (ca == 0) {
				break;
			}
		}
		if (wo.find(work) != wo.end()) {
			total += wo.find(work)->second;
		}
	}
}
