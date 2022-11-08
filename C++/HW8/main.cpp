#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;;
int arr[100];
int datafeq=1;
int o;
int main(int argc, char** argv) {
    while(datafeq>=1){
        cin>>datafeq;
        if(datafeq<1){
            break;
        }
        cin>>o;
        for(int i=0;i<datafeq;i++){
            cin>>arr[i];
        }
        sort(arr,arr+datafeq);
        switch(o){
            int min,max;
            case 1:
                min=arr[0];
                cout<<min<<" ";
                for(int i=0;i<min;i++){
                    cout<<"*";
                }
                cout<<endl;
                break;
            case 2:
                max=arr[datafeq-1];
                cout<<max<<" ";
                for(int i=0;i<max;i++){
                    cout<<"*";
                }
                cout<<endl;
                break;
        }
    }
	return 0;
}