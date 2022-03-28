// 1 2 3 4
//  1 2 3
//   1 2
//    1
//    1
//   1 2
//  1 2 3
// 1 2 3 4
#include <iostream>
using namespace std;

int main() {
   int rows;
   cout<<"Rows : ";
   cin>>rows;
   for(int i=rows;i>0;i--){
       for(int j=0;j<(rows-i);j++){
           cout<<" ";
       }
       for(int k=1;k<=i;k++){
           cout<<k<<" ";
       }
       cout<<endl;
   }

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
