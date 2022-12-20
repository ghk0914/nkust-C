#include <iostream>
#include <iomanip>
// #include <string>
using namespace std;;
int cut(string a){
    int k1=0,k2=0,len_a,Q,P,S;
    char p[15],q[15];
    len_a=a.size();
    switch(len_a%2){
        case 0:
            for(int i=0;i<len_a;i+=2){
                q[k1]=a[i];
                k1++;
            }
            for(int i=1;i<len_a;i+=2){
                p[k2]=a[i];
                k2++;
            }
            break;
        case 1:
            for(int i=0;i<len_a;i+=2){
                p[k2]=a[i];
                k2++;
            }
            for(int i=1;i<len_a;i+=2){
                q[k1]=a[i];
                k1++;
            }
            break;
    }
    string sp(p);
    string sq(q);
    P=stoi(sp);
    Q=stoi(sq);
    S=P-Q;
    cout<<P<<"-"<<Q<<"=";
    return S;
}

int main(int argc, char** argv) {
    while(true){
        string a;
        int S,b;
        cin>>a;
        b=stoi(a);
        if(b<1){
            break;
        }
        S=cut(a);
        if(S<10){
            cout<<S<<endl;  
        }
        else{
            while(S>9){
                cout<<S<<endl;
                a = to_string(S);
                S=cut(a);
            }
            cout<<S<<endl;
        }
        }
	return 0;
}