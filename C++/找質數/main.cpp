#include<iomanip>
#include<iostream>
using namespace std;;
int number=0;
int range=0;
int main(int argc, char** argv) {
    cin>>range;
    for(int number=2;number<(range+1);number++){
        int count=0;
        for(int i=1;i<=number;i++){
            if(number%i==0){
                count++;
            }
        }
        if(count==2){
                cout<<number<<endl;
        }
    }
	return 0;
}

