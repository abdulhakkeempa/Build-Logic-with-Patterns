//     1
//    1 2
//   1 2 3
//  1 2 3 4
// 1 2 3 4 5

#include <iostream>
using namespace std;

int main() {
   int rows;
   cout<<"Rows : ";
   cin>>rows;
   for(int i=1;i<=rows;i++){
       for(int j=(rows-i);j>0;j--){
           cout<<" ";
       }
       for(int k=1;k<=i;k++){
           cout<<k<<" ";
       }
       cout<<endl;
   }
}