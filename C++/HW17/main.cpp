#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

int main(int argc, char** argv) {
    int stand,hold,a;
    string b;
    int ans[52][2];
    while(true){
        cin>>a;
        if(a<1)
             break;
        for(int i=0;i<26;i++){//初始化陣列大寫部分
            ans[i][0]=65+i;
        }
        for(int i=26;i<52;i++){//初始化陣列小寫部分
            ans[i][0]=(97-26)+i;
        }
        for(int i=0;i<52;i++){
            ans[i][1]=0;
        }
        for(int j=0;j<a;j++){
            cin>>b;
            for(int i=65;i<91;i++){//計數大寫
                ans[i-65][1]+=count(b.begin(),b.end(),char(i));
            }
            for(int i=97;i<123;i++){//計數小寫
                ans[i-(97-26)][1]+=count(b.begin(),b.end(),char(i));
            } 
        }
        for(int i=0;i<52;i++){//二維陣列排序，以第二個元素當排序基準
            for(int j=i+1;j<52;j++){
                if(ans[i][1]<ans[j][1]){
                    stand=ans[j][1];
                    ans[j][1]=ans[i][1];
                    ans[i][1]=stand;

                    hold=ans[j][0];
                    ans[j][0]=ans[i][0];
                    ans[i][0]=hold;	
                }	
            }
        }

        for(int i=0;i<52;i++){//排序，相同次數之下大寫在前小寫在後
            for(int j=i+1;j<52;j++){
                if(ans[i][1] == ans[j][1]){
                    if(ans[i][0]>ans[j][0]){
                        hold=ans[j][0];
                        ans[j][0]=ans[i][0];
                        ans[i][0]=hold;
                    }
                }
            }
        }

        for(int i=0;i<52;i++){//顯示
            if(ans[i][1]!=0){
                cout<<char(ans[i][0])<<"("<<ans[i][1]<<")"<<" ";
            }
            //cout<<ans[i][0]<<" "<<ans[i][1]<<endl;
        }
        cout<<endl;
    }
	return 0;
}