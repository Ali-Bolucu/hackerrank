int flippingMatrix(vector<vector<int>> matrix) {

int sum=0, len, sub,mx;
len = matrix.size();
sub = len/2;

for(int i =0; i<sub ; i++){
    for(int ii=0; ii<sub ; ii++){
        mx=0;
       
        mx = max(mx, matrix[i][ii]);
        mx = max(mx, matrix[i][len-ii-1]);
        mx = max(mx, matrix[len-i-1][ii]);
        mx = max(mx, matrix[len-i-1][len-ii-1]);
       
       sum+=mx; 
      }
    
  }
return sum;
}
-----------------------------------**Colunm reverser**---
vector<vector<int>> reverscolumn(vector<vector<int>> arr, int i){

  int first = 0, last = arr.size();

    while ((first!=last)&&(first!=--last)) {
        std::swap(arr[first][i],arr[last][i]);
        ++first;
    }
}
