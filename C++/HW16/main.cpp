#include <iostream>
#include <iomanip>
// #include <string>
// #include <cstdlib>
using namespace std;;
int TF(int ni){
    int lenn,sumi;
    int midi[50];
    string n,sum;
    string mid[50],up[50],down[50];
    n=to_string(ni);
    lenn=n.size();
    for(int i=0;i<lenn;i++){
        mid[i]=n[i];
        midi[i]=stoi(mid[i]);
        for(int j=0;j<i;j++){
            up[i]+=n[j];
        }
        for(int k=i+1;k<lenn;k++){
            down[i]+=n[k];
        }

        sum=up[i]+down[i];
        sumi=stoi(sum);
        
        if(sumi%midi[i]==0){
            cout<<"T";
        }
        else{
            cout<<"F";
        }
    }
    cout<<endl;
    return ni;
}
int main(int argc, char** argv) {
    int a,ni;
    for(int i=0;i<10000;i++){
        cin>>ni;
        if(ni<10 and ni>0){
            cout<<"T"<<endl;
        }
        if(ni<=0){
            break;
        }
        // if(ni>2147483647){
        //     break;
        // }
        if(ni>9){
            a=TF(ni);
        }

    }
	return 0;
}
