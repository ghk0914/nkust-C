#include <iostream>
#include <iomanip>
using namespace std;;

double dot_turn(double dotn,int all_dot[100],int b,int i){
   double s=dotn*b;
   double sdot=s-int(s);
   all_dot[i]=int(s);
   return sdot;
}

int main(int argc, char** argv) {
    while(true){
        int b,d,ansint[100];
        double n,dotn;
        char ans[100];
        int all_dot[100],tenplus[100];
        cin>>n>>b>>d;
        if(n<0 or b<2 or b>36 or d<0 or d>5){
            break;
        }
        itoa(n,ans,b);
        for(int i=0;i<100;i++){
            ansint[i]=ans[i];
        }
        for(int i=0;i<100;i++){
            if(ansint[i]>96 and ansint[i]<123){
                ansint[i]-=32;
                ans[i]=char(ansint[i]);
            }
        }
        dotn=n-int(n);
        for(int i=0;i<d;i++){
            dotn=dot_turn(dotn,all_dot,b,i);
        }
        for(int i=0;i<100;i++){
            tenplus[i]=all_dot[i];
        }
        for(int i=0;i<d;i++){
            if(tenplus[i]>9){
                tenplus[i]+=55;
            }
        }
        for(int i=0;i<100;i++){

        }
        if(b>9){
            cout<<ans;
        }
        else{
            cout<<ans;
        }

        if(d>0){
            cout<<".";
        }
        for(int i=0;i<d;i++){
            if(tenplus[i]>9){
                cout<<char(tenplus[i]);
            }
            else{
                cout<<tenplus[i];
            }
        }
        cout<<endl;
    }
	return 0;
}