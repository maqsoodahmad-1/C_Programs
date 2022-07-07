#include<iostream>
using namespace std ;
class Addam
{
    public:
    void display()
    {
        int i;
        cout<<"enter any number you want to display";
        cin>>i;
        cout<<"the number is "<<i<<"\n";
    }
};
int main()
{
Addam ad;
ad.display();
}