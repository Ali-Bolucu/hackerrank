#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int it, value;
    vector<int> vec;

    
    cin >> it;
    
    for (int i =0; i<it; i++) {
    
    cin >> value;
    vec.push_back(value);
    }

    sort(vec.begin(), vec.end());

    for(int &x:vec){
        
        cout << x << " ";
    }
    return 0;
}
