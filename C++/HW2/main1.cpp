#include<iostream> 
#include<iomanip>
using namespace std;;
int a[10],sum=0;
int k=0,j=0,l=0,m=0,n=0,o=0;
void Rankcounter(){
for(int i=0;i<10;i++)
{
cin>>a[i];
sum=sum+a[i];
if(a[i]>99)
k++;
else if(a[i]>=90)
j++;
else if(a[i]>=80)
l++;
else if(a[i]>=70)
m++;
else if(a[i]>=60)
n++;
else if(a[i]>=0)
o++;
}
if (k>0)
cout<<k<<"S"<<endl;
if (j>0)
cout<<j<<"A"<<endl;
if (l>0)
cout<<l<<"B"<<endl;
if (m>0)
cout<<m<<"C"<<endl;
if (n>0)
cout<<n<<"D"<<endl;
if (o>0)
cout<<o<<""<<endl;

}
int main()
{
Rankcounter();
return 0;
}
