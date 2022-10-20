#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int testdata[4];
int sort_testdata[4];
int o;
void maxandmin(){
	cin>>o>>testdata[0]>>testdata[1]>>testdata[2]>>testdata[3];
	sort(testdata,testdata+4);
	for (int i=0;i<4;i++){
		sort_testdata[i]=testdata[i];
	}
	switch(o){
		case 0:
			cout<<sort_testdata[0]<<endl;
			break;
		case 1:
			cout<<sort_testdata[3]<<endl;
			break;
	}
}
int main(int argc, char** argv) {
	for (int i=0;i<2;i++){
		maxandmin();
	
	}
	return 0;
}
