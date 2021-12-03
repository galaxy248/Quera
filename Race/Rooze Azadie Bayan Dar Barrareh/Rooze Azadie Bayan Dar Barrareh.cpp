#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n == 0){
        cout<<"Bala Barare";
        return 0;
    }
    if((n%2) == 0){
        cout<<"Bala Barare";
        return 0;
    }
    else{cout<<"Payin Barare";}
}