#include <iostream>
#include<string>
#include<vector>
#include<stdio.h>
using namespace std;
int main(){
	unsigned short i;
	string temp;
	cin >> i;
	getchar();
	while (i > 0&&getline(cin, temp)) {
		bool out = true;
		vector<unsigned int>a(2);
		unsigned short pos=0, current = 0;
		while (out) {
			string in;
			if (temp.find_first_of(' ', current) == temp.npos) {
				in = temp.substr(current, temp.size() - current);
				out = false;
			}
			else {
				pos = temp.find_first_of(' ', current);
				in = temp.substr(current, pos - current);
			}
			if (in == "MM") {
				a[0]+=2;
			}
			else if (in == "MF" || in == "FM") {
				a[0]++;
				a[1]++;
			}
			else if(in=="FF"){
				a[1]+=2;
			}
			current = pos + 1;
		}
		if (a[0]!=a[1]||a[0]+a[1]<=2) {
			cout << "NO LOOP" << endl;
		}
		else {
			cout << "LOOP" << endl;
		}
		i--;
	}
}




