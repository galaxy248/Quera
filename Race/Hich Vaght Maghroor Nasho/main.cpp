#include <iostream>

using namespace std;

int main() {
    int n ;
    cin >> n;
    int v[n],u[n];
    int hitNode[n];

    for (int i = 0; i < n; ++i) {
        hitNode[i] = 0;
    }

    for (int i = 0; i < n-1; ++i) {
        cin >> v[i]>> u[i];
        hitNode[v[i]]++;
        hitNode[u[i]]++;
    }

    int maxHitNode = 0;
    for (int i = 0; i < n; ++i) {
        if(maxHitNode < hitNode[i]){
            maxHitNode = hitNode[i];
        }
    }

    cout<< maxHitNode;


}
