#include <iostream>

using namespace std;

int main()
{
    int t;

    cin>>t;
    if(t>-273 && t<=6000){
    if(t>100){
        cout<<"Steam";
        return 0;
    }
    if(t<0){
        cout<<"Ice";
        return 0;
    }
    else{
        cout<<"Water";
        return 0;
    }
}


}