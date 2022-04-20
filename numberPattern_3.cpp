//		  1
//	    1 2 1
//    1 2 3 2 1
//  1 2 3 4 3 2 1

#include <iostream>
using namespace std;

int main() {
	int k;
	int rows =7;
	for (int i = 1; i <= rows; ++i) {
		for (int j = 0; j < (rows-i); ++j) {
			cout<<"  ";
		}
		for (k = 1; k <= i; ++k) {
			cout<<k<<" ";
		}
		for (int l = (k-2);l>0 ; l--) {
			cout<<l<<" ";
		}
		cout<<endl;
	}
	return 0;
}
