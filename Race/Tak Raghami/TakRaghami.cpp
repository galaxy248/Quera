#include <iostream>


using namespace std;

long long int sumdigit(long long int number)
{
    if(number<10)
             return number;
    else
        return number%10+ sumdigit(number/10);
}

int main()
{
    long long int num;
    cin>>num;
    while(num>9){
        num = sumdigit(num);
    }
    cout<<num;

}
