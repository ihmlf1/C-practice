#include<iostream>
#include<vector>
using namespace std;
int main() {
	unsigned short number;
	while (cin>>number) {
		unsigned temp;
		vector<unsigned>in;
		while (number--) {
			cin >> temp;
			in.push_back(temp);
		}
		unsigned short total = 0;
		for (int i=0;i<in.size();i++) {
			for (int j=0;j<in.size()-1;j++) {
				if (in[j]>in[j+1]) {
					temp = in[j];
					in[j] = in[j+1];
					in[j+1] = temp;
					total++;
				}
			}
		}
		cout << "Minimum exchange operations : "<<total << endl;
	}
}

