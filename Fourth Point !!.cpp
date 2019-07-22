#include<iostream>
#include<vector>
#include<iomanip>
#include<map>
using namespace std;
int main() {
	double in[2];
	while (cin >> in[0]>>in[1]) {
		map<vector<double>, short>fourth;
		map<vector<double>, short>::iterator fourpoint;
		vector<double>temp;
		temp.push_back(in[0]);
		temp.push_back(in[1]);
		fourth.insert(pair<vector<double>,short>(temp,0));
		for (short i = 0;i<3;i++) {
			vector<double>tem;
			cin >> in[0]>>in[1];
			tem.push_back(in[0]);
			tem.push_back(in[1]);
			if (fourth.find(tem)==fourth.end()) {
				fourth.insert(pair<vector<double>, short>(tem, 0));
			}
			else {
				fourpoint = fourth.find(tem);
				fourth.find(tem)->second++;
			}
		}
		double answer[2] = {0};
		for (map<vector<double>, short>::iterator begin=fourth.begin();begin!=fourth.end();begin++) {
			if (begin!= fourpoint) {
				answer[0] += begin->first[0]-fourpoint->first[0];
				answer[1] += begin->first[1] - fourpoint->first[1];
			}
		}
		cout << fixed<<setprecision(3)<< fourpoint->first[0]+answer[0] << " " << fourpoint->first[1]+answer[1]<<endl;
	}
}
