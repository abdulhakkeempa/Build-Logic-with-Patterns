//# # # #
//#     #
//#     #
//# # # #
#include <iostream>
using namespace std;

int main() {
	int rows;
	cout<<"Enter the no of rows"<<endl;
	cin>>rows;
	for (int i = 1; i <= rows; ++i) {
		for (int j = 1; j <=rows; ++j) {
			if (i==1 or i==rows or j==1 or j==rows) {
				cout<<"# ";
			}
			else {
				cout<<"  ";
			}
		}
		cout<<endl;
	}
	return 0;
}
