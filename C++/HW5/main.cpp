#include <iostream>
#include <iomanip>
using namespace std;;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int feq,o,stand;
int a[2];
int count=0;
void plus_and_multiply(){
	int sum_plus=0;
	int sum_multiply=1;
	cin>>o>>a[0]>>a[1];
	for(int i=0;i<2;i++){
	for(int j=i+1;j<2;j++){
		if(a[i]>a[j]){
			stand=a[j];
			a[j]=a[i];
			a[i]=stand;	
			}	
		}
	}
	switch(o){
		case 1:
			for(int i=a[0];i<a[1]+1;i++){
				sum_plus+=i;
			}
			cout<<sum_plus<<endl;
			break;
		case 2:	
			for(int j=a[0];j<a[1]+1;j++){
				sum_multiply=sum_multiply*j;
			} 
			cout<<sum_multiply<<endl;
			break;
	}
	
	
}
int main(int argc, char** argv) {
	cin>>feq;
	while(count<feq){
		plus_and_multiply();
		count++;
	}


	
	return 0;
}
