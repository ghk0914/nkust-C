#include <iostream>
#include <iomanip>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;;
int main(int argc, char** argv) {
	int a;
	int countS=0;
	int countA=0;
	int countB=0;
	int countC=0;
	int countD=0;
	int countE=0;
	for(int i=0;i<=9;i++){
		cin>>a;
		if(a==100){
			countS+=1;
		}
		if(a>=90 and a<100){
			countA+=1;
		}
		if(a>=80 and a<90){
			countB+=1;
		}
		if(a>=70 and a<80){
			countC+=1;
		}
		if(a>=60 and a<70){
			countD+=1;
		}
		if(a<60){
			countE+=1;
		}
	}
	if(countS!=0){	
	cout<<countS<<"S"<<endl;
}
		if(countA!=0){	
	cout<<countA<<"A"<<endl;
}
		if(countB!=0){	
	cout<<countB<<"B"<<endl;
}
		if(countC!=0){	
	cout<<countC<<"C"<<endl;
}
		if(countD!=0){	
	cout<<countD<<"D"<<endl;
}
		if(countE!=0){	
	cout<<countE<<"E"<<endl;
}
	
	return 0;
}
