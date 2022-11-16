#include <iostream>
#include <iomanip>
using namespace std;;
int multiplication(int k){
    for(int i=1;i<k+1;i++){
            for(int j=1;j<k+1;j++){
                cout<<i<<"*"<<j<<"="<<i*j<<" ";
            }
            cout<<endl;
        }
}
int main(int argc, char** argv) {
    int k;
    while(1){
        cin>>k;
        if(k==0){
            break;
        }
        else{
            multiplication(k);
        }
    }

    return 0;
}