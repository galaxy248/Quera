#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int a , b , c ,d;
        int esteghlal = 0, perspolis = 0;
        int esteghlalEqual = 0, perspolisEqual = 0;
        cin >> a >> b >> c >> d;
        esteghlal = b + d;
        perspolis = a + c;
        esteghlalEqual = (b * 2) + d;
        perspolisEqual = a + (c * 2);
        if(esteghlal > perspolis){
            cout << "esteghlal"<< endl;
        }else if(esteghlal < perspolis){
            cout<< "perspolis" << endl;
        }else if(esteghlal == perspolis){
            if(esteghlalEqual > perspolisEqual){
                cout << "esteghlal"<< endl;
            }else if(esteghlalEqual < perspolisEqual){
                cout<< "perspolis" << endl;
            }else{
                cout << "penalty" << endl;
            }
        }
    }





}
