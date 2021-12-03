#include <iostream>

using namespace std;

int main()
{
    string str;
    cin>>str;
    for(int i=0 ; i<=str.length()-1;i++){
        for(int j = 0; j <=i ; j++){
            while(j<i){
                str[j]=str[i];
                break;
            }
        }if(i<str.length()){cout<<str<<endl;}
        else
            cout<<str;
    }

}