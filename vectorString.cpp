#include<bits/stdc++.h>
using namespace std;
void printVector(vector<string> &v){   // new function---------------------
     cout << "size:" <<v.size() << endl;
      for(int i=0; i<v.size(); ++i){
          cout << v[i] << " ";
      }
      cout << "\n";
}

int main(){
    vector<string> v;
    int n;
    cin >>n;
    for(int i=0; i<n;++i){
        string s; 
        cin >> s; 
        v.push_back(s);
    }
     printVector(v);
}