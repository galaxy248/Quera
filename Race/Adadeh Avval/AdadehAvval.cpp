#include <iostream>

using namespace std;

int main()
{
    long int a,b;
    long temp;
    long int s=0;
    cin>>a>>b;
    if(a>b){
     temp = a;
     a=b;
     b=temp;
    }
   for(long int i = a ; i <= b ; i ++){
    if(i!=1){
    for(long int j = 2 ; j <= (i/2) ; j++){
        if(i%j == 0){
            s++;
        break;
        }

    }
    if(s == 0){
        cout<<i;
        cout<<endl;

    }
    s=0;
    }
   }
   }