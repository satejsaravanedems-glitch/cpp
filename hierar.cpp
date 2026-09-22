#include<iostream>
using namespace std;

class Library
{
  public:
  Library()
  {  
    cout<<"\nThis is Library";
  }
  };
   
class Books:public Library
   {
    public:
    Books()
    {
      cout<<"\nThis are Books in the Library";
    }
    
{
  public:
  Library()
    }
    };
   
   class Magzines:public Library
   {
   public:
   Magzines()
   {
     cout<<"This are Magzines in the Library";
 };
   
   int main()
   { 
   Books obj1;
   Magzines obj2;
   
   
  return 0;
  }
};