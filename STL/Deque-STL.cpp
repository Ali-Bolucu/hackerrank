#include <iostream>
#include <deque>
#include <algorithm>
#include <sstream>
#include <string>
using namespace std;

/*
https://www.hackerrank.com/challenges/deque-stl/problem?isFullScreen=true

Finds the biggest integer in the subarrays, and creates next subarray by deleting and adding 1 integer respectively start and end of array
*/

void printKMax(int arr[], int n, int k){

  std::deque<int> mydeque;

  int i, max;

  for(i=0; i<k; i++){

      mydeque.push_back(arr[i]); 
  }

  max = *max_element(mydeque.begin(), mydeque.end());
  cout << *max_element(mydeque.begin(), mydeque.end()) << " ";

  int a =n-k;
  while(a){

   if(max == mydeque.front()){

      //new element added and old deleted
      mydeque.pop_front(); //Pops element from the beginning
      mydeque.push_back(arr[i]);

      max = *max_element(mydeque.begin(), mydeque.end());


   }else {
      mydeque.pop_front(); //Pops element from the beginning
      mydeque.push_back(arr[i]);

      max = (max >= arr[i]) ? max:arr[i];

   }

  cout << max << " "; 
  i++;
  a--; 
  }
  cout << "\n";

}

int main(){
  
	int t;
	cin >> t;
	while(t>0) {
		int n,k;
    	cin >> n >> k;
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++)
      		cin >> arr[i];
    	printKMax(arr, n, k);
    	t--;
  	}
  	return 0;
}
