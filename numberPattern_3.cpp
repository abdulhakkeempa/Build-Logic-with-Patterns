//	  1
//	1 2 1
//    1 2 3 2 1
//  1 2 3 4 3 2 1

#include <iostream>
using namespace std;

int main() {
	int k;
	int rows =7;
	#row wise iteration
	for (int i = 1; i <= rows; ++i) {
		#for spacing
		for (int j = 0; j < (rows-i); ++j) {
			cout<<"  ";
		}
		#for printing the pattern upto the max value
		for (k = 1; k <= i; ++k) {
			cout<<k<<" ";
		}
		#printing the balance pattern from the max to 1.
		for (int l = (k-2);l>0 ; l--) {
			cout<<l<<" ";
		}
		#next row.
		cout<<endl;
	}
	return 0;
}
