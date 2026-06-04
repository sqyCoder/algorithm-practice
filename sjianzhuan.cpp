#include<iostream>
using namespace std;
int main()
{
    long long seconds=0,a=0,b=0,c=0;
    cin>>seconds;
    a=seconds/3600;
    b=(seconds-a*3600)/60;
    c=seconds-a*3600-b*60;
    cout<<a<<" "<<b<<" "<<c<<endl;
    return 0;
}
