#include <iostream>
using namespace std;

main() {
    float x, S = 0, P;
    int n;
    cout << "Nhap x, n: "; cin >> x >> n;
    P = x; 
    S = P;
    float x2 = x * x;
    for(int i = 1; i <= n; i++) {
        P *= x2; 
        S += P;
    }
    cout << "S = " << S;
}