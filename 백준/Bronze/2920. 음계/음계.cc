#include <iostream>
using namespace std;

int main(){
    int arr[8];
    int asc = 0;
    int dsc = 0;
    for(int i = 0; i<8; i++){
        cin >> arr[i];
    }

    for(int i=0; i<8; i++){
        if(arr[i] == i+1)   asc++;
        else if(arr[i] == 8-i)  dsc++;
    }
    if(asc == 8)
        cout << "ascending";
    else if(dsc == 8)
        cout << "descending";
    else
        cout << "mixed";

    
}