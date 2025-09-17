#include<bits/stdc++.h>
using namespace std;
int main(){
  pair<int, int> pair, p_array[3];
 // pair = make_pair(2,3);   // pair call
  cout << pair.first << " " << pair.second << endl;
     
  int a[3] = {1,2,3};
  int b[3] = {4,5,6};
  p_array[0] = {1,4};
  p_array[1] = {2,5};
  p_array[2] = {3,6};
  swap(p_array[0], p_array[2]);  //swapping those pairs
  for(int i=0; i<3; ++i){  // print out those pair
     cout <<p_array[i].first << " " << p_array[i].second << endl;
  }

}