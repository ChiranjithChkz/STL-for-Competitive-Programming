#include<bits/stdc++.h>
using namespace std;

void print(unordered_map<int , string> &m){
    cout << m.size() << endl;
    for(auto &st : m){
        cout << st.first <<  " " << st.second << endl;
    }
}
int main(){     
    // doesn't follow the order--------------------> 
    // execution time low----------->
       unordered_map<int, string > m;
       m[1]= "abc";
       m[5]= "cdc";
       m[3]= "acd";
       m[4]= "adn";
       m[5] = "dsd";
       auto it = m.find(6);   //--->1.function

    //    if(it != m.end())  // safety check--------------->
    //    if(it == m.end()){
    //     cout << "NO VALUE";
    //    }else{
    //     cout << (*it).first << " "<< (*it).second << endl;
    //    }
    print(m);
     
   // m.erase(it); //---->2.function
    // m.clear();
    // print(m);

 
}