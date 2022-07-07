#include<iostream>
using namespace std ;
class Ad
{
    public:
    int x;
    void fun()
    {
        cout<<"hello\n";
    }
};
int main()
{
    Ad a;
   a.x=100;
   cout<<a.x;
   a.fun();
}