#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int a[9];
int o=0;
int main(int argc, char** argv) {
	while(o<3){
		int sum=0;
		int mid;
		for(int i=0;i<9;i++){
		cin>>a[i];
	}
	sort(a,a+9);
	for(int j=0;j<9;j++){
		sum+=a[j];
	}
	mid=a[4];
	cout<<sum<<" "<<mid<<endl;
	o++;	
	}
	return 0;
}
