/*program of inline function*/
#include<iostream>
using namespace std ;
inline int sum(int a,int b)
{
return a+b;
}
int main()
{ int a,b,c;
    cout<<"enter two numbers whose sum is to be calculated \n";
    cin>>a>>b;
    c=sum (a,b);
   cout<<"the sum is  \n"<<c;
}