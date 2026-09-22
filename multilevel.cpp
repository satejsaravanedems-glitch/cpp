#include<iostream>
using namespace std;

class student
{
    public:
    string name;
    int rollno;
    char clas;

    void setdata1()
    {
        cout<<"enter name of student"<<endl;
        cin>>name;
        cout<<"enter roll number of student"<<endl;
        cin>>rollno;
        cout<<"enter class of student"<<endl;
        cin>>clas;

    }

    void display1()
    {
        cout<<"name of student is:"<<name<<endl;
        cout<<"rollno of student is:"<<rollno<<endl;
        cout<<"class of student is:"<<clas<<endl;
    }
};
class studentmarks : public student
{
    public:
    int totalmarks;
    int phy,chem,eng,math,san;

    void setdata2()
    {
        cout<<"enter marks of english"<<endl;
        cin>>eng;

        cout<<"enter marks of physics"<<endl;
        cin>>phy;

        cout<<"enter marks of maths"<<endl;
        cin>>math;

        cout<<"enter marks of chemistry"<<endl;
        cin>>chem;

        cout<<"enter marks of sanskrit"<<endl;
        cin>>san;
    }

    void totalmark()
    {
        totalmarks=phy+chem+eng+math+san;
    }

    void display2()
    {
        cout<<"marks of english is"<<eng<<endl;
        cout<<"marks of physics is"<<phy<<endl;
        cout<<"marks of chemistry is"<<chem<<endl;
        cout<<"marks of maths is"<<math<<endl;
        cout<<"marks of sanskrit is"<<san<<endl;
    }
};

class studentpercentage: public studentmarks
{
    public:
    float percentage;

    void percent()
    {
    percentage= (totalmarks/5)*100;
    }

    void display()
    {
        cout<<"percentage of"<<name<<"is"<<percentage<<endl;
        display1();
        display2();

    }
};

int main()
{
    studentpercentage s1;
    s1.setdata1();
    s1.setdata2();
    s1.percent();
    s1.display();

    return 0;

}