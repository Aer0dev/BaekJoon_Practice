#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    string str;
    cin >> str;
    int count = 0;
    for(int i = 0; i<n/2; i++){
        if(str[i] !=str[n-1-i])
            count++;
    }
    cout << count;
}
