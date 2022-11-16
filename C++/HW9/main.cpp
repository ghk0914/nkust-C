#include <iostream>
#include <iomanip>
using namespace std;;
int main(int argc, char** argv) {
    int k=1;
    while(k!=0){
        cin>>k;
        for(int i=1;i<k+1;i++){
            for(int j=1;j<k+1;j++){
                cout<<i<<"*"<<j<<"="<<i*j<<" ";
            }
            cout<<endl;
        }
    }
	return 0;
}