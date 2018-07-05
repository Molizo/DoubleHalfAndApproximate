#include <iostream>

using namespace std;

int main()
{int a,b;
    cout << "Introduceti nr.a:";
    cin>>a;
    cout<<"Introduceti nr.b:";
    cin>>b;
    cout<<endl;
    if(a%2==0)
    {
        if(b%2==0)
        {
            cout<<"Nr. este:"<<(b-a)/2;
        }
        else
        {
            cout<<"Nr.este:"<<(b-a)/2+1;
        }
    }
    else
    {
        if(b%2==0)
        {
            cout<<"Nr.este:"<<(b-a)/2+1;
        }
        else
        {
            cout<<"Nr.este:"<<(b-a)/2+1;
        }
    }
    cout<<endl;
    return 0;
}
