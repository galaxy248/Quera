#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,e,f,a1,b1,c1,d1,e1,f1;
    cin>>a>>b>>c>>d>>e>>f;
    if(a != 1){
        a1 = (1-a);
    }
    else
        a1 = 0;
    if(b != 1){
        b1 = (1-b);
    }
    else
        b1 = 0;
    if(c != 2){
        c1 = (2-c);
    }
    else
        c1 =0;
    if(d != 2){
        d1 = (2-d);
    }
    else
        d1 = 0;
    if(e != 2){
        e1 = (2 - e);
    }
    else
        e1 = 0;
    if(f != 8){
        f1 = (8-f);
    }
    else
        f1 = 0;

    cout<<a1<<" "<<b1<<" "<<c1<<" "<<d1<<" "<<e1<<" "<<f1;
}