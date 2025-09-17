#include<bits/stdc++.h>
using namespace std;

void print(map<int , string> &m){
    cout << m.size() << endl;
    for(auto &st : m){
        cout << st.first <<  " " << st.second << endl;
    }
}
int main(){     ///printed all things in sorted form
       map<int, string > m;
       m[1]= "abc";
       m[5]= "cdc";
       m[3]= "acd";
       m.insert({4, "afg"});

       auto it = m.find(6);   //--->1.function

       if(it != m.end())  // safety check--------------->
       
       
    //    if(it == m.end()){
    //     cout << "NO VALUE";
    //    }else{
    //     cout << (*it).first << " "<< (*it).second << endl;
    //    }
    // print(m);

      
       //****don't use this things *** */
    //    map<int , string> :: iterator it;
    //    for(it = m.begin(); it !=m.end(); ++it){
    //     cout << (*it).first << " " << (*it).second <<endl;
    //    }
     
   // m.erase(it); //---->2.function
    m.clear();
    print(m);

 
}