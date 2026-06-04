#include<iostream>
using namespace std;
int main()
{
    int a=0,b=0,c=0,d=0,h=0,m=0,e=0,f=0,g=0;
    cin>>a>>b>>c>>d;
    h=a*60+b;
        m=c*60+d;
    e=m-h;
    f=e/60;
    g=e%60;
        cout<<f<<" "<<g<<endl;
}
