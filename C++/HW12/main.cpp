#include <iostream>
#include <iomanip>
using namespace std;;
int arr[100][100];
int a,a1;
int main(int argc, char** argv) {
    while(true){
        cin>>a;
        if(a<1 or a>9){
            break;
        }
        a1=a;
        for(int i=0;i<a*2-1;i++){
            for(int k=0;k<a*2-1;k++){
                arr[i][k]=a;
            }
        }
        for(int round=1;round<a-1;round++){
        //上方
            for(int i=round;i<a-1;i++){
                for(int j=0;j<i;j++){
                    for(int k=i;k<a*2-1-i;k++){
                        arr[j][k]=a1-round;
                    }
                }
            }
            //下方
            for(int i=round;i<a-1;i++){
                for(int j=a*2-2;j>=a*2-2-(i-1);j--){
                    for(int k=i;k<a*2-1-i;k++){
                        arr[j][k]=a1-round;
                    }
                }
            }
            //中間
            for(int k=round;k<a-1;k++){
                for(int i=k;i<a*2-1-k;i++){
                    for(int j=0;j<a*2-1;j++ ){
                        arr[i][j]=a1-round;
                    }
                    
                }
            }
        }
        //絕對唯一中心十字
        for(int i=0;i<a*2;i++){
            arr[i][a-1]=1;
        }
        for(int i=0;i<a*2-1;i++){
            arr[a-1][i]=1;
        }

        //顯示
        for(int i=0;i<a*2-1;i++){
            for(int k=0;k<a*2-1;k++){
                cout<<arr[i][k];
            }
            cout<<endl;
        }
    }
	return 0;
}