#include <iostream>
#include<stdio.h>
#include<string>
#include<vector>
using namespace std;
int main(){
	unsigned short ca;
	while (cin >> ca && ca != 0) {
		vector<string>com, change;
		string temp;
		getchar();
		for (unsigned short i = 0; i < ca; i++) {
			getline(cin, temp);
			com.push_back(temp);
			getline(cin, temp);
			change.push_back(temp);
		}
		getline(cin, temp);
		for (unsigned short i = 0; i < ca; i++) {
			while (temp.find(com[i])!=temp.npos) {
				temp.insert(temp.find(com[i]),change[i]);
				temp.erase(temp.find(com[i]),com[i].size());
			}
		}
		cout << temp << endl;
	}
}



