/*program for function overloading*/
#include<iostream>
using namespace std;
int abc(int i);
double abc(double d);
long abc(long l);
int main()
{
 cout<<abc(-10)<<"\n";
 cout<<abc(11.0)<<"\n";
 cout<<abc(-9l)<<"\n";
 return 0;
}
int abc(int i)
{
 cout<<"in integer function\n";
 return (i<0)?-i:i;
}
double abc(double d)
{
cout<<"in double\n";
 return (d<0)?-d:d;
}
long abc(long l)
{
    cout<<"in long\n";
 return (l<0)?-l:l;
}

















