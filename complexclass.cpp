#include<iostream>
 using namespace std;

 class complex
{   
    public:
    int real;
    int img;

    void setdata(int r1,int i1)
    {
        real=r1;
        img=i1;
    }

    void getdata()
    {
        cout<<"complex number is"<<real <<"+"<<img<<"i"<<endl;
    }

    complex add(complex c1,complex c2 )
    {
        complex temp;
     temp.real=c1.real+c2.real;
     temp.img=c1.img+c2.img;
    // cout<<real<<"+"<<img<<"i";
     return temp;
    }



};

 int main()
 {
    complex c1,c2,c3;
    c1.setdata(1,5);
    c1.getdata();

    c2.setdata(2,7);
    c2.getdata();

    c3=c3.add(c1,c2);
    c3.getdata();



 }