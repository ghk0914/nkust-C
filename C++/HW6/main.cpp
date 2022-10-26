#include <iostream>
#include <iomanip>
using namespace std;;
int a,b,c,hcf;

int main(int argc, char** argv) {
	for(int j=0;j<3;j++){
		cin>>a>>b>>c;
		for(int i=1;i<10001;i++){
			if(a%i==0 and b%i==0 and c%i==0){
			hcf=i;
		}
	}
		cout<<hcf<<endl;
	}
	return 0;
}
