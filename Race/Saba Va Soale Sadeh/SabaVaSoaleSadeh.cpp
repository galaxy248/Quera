#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double n,k;
    cin>>n>>k;
    for(int i = 1 ;i <=k ; i++){
        n/=2;
    }
    cout<< floor(n);

}