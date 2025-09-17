#include<bits/stdc++.h>
using namespace std;
void printVector(vector<int> &v){   // new function---------------------
     cout << "size:" <<v.size() << endl;
      for(int i=0; i<v.size(); ++i){
          cout << v[i] << " ";
      }
      cout << "\n";
}
 
//  int main(){
//      vector<int> v;
//      int n;
//      cin >> n;
//      for(int i=0 ; i<n ; i++){
//           int x;
//           cin >> x;
//           printVector(v);
//           v.push_back(x);
//      }
//      printVector(v);   // call the function
     
// }

//-----------------------------------------------------------------

// int main(){
//      // vector is a dynamic container------
//      vector<int> v(10, 7); // size declare -------------
//       v.push_back(99);  // push number inside--- 
//      printVector(v);
//      v.pop_back();// remove the last element
//      printVector(v);
// }

//----------------------------------------------------

int main(){
     
     vector<int> v(10, 7); 
     vector<int> &v2 = v;    /// copying vectors --------  
     v.push_back(8);
     printVector(v);
     v2.push_back(99);
     printVector(v2);

}