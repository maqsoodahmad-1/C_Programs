/*program for  leaf year checking */
#include <iostream>
using namespace std;
int main()
{
    int year;
    cout << "enter the year\n";
    cin >> year;
    if (year % 100 == 0)
    {
        if (year % 400 == 0)
        {

                cout << "the year is not a leaf year\n ";
        }
         else
         {
             cout<<"the year is not a leaf year\n";
         }
    }
    else
    {
        if(year%4==0)
        {
            cout<<"the year is a leaf year\n";
        }
        else
        {
            cout<<"the year is not a leaf year\n ";
        }
    }
}