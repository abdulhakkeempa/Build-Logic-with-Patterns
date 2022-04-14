#include <iostream>
using namespace std;

int main()
{
    int N = 20;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= (N-i); j++) {
            cout<<"  ";
        }
        for (int k = 1; k <= (2*i-1); k++) {
            if(k==1 or k==(2*i-1)){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }

for (int i = (N-1); i>0; i--) {
        for (int j = N-i; j > 0; j--) {
            cout<<"  ";
        }
        for (int k = (2*i-1); k >0 ; k--) {
            if(k==1 or k==(2*i-1)){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}