#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;; 
int feq,o;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) {
	int a,b,MAX,MIN;
	cin>>feq;
	for(int y=0;y<feq;y++){
		int sum2=1;
		int sum1=0;
		int num;
		cin>>o>>a>>b;
		MAX=max(a,b);
		MIN=min(a,b);
		switch(o){
			case 1:
				num=MAX-MIN+1;
				sum1=(MAX+MIN)*num/2;
				cout<<sum1<<endl;
				break;
			case 2:
				for(int k=MIN;k<MAX+1;k++){
					sum2*=k;
				}
				cout<<sum2<<endl;
				break;		
		
	}
		
	}
	return 0;
}
