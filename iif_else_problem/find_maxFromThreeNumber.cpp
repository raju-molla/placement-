#include<iostream>
using namespace std;
int main()
{


    int a,b,c;
    cin>>a>>b>>c;

    if(a>b)
    {
        if(a>c)
        {
            cout<< "A is maximum\n";
        }
        else
        {
            cout<< "C is maximum\n";
        }
    }
    else if(b>c)
    {
        cout<< "B is maximum\n";
    }
    else{
        cout<< "C is maximum\n";
    }

    return 0;
}
