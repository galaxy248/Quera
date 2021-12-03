#include <iostream>

using namespace std;

int main()
{

    int x;
    cin>>x;
    int n;
    cin>>n;
    if(n == 0){
        cout<<"20";
        return 0;
    }
    if(n == 7){
        cout<<x;
        return 0;
    }
    if(x != 0 || x!= 7){
        if((x-n) < 0)
        {
            cout<<"0";
        }else{
            cout<<x-n;
        }
    }
}