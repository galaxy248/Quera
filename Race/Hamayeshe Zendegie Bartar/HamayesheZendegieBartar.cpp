#include <iostream>

using namespace std;

int main()
{
    int r,c;
    cin>>r>>c;

    if(r<=0 || c<=0 || r>10 || c>20){
        return 0;
    }
    if(c<=10 &&  c>=1){
        cout<<"Right ";

    }
    else{
        cout<<"Left ";
    }

        cout<<11-r<<" ";


    if(c<=10){
        cout<<c;

    }
    if(c>10){
        cout<<21-c;
    }


}