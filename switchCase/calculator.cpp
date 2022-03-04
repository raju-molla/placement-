#include<bits/stdc++.h>
using namespace std;

int main(){

    float a,b;
    cout<< "Enter two number : \n";
    cin>>a>>b;

    char op;
    cout<< "Enter operator (+,-,*,/)\n";
    cin>>op;
    switch(op){
        case '+': cout<< a+b<<endl;break;
        case '-': cout<< abs(a-b)<<endl;break;
        case '*': cout<< a*b<<endl;break;
        case '/': cout<< a/b<<endl;break;
        default: cout<< "Please enter a valid operator:\n";break;
    }
}
