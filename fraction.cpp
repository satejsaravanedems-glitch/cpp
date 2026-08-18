#include<iostream>
using namespace std;
void frac_num(int n1,int d1,int n2,int d2){
cout<<"num = "<<(n1*d2)<<"+"<<(n2*d1)<<endl;}
void frac_den(int n1,int d1,int n2,int d2){
cout<<"den ="<<(d1*d2)<<endl;
}
int main(){
int n1,n2,d1,d2;
cout<<"enter first fraction";
cin>>n1>>d1;
cout<<"enter second fraction";
cin>>n2>>d2;

frac_num(n1,d1,n2,d2);
frac_den(n1,d1,n2,d2);
return 0;
}
    