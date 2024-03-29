#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

bool compare(pair<int,int>a, pair<int, int>b){
    if(a.second == b.second){
        return a.first < b.first;
    }
    return a.second < b.second;
}

int main(){
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    for(int i=0; i<n; i++){
        int x, y;
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }

    sort(v.begin(), v.end(), compare);
    for(int i=0; i<n; i++){
        cout << v[i].first << " "<< v[i].second << "\n";
    }
}