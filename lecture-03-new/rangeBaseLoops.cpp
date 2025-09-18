#include<bits/stdc++.h>
using namespace std;
 
int main(){
    vector<int> v = {1,2,3,4,5,6};
    for(int i=0 ; i<v.size(); ++i){
        cout << v[i] << " ";
    }
    cout << endl;

    //  cout << endl;
    // vector<int> :: iterator it = v.begin();
    // for(it = v.begin();it != v.end(); ++it){
    //     cout << (*it) << endl;
    // }
    
    // use this instead-----------------
     
    for(int &value : v){  // &value-> it means pass by reference // sended actual value
        value++;
         // cout << value << " ";
    }

    for(int value : v){
        cout << value << " ";
    }
}
 