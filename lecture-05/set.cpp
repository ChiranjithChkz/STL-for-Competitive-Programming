#include<bits/stdc++.h>
using namespace std;

void print(set<string> &s){
      for(string value : s){
        cout << value << endl;
      }
      for(auto it = s.begin(); it != s.end(); ++it){
            cout << (*it) << endl;
      }
   
}   //some as maps done . it store only the unique element
int main(){     
      set<string> s;
      s.insert("abc");
      s.insert("sfd");
      s.insert("dkn");
      auto it = s.find("abc");
      s.find("it");
      //s.erase(it);
      print(s);
      
}