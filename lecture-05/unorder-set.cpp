#include<bits/stdc++.h>
using namespace std;

void print(unordered_set<string> &s){
      for(string value : s){
        cout << value << endl;
      }
}   //some as maps done . it store only the unique element
int main(){     
      unordered_set <string> s;
      s.insert("abc");
      s.insert("sfd");
      s.insert("dkn");
      auto it = s.find("abc");
       if(it != s.end()){
          // s.erase(it);
       }
      print(s);
      
}