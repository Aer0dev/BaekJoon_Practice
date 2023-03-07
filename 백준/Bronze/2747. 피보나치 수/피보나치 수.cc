#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    long long fibo[45] = {};

    fibo[0] = 0;
    fibo[1] = 1;
    for(int i=2; i<=n; i++){
        fibo[i] = fibo[i-1] + fibo[i-2];
    }
    cout << fibo[n];

    return 0;
}
