#include<iostream>
using namespace std;
int main()
{
    int num;
    int rem;
    cin>>num;
    int reverse=0;
    int original=num;
    while (num|=0){
        rem=num%10;
        reverse=reverse*10+rem;
        num=num/10;
    }
    if(original==reverse){
        cout<<"num is palindrome";
    } else{
        cout<<"num is not palindrome";
    }
}
