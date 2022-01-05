#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int n , s , a;
        cin >> n >> s >> a;
        if((s - a) % n != 0 || s <= a){
            cout << -1<<endl;
        }else{
            cout <<(s - a) / n << endl;
        }
    }


}
