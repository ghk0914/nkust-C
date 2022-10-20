#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int a[4];
int stand;
int main(int argc, char** argv) {
	cin>>a[0]>>a[1]>>a[2]>>a[3];
	for(int i=0;i<4;i++){
		for(int j=i+1;j<4;j++){
			if(a[i]>a[j]){
				stand=a[j];
				a[j]=a[i];
				a[i]=stand;	
			}	
		}
	}
	for(int i=0;i<4;i++){
		cout<<a[i]<<endl;
	}
	return 0;
}
