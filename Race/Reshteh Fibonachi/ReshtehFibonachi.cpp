#include <iostream>

using namespace std;

int main()
{
    long long int a=1,b=2;
    long long int j=1;
        long long int c,n;
        cin>>n;
        string str="";
        long long int i=2;
        if(n== 1){
            cout<<"+";}
        else{
        while (i<n)
        {
            c=a+b;

            for(; j <= (a+b)+1 ; j++){
                if(j==(n+1)){
                    cout<<str;
                    return 0;
                }
                if(j == 1 || j== 2 || j==c){
                    str += "+";
                }else
                    str += "-";
            }

            a=b;
            b=c;
            i++;
        }
}
}