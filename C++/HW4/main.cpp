#include <iostream>
#include <iomanip>
using namespace std;;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int a[9];
int stand,i;

void sum_and_middle(){
	int sum=0;
	cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4]>>a[5]>>a[6]>>a[7]>>a[8];
	for(int i=0;i<9;i++){
		for(int j=i+1;j<9;j++){
			if(a[i]>a[j]){
				stand=a[j];
				a[j]=a[i];
				a[i]=stand;	
			}	
		}
	}
	for(int i=0;i<9;i++){
		sum=sum+a[i];
	}
	cout<<sum<<" "<<a[4]<<endl;
}
	
int main(int argc, char** argv) {
	while (i<3){
		sum_and_middle();
		i+=1;
	}
	
	return 0;
}
