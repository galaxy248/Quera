#include <iostream>

using namespace std;

int main()
{
   string a,b;
int n,x=0;
cin>>n;
cin>>a>>b;

for(int i = 0 ; i<= n-1 ; i++){
    if(a[i] != b[i]){
        x++;
    }

}
cout<<x;



}