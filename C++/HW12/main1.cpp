#include <iostream>
#include <iomanip>
using namespace std;;
int arr[100][100],a,con,con1;
int main(int argc, char** argv) {
    while(true){
        cin>>a;
        if(a<1 or a>9){
            break;
        }
        for(int i=0;i<a*2-1;i++){
                for(int k=0;k<a*2-1;k++){
                    arr[i][k]=1;
                }
            }

        //左上
        for(int i=2;i<a;i++){
            for(int j=0;j<a-i+1;j++){
                for(int k=0;k<a-i+1;k++){
                    arr[j][k]=i;
                }
            }
        }
        //右上
        for(int i=2;i<a;i++){
            for(int j=0;j<a-i+1;j++){
                for(int k=a+con;k<2*a-1;k++){
                    arr[j][k]=i;
                }
            }
            con+=1;
        }
        con=0;
        //左下
        for(int i=2;i<a;i++){
            for(int j=a+con1;j<a*2-1;j++){
                for(int k=0;k<a-i+1;k++){
                    arr[j][k]=i;
                }
            }
            con1+=1;
        }
        con1=0;
        //右下
        for(int i=2;i<a;i++){
            for(int j=a+con1;j<a*2-1;j++){
                for(int k=a+con;k<2*a-1;k++){
                    arr[j][k]=i;
                }
            }
            con+=1;
            con1+=1;
        }
        con=0;
        con1=0;
        //最後且不變4個角落
        arr[0][0]=a;
        arr[0][a*2-2]=a;
        arr[a*2-2][0]=a;
        arr[a*2-2][a*2-2]=a;
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