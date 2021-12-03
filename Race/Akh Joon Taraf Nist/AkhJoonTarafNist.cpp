#include <iostream>

using namespace std;

int main()
{
    int shanbe=0,shanbe1=0,shanbe2=0,shanbe3=0,shanbe4=0,shanbe5=0,jome=0,hafteh;
    string rooz;
    int n;
    cin>>n;
    for(int j = 1 ; j <= n ; j++){
        cin>>rooz;
        if(rooz == "shanbe"){
            shanbe = 1;
        }
        if(rooz == "1shanbe"){
            shanbe1 = 1;
        }
        if(rooz == "2shanbe"){
            shanbe2 = 1;
        }
        if(rooz == "3shanbe"){
            shanbe3 = 1;
        }
        if(rooz == "4shanbe"){
            shanbe4 = 1;
        }
        if(rooz == "5shanbe"){
            shanbe5 = 1;
        }if(rooz == "jome"){
            jome = 1;
        }
    }
    cin>>n;
    for(int j = 1 ; j <= n ; j++){
        cin>>rooz;
        if(rooz == "shanbe"){
            shanbe = 1;
        }
        if(rooz == "1shanbe"){
            shanbe1 = 1;
        }
        if(rooz == "2shanbe"){
            shanbe2 = 1;
        }
        if(rooz == "3shanbe"){
            shanbe3 = 1;
        }
        if(rooz == "4shanbe"){
            shanbe4 = 1;
        }
        if(rooz == "5shanbe"){
            shanbe5 = 1;
        }if(rooz == "jome"){
            jome = 1;
        }
    }
    cin>>n;
    for(int j = 1 ; j <= n ; j++){
        cin>>rooz;
        if(rooz == "shanbe"){
            shanbe = 1;
        }
        if(rooz == "1shanbe"){
            shanbe1 = 1;
        }
        if(rooz == "2shanbe"){
            shanbe2 = 1;
        }
        if(rooz == "3shanbe"){
            shanbe3 = 1;
        }
        if(rooz == "4shanbe"){
            shanbe4 = 1;
        }
        if(rooz == "5shanbe"){
            shanbe5 = 1;
        }if(rooz == "jome"){
            jome = 1;
        }
    }
    hafteh = 7 - (shanbe + shanbe1 + shanbe2 + shanbe3 + shanbe4 + shanbe5 + jome);
    cout<<hafteh;
}