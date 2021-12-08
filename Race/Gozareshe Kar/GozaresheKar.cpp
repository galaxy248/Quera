#include <iostream>

using namespace std;

int main()
{
    int n,k,sum=0;
    cin>>n>>k;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
        sum += arr[i];
    }
    if(k>sum){
        cout<<"NO";
    }else{
        cout<<"YES";
    }

}