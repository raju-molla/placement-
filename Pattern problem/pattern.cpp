#include<iostream>>
using namespace std;

int main()
{

    /*
        *
       * *
      * * *
    */

    /*int n;
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<=n-1-i; j++){
            cout<< " ";
        }
        for(int k=0; k<n-n+i+1; k++){
            cout<< " *";
        }
        cout<<endl;
    }
    */


    /*
        * * * *
        *     *
        *     *
        *     *
        * * * *
    */

    /*int row,col;
    cin>>row>>col;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++){
            if(i==0 || i==row-1){
                cout<<"*";
            }
            else if(j==0 || j==col-1){
                cout<< "*";
            }
            else{
                cout<< " ";
            }
        }
        cout<<endl;
    }*/

    /*
        * * * * *
        * * * *
        * * *
        * *
        *
    */

    /*int n;
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            cout<< " * ";
        }
        cout<<endl;
    }*/

    /*
              *
            * *
          * * *
        * * * *
      * * * * *
    */

    /*int n ;
    cin>>n;
    for(int i=0; i<n; i++){
        for(int sp=0; sp<n-1-i; sp++){
            cout<< "  ";
        }
        for(int j=n-1-i; j<n; j++){
            cout<< "* ";
        }
        cout<<endl;
    }*/

    /*
        1
        2 2
        3 3 3
        4 4 4 4
        5 5 5 5 5
    */

    /*int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(j>i){
                cout<<" ";
            }
            else{
                cout<<i<< " ";
            }
        }
        cout<<endl;
    }*/


    /*
        1
        2 3
        4 5 6
        7 8 9 10
        11 12 13 14 15
    */

    /*int n;
    cin>>n;
    int cnt=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(j>i){
                cout<<" ";
            }
            else{
                cout<<cnt++<< " ";
            }
        }
        cout<<endl;
    }*/


    /*
        *             *
        * *         * *
        * * *     * * *
        * * * * * * * *
        * * * * * * * *
        * * *     * * *
        * *         * *
        *             *
    */

    int n;
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n*2; j++){
            if(j>i && j<n*2-i+1){
                cout<< "  ";
            }
            else{
                cout<< "* ";
            }
        }

        cout<<endl;
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n*2; j++){

            {
                cout<< "* ";
            }
        }
        cout<<endl;
    }


}

