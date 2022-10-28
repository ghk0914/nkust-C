#include <iostream>
#include <iomanip>
using namespace std;;
int a,b,c;
int hcf1=1,hcf2=1,lcm1=1,lcm2=1;
int main(int argc, char** argv) {
    for(int k=0;k<3;k++){
        cin>>a>>b>>c;
        for(int i=1;i<101;i++){
            if(a%i==0 and b%i==0){
            hcf1=i;
            }
        }
    lcm1=a*b/hcf1;
        for(int j=1;j<101;j++){
            if(lcm1%j==0 and c%j==0){
            hcf2=j;
            }
        }
    lcm2=lcm1*c/hcf2;
    cout<<lcm2<<endl;

    }
    
	return 0;
}
