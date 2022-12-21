#include <iostream>
#include <iomanip>
using namespace std;;

double dot_turn(double dotn,int all_dot[100],int b,int i){
   double s=dotn*b;
   double sdot=s-int(s);
   all_dot[i]=int(s);
   return sdot;
}

int nint(int n,int quo[50],int b,int i){
    quo[i]=n%b;
    return n/b;
}

int main(int argc, char** argv) {
    while(true){
        int b,d,h,quo[50],i=0,i1=0;
        double n,dotn;
        int all_dot[100],tenplus[100],tenplusint[50];
        cin>>n>>b>>d;
        if(n<0 or b<2 or b>36 or d<0 or d>5){
            break;
        }
        for(int i=0;i<50;i++){
            quo[i]=-1;
        }
        for(int i=0;i<100;i++){
            all_dot[i]=0;
        }
        h=int(n);
        while(true){
            if(h==0){
                break;
            }
            else{
                h=nint(h,quo,b,i);
                i++;
            }
        }
        dotn=n-int(n);
        for(int i=0;i<d;i++){
            dotn=dot_turn(dotn,all_dot,b,i);
        }
        for(int i=0;i<100;i++){
            tenplus[i]=all_dot[i];
        }
        for(int i=0;i<50;i++){
            tenplusint[i]=quo[i];
        }
        for(int i=0;i<d;i++){
            if(tenplus[i]>9){
                tenplus[i]+=55;
            }
        }
        for(int i=0;i<50;i++){
            if(tenplusint[i]>9){
                tenplusint[i]+=55;
            }
        }
        while(true){//有效個數
            if(quo[i1]>=0){
                i1++;
            }
            else{
                break;
            }
        }
        for(int i=1;i<i1+1;i++){
            if(tenplusint[i1-i]<=9){
                cout<<tenplusint[i1-i];
            }
            if(tenplusint[i1-i]>9){
                cout<<char(tenplusint[i1-i]);
            }
        }
        if(d>0){
            cout<<".";
        }
        for(int i=0;i<d;i++){
            if(tenplus[i]>9){
                cout<<char(tenplus[i]);
            }
            if(tenplus[i]<=9){
                cout<<tenplus[i];
            }
        }
        cout<<endl;
    }
	return 0;
}