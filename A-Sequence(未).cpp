#include"pch.h"
#include <iostream>
#include<vector>
using namespace std;
int main(){
	unsigned short innumber,casenum=1;
	while (cin>>innumber&& casenum++) {
		vector<unsigned short>in;
		unsigned temp;
		bool check = true;
		while (innumber--) {
			cin >> temp;
			in.push_back(temp);
		}
		for (unsigned short i = 1;i<in.size();i++) {
			if (in[i]<in[i-1]) {
				check = false;
				break;
			}
		}
		for (unsigned short i=in.size()-1;i>0&&check;i--) {
			for (unsigned short j=i-1;j>0&&check;j--) {
				for (short k = j - 1;k>=0;k--) {
					if (in[j] + in[k] == in[i]&&j!=k) {
						check = false;
						break;
					}
				}
			}
		}
		cout << "Case #" << casenum-1;
		for (unsigned short k = 0;k<in.size();k++) {
			cout << " " << in[k];
		}
		cout << endl;
		if (check) {
			cout << "This is an A-sequence." << endl;
		}
		else {
			cout<<"This is not an A-sequence."<<endl;
		}
	}
}




