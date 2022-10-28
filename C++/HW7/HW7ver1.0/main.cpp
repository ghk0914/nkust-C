#include <iostream>
#include <iomanip>
using namespace std;;
int main(int argc, char** argv) {
    for(int i=0;i<3;i++){
        int k=10001;
        int a,b,c;
        int lcm=0;
        cin>>a>>b>>c;
        while(k>1){
            if(k%a==0 and k%b==0 and k%c==0){
                lcm=k;
            }
        k--;
        }
    cout<<lcm<<endl;
    }
	return 0;
}
