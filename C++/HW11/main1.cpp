#include <iostream>
#include <iomanip>
using namespace std;;
string arr[50][50];
int a,o;
int main(int argc, char** argv) {
    while(true){
        cin>>o>>a;
        if(o<1 or o>2){
            break;
        }
        if(o==1){
            for(int i=0;i<a;i++){
                for(int j=0;j<2*a-1;j++){
                    arr[i][j]=" ";
                }
            }

            for(int i=0;i<a;i++){
                for(int j=a;j>i;j--){
                    arr[i][j-1]="*";
                }
            }

            for(int i=0;i<a;i++){
                for(int j=0;j<a;j++){
                    cout<<arr[i][j];
                }
                cout<<endl;
            }
        }
        if(o==2){
            for(int i=0;i<a;i++){
                for(int k=0;k<a-i-1;k++){
                    cout<<" ";
                }
                for(int j=0;j<i+1;j++){
                    cout<<"* ";
                }
                cout<<endl;
            }
        }

    }
	return 0;
}