/*single inheritance program*/
#include<iostream>
using namespace std ;
class Addam
{
    public:
    Addam()
    {
        cout<<"A is a constructor \n";
    }
};
class BoB:Addam
{
//static Addam a;
public:
BoB()
{
    cout<<"b is a constructor\n";
}
};
int main()
{
    BoB b;
return 0;
}