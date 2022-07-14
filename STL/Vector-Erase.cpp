#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int it, value, del1, del2, del3;
    vector<int> vec;
    
    cin >> it;
    
    for (int i =0; i<it; i++) {
    
        cin >> value;
        vec.push_back(value);
    }

    cin >> del1 >> del2 >> del3;

    vec.erase(vec.begin()+del1-1);
    vec.erase(vec.begin()+del2-1,vec.begin()+del3-1);

    cout << vec.size() << "\n";

      for(auto x:vec){
        
        cout << x << " ";
    }
  
  
    return 0;
}
