#include <iostream>
#include <iomanip>
using namespace std;;
int a,o;
int main(int argc, char** argv) {
    while(1){
        cin>>o>>a;
        if(o!=1 and o!=2){
            break;
        }
        switch(o){
            case 1:
                for(int i=0;i<=a;i++){
                    for(int k=1;k<=i;k++){
                        cout<<" ";
                    }
                    for(int j=0;j<a-i;j++){
                        cout<<"*";
                    }
            cout<<endl;
                }
            break;
            case 2:
                for(int i=0;i<a;i++){
                    for(int k=0;k<a-i;k++){
                        cout<<" ";
                    }
                    for(int j=0;j<=i;j++){
                        cout<<"* ";
                    }
                    cout<<endl;
                }
                
                break;
        }
    }
	return 0;
}