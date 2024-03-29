#include <iostream>
#include <cstring>
using namespace std;

int count_r = 0;

int recursion(const char *s, int l, int r){
    count_r++;
    if(l >= r) return 1;
    else if(s[l] != s[r]) return 0;
    else return recursion(s, l+1, r-1);
}

int isPalindrome(const char *s){
    return recursion(s, 0, strlen(s)-1);
}

int main(){
    int n;
    string str;
    cin >> n;
    for(int i=0; i<n; i++){
        count_r = 0;
        cin >> str;
        cout << isPalindrome(str.c_str()) << " " << count_r << endl;
    }
}
