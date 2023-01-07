#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;
int main(int argc, char** argv) {
    while(true){
        string a,az[52],s;
        int w=0,azilenint[52];
        getline(cin,a);//將空格當輸入帶進來
        //下行是消除讀入的空格
        a.erase(remove_if(a.begin(),a.end(),::isspace),a.end());
        s=a[0];
        int ss=stoi(s);
        if(ss<1)
            break;
        //cout<<"a is "<<a<<endl;
        for(int i=0;i<52;i++){//初始化陣列
            az[i]="0";
        }
        for(int i=0;i<26;i++){//計數大寫
            int b=count(a.begin(),a.end(),char(i+65));
            if(b!=0){
                az[w]=char(i+65);
                az[w]+="(";
                az[w]+=to_string(b);
                w+=1;
            }
        }
        for(int i=0;i<26;i++){//計數小寫
            int b=count(a.begin(),a.end(),char(i+97));
            if(b!=0){
                az[w]=char(i+97);
                az[w]+="(";
                az[w]+=to_string(b);
                w+=1;
            }
        }

        for(int i=0;i<w;i++){//將個數轉int
            int azilen=az[i].length();
            string azilenstr;
            for(int k=2;k<azilen;k++){
                azilenstr=azilenstr+az[i][k];
            }
            azilenint[i]=stoi(azilenstr);
        }
        for(int i=0;i<w;i++){//排序
            for(int j=i+1;j<w;j++){
                if(azilenint[i]<azilenint[j]){
                    int stand=azilenint[j];
                    azilenint[j]=azilenint[i];
                    azilenint[i]=stand;	

                    string hold=az[j];
                    az[j]=az[i];
                    az[i]=hold;
                }
                if(azilenint[i]==azilenint[j]){//相同次數以大寫在前
                    if(int(az[i][0])>int(az[j][0])){
                        string hold=az[j];
                        az[j]=az[i];
                        az[i]=hold;
                    }
                }

            }
        }
        // for(int i=0;i<w;i++){//顯示
        //     cout<<"az i len int is "<<azilenint[i]<<endl;
        // }
        for(int i=0;i<w;i++){
            az[i]+=")";
        }
        for(int i=0;i<w;i++){//顯示
            cout<<az[i]<<" ";
        }
        cout<<endl;
    }
	return 0;
}