#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int ,multiset<string>> mark_map;
    int n;
    cin >> n;
    for(int i=0; i<n; ++i){
        int marks;
        string name;
        cin >> name >> marks;
        mark_map[marks].insert(name);
    }
    auto cur_it =( --mark_map.end());
    while(true){
        auto students = (*cur_it).second;
        int marks = (*cur_it).first;
        for(auto student : students){
            cout << student << " " <<marks << endl;
        }
        if(cur_it == mark_map.begin())break;
        cur_it--;
    }
}