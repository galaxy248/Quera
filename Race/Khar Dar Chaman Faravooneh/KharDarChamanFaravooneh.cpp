#include <iostream>

using namespace std;

int main()
{
    int a , b ,c ;
    cin >>a >> b>>c ;

    int sum = 0;

    for(int i = 1 ; i <= c ; i++){
        if(i %2 == 0){
    sum += b ;
        }else{
            sum +=a ;
        }
    }

    cout<<sum;
}