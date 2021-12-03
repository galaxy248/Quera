#include <iostream>

using namespace std;

int main()
{
    int n,m,setare = 0;
    cin>>n>>m;
    char arr[m];
    for(int i = 0 ; i<n ; i++){
        for(int j = 0 ; j<= m-1 ; j++){
            cin>>arr[j];
            if(arr[j] == '*'){
                setare ++ ;

            }
        }

    }
    cout<<setare;
}