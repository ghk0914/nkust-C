#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;;
int hcf_maker(int a,int b){
    int hcf;
    for(int i=1;i<101;i++){
        if(a%i==0 and b%i==0){
            hcf=i;
        }
    }
    hcf=hcf;
    return hcf;
}
int lcm_maker(int a,int b,int hcf){
    int lcm=1;
    lcm=a*b/hcf;
    return lcm;
}

int main(int argc, char** argv) {
    int k=1;
    while(k!=0){
    cin>>k;
    int a,b,c;
    int hcf1=1,hcf2=1,lcm1=1,lcm2=1;
    cin>>a>>b>>c;
    hcf1=hcf_maker(a,b);
    lcm1=lcm_maker(a,b,hcf1);
    hcf2=hcf_maker(lcm1,c);
    lcm2=lcm_maker(lcm1,c,hcf2);
    for(int i=1;i<k+1;i++){
        cout<<lcm2*i<<" ";
    }
    cout<<endl;
    }
	return 0;
}
