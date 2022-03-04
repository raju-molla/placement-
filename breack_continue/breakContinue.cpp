#include<bits/stdc++.h>
using namespace std;

int main(){
     /*int pokectMoney =3000;
    for(int date=1; date<=30; date++){
        if(date%2==0){
            continue;
        }
        if(pokectMoney<=0){
            cout<< "Pokect is null\n";
            break;
        }
        cout<< date <<" You can go\n";
        pokectMoney-=300;
    }*/


    // print 1 to 100 which number is not divisible by 3
    /*for(int i=1; i<=100; i++){
        if(i%3==0){
            continue;
        }
        cout<< i<< " "<<endl;
    }*/

    //cheak if a number prime or not
    /*int n;
    cin>>n;
    int flag=1;
    for(int i = 2; i<n; i++){
        if(n%i==0){
            flag=0;
            break;
        }
    }
    if(flag==1){
        cout<< "prime\n";
    }
    else{
        cout<< "not\n";
    }*/

    //print a prime number between a and b

    int a,b;
    cin>>a>>b;
    for(int i=a; i<=b; i++){
            int flag=1;
        for(int j = 2; j<i; j++){
            if(i%j==0){
                flag=0;
                break;
            }
        }
        if(flag==1){
        cout<< i<< " is prime number\n";
        }
    }

}
