#include <iostream>
using namespace std;

int main()
{
    int a,b,c,d;
 cout<<"Enter Value of a: "<<endl;
 cin>>a;
 cout<< " enter the value of b: "<<endl;
 cin>>b;
 cout<< " enter the value of c: "<<endl;
 cin>>c;
 cout<< " enter the value of d: "<<endl;
 cin>>d;
     
     if(a>b)
     {
        cout<<"Greater value is:"<<a<<endl;
     }
     else if(b>c)
     {
        cout<<"Greater value is:"<<b<<endl;
     }
     else if(c>d)
     {
        cout<<"Greater value is:"<<c<<endl;
     }
     else if(d>a)
     {
        cout<<"Greater Value is:"<<d<<endl;
     }
     
     else
     {
        cout<<"greater value is"<<endl;
     }
    return 0;
}
