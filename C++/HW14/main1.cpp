#include <iostream>
#include <iomanip>
// #include <string>
using namespace std;;
void str_to_arry(string a,string c[2]){
    int len_a;
    string p,q;
    len_a=a.size();
    if(len_a%2==0){
        for(int i=0;i<len_a;i+=2){
            q+=a[i];
        }
        for(int i=1;i<len_a;i+=2){
            p+=a[i];
        }
    }
    else{
        for(int i=0;i<len_a;i+=2){
            p+=a[i];
        }
        for(int i=1;i<len_a;i+=2){
            q+=a[i];
        }
    }
    c[0]=p;
    c[1]=q;
}

int arry_to_int(string c[2],int count){
    int P,Q,S;
    string p=c[0];
    string q=c[1];
    P=stoi(p);
    Q=stoi(q);
    S=P-Q;
    if(count<1){
        cout<<P<<"-"<<Q<<"="<<S<<endl;
    }
    return S;
}

int main(int argc, char** argv) {
    while(true){
        string a,c[2];
        int S,b;
        cin>>a;
        b=stoi(a);

        if(b<1){
            break;
        }

        while(true){
            int count=0;
            str_to_arry(a,c);
            S=arry_to_int(c,count);
            count++;
            if(S<10){
                break;
            }
            else{
                a=to_string(S);
                str_to_arry(a,c);
                S=arry_to_int(c,count);
                count++;
            }
        }
    }
	return 0;
}