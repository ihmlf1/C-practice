#include <iostream>
#include<vector>
#include<map>
using namespace std;
int main(){
	unsigned short ca;
	while (cin>>ca&&ca!=0) {
		map<vector<unsigned short>, unsigned short> out;
		for ( unsigned short te; ca > 0; ca--) {
			vector<unsigned short> temp;
			for (unsigned short i = 5; i > 0; i--) {
				cin >> te;
				if (i == 5) {
					temp.push_back(te);
					continue;
				}
				vector<unsigned short>::iterator b = temp.begin();
				for (;b!=temp.end();b++) {
					if ((*b)>=te) {
						break;
					}
				}
				temp.insert(b, te);
			}
			if (out.find(temp) == out.end()) {
				out.insert(pair<vector<unsigned short>, unsigned short>(temp, 0));
			}
			else {
				out.find(temp)->second++;
			}
		}
		unsigned max = 0,total=0;
		for (map<vector<unsigned short>, unsigned short>::iterator be = out.begin();be!=out.end();be++) {
			if (be->second > max) {
				total = be->second+1;
				max = be->second;
			}
			else if (be->second==max) {
				total++;
			}
		}
		cout << total << endl;
	}
}




