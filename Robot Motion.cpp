#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main() {
	short row, column, x;
	while (cin>>row>>column>>x&&(row!=0||column!=0||x!=0)) {
		x--;
		bool out = true;
		vector<string>grid;
		vector<vector<unsigned short> >gridstep(row);
		int step = 0,y=0;
		vector<vector<bool> >check(row);
		for (unsigned short i=0;i<row;i++) {
			for (short j=0;j<column;j++) {
				check[i].push_back(true);
				gridstep[i].push_back(0);
			}
			string temp;
			cin >> temp;
			grid.push_back(temp);
		}
		while (x>=0&&x<column&&y>=0&&y<row) {
			if (!check[y][x]) {
				out = false;
				break;
			}
			else {
				gridstep[y][x] = step;
				check[y][x] = false;
				switch (grid[y][x]) {
				case('N'):
					y--;
					break;
				case('S'):
					y++;
					break;
				case('E'):
					x++;
					break;
				case('W'):
					x--;
				}
			}
			step++;
		}
		if (out) {
			cout << step << " step(s) to exit"<<endl;
		}
		else {
			cout << gridstep[y][x] << " step(s) before a loop of " << step-gridstep[y][x] << " step(s)" << endl;
		}
	}
}
