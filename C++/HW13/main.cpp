#include <iostream>
#include <iomanip>
using namespace std;;
char arr[100][100];
char az[26];
char base[100];
int o,n,top,down,a,count;
int main(int argc, char** argv) {
    while(true){
        cin>>o>>n;
        if(o<1 or n<1){
            break;
        }
        for(int i=0;i<26;i++){
            az[i]=char(65+i);
        }

        //外圈
        if(o>=n){
            for(int i=0;i<n*2-1;i++){
                for(int j=0;j<n*2-1;j++){
                    arr[i][j]=az[n-1];
                }
            }
            o==n;
        }


        count=0;
        base[0]=char(65+o-1);
        for(int i=1;i<100;i++){
            base[i]=az[count];
            count+=1;
            if(count>=o){
                count=0;
            }
        }

        //外圈
        if(o<n){
            for(int i=0;i<n*2-1;i++){
                for(int j=0;j<n*2-1;j++){
                    arr[i][j]=az[(n%o)-1];
                }
            }
        }


        top=1;
        down=1;
        a=n-1;
        for(int k=0;k<n-2;k++){
            for(int i=top;i<n*2-1-down;i++){
                for(int j=top;j<n*2-1-down;j++){
                    arr[i][j]=base[a%o];
                }
            }
        top+=1;
        down+=1;
        a-=1;
        }

        //不變中心點
        arr[n-1][n-1]='A';

        //顯示
        for(int i=0;i<n*2-1;i++){
            for(int j=0;j<n*2-1;j++){
                cout<<arr[i][j];
            }
            cout<<endl;
        }
    }
	return 0;
}