#include <iostream>
#include <bits/stdc++.h>
using namespace std;


// As input, you'll get a bitmap where 1s represent land, and 0s represent water. Count the number of islands that exist in that bitmap, where an island is defined as some continuously connected chunk of 1s.

// 0 1 1 0
// 0 1 0 0
// 0 0 0 0 = 3
// 1 0 1 0


// 0 1 1 0
// 0 1 0 0
// 0 0 0 0 = 2
// 1 1 1 0

// n (int) x n (int)

// dfs recursively starting with a 1
// visited matrix
// use this matrix as  a adjacency matrix
// start of dfs on a potential candidate inc count 

// To execute C++, please define "int main()"


void printMatrix(vector<vector<int>>& M) {
  int N = M.size();
  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      cout << M[i][j];
    }
    cout << endl;
  }
  
  cout << "---------" << endl;
  
}

bool is_safe(vector<vector<int>>& M, int row, int col){
  if(row <0 || row >= M.size() || col <0 || col >= M.size()) return false;
  else return true;
}

void dfs(vector<vector<int>>& M, vector<vector<int>>& visited , int row, int col){
  
  visited[row][col] = 1; 
  
  //printMatrix(visited);
  cout<< "Running DFS for"<<row<<":"<<col<<endl;
  
  //evaluate potential candidate
  int next_row, next_col;
  next_row = row; next_col = col-1; //Left
  if(is_safe(M, next_row, next_col) && (M[next_row][next_col]==1) && (visited[next_row][next_col] == 0))
    dfs(M, visited, next_row, next_col);

  next_row = row; next_col = col+1; //Right
  if(is_safe(M, next_row, next_col) && (M[next_row][next_col]==1) && (visited[next_row][next_col] == 0))
    dfs(M, visited, next_row, next_col);
  
  next_row = row-1; next_col = col; //Up
  if(is_safe(M, next_row, next_col) && (M[next_row][next_col]==1) && (visited[next_row][next_col] == 0))
    dfs(M, visited, next_row, next_col);
  
  next_row = row+1; next_col = col; //Down  
  if(is_safe(M, next_row, next_col) && (M[next_row][next_col]==1) && (visited[next_row][next_col] == 0))
    dfs(M, visited, next_row, next_col);
  
}


int num_islands(vector<vector<int>>& M){
  
  int N = M.size();
  
  vector<vector<int>> visited(N, vector<int>(N,0));
                                       
  int count = 0;
  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      //printMatrix(visited);
      if((M[i][j]==1) && (visited[i][j] == 0)){
        //potential candidate
        cout<< "Staring DFS for"<<i<<":"<<j<<endl;
        dfs(M, visited, i, j); // (0, 0)
        cout << " done ... " << endl;
        count++;
      }
    }
  }
  
  return count; 
  
}


int main() {
  
  vector<vector<int>> M =
  {{0, 1, 1, 0},
   {0, 1, 1, 0},
   {1, 1, 1, 1},
   {1, 1, 0, 0}};
  
  
  cout<<num_islands(M)<<endl;

  return 0;
}
