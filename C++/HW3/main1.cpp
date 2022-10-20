#include <iostream>
#include <iomanip>
using namespace std;;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int a[4];
int stand;
int o,i;
void sort(){
	cin>>o;
	for(int s=0;s<4;s++){
		cin>>a[s];
	}
	for(int i=0;i<4;i++){
		for(int j=i+1;j<4;j++){
			if(a[i]>a[j]){
				stand=a[j];
				a[j]=a[i];
				a[i]=stand;	
			}	
		}
	}
	switch (o){
		case 0:
			cout<<a[0]<<endl;
			break;	
		case 1:
			cout<<a[3]<<endl;
			break; 
	}
}
int main(int argc, char** argv) {
	while(i<10){
		sort();
		i+=1;
	}
	return 0;
}
