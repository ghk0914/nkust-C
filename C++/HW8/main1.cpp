#include <iostream>
#include <iomanip>
int data[100];
int min=1000000;
int max=0;
int main(int argc, char** argv) {
    while(1){
        scanf("%d %d",&data[0],&data[1]);
        if(data[0]==0){
            break;
        }
        for(int i=2;i<data[0]+2;i++){
            scanf(" %d",&data[i]);
        }
        for(int i=2;i<data[0]+2;i++){
            if(data[i]<min){
                min=data[i];
            }
        }

        for(int i=2;i<data[0]+2;i++){
            if(data[i]>max){
                max=data[i];
            }
        }
        //printf("max:%dmin:%d",max,min);
        if(data[1]==1){
            printf("%d ",min);
            for(int i=1;i<min+1;i++){
                printf("*");
            }
            printf("\n");
        }
        if(data[1]==2){
            printf("%d ",max);
            for(int i=1;i<max+1;i++){
                printf("*");
            }
            printf("\n");
        }
        }
	return 0;
}
