#include <iostream>
#include <vector>
using namespace std;

// 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15
//     ^ ^              

int square_root(int n){
  
  int low = 1, high = n;
  int mid = low + (high-low)/2; 
  
  while(low <= high){
    
    if(mid*mid == n) return mid;
    else if(mid*mid > n) high = mid-1;
    else low = mid+1;
    
    mid = low + (high-low)/2;
    
  }
  
  return high;
}

int find_min_rotated_sorted_array(){
  int A1[] = {11,22,33,44,55};
  vector<int> A(A1+0, A1+sizeof(A1)/sizeof(A1[0]));

  int low = 0, high=A.size()-1;
  int mid = low + (high-low)/2;
  
  while(low<=high){
    if(mid ==0 || A[mid]<A[mid-1]) return A[mid];
    else if(A[mid] > A[0]) low = mid+1;
    else high = mid-1;
    mid = low + (high-low)/2;
  }
  return A[0];
}


int find_max_inc_dec_array(){
  int A1[] = {11,22,33,44,55,777,0};
  vector<int> A(A1+0, A1+sizeof(A1)/sizeof(A1[0]));

  int low = 0, high=A.size()-1;
  int mid = low + (high-low)/2;
  
  while(low<=high){
    if(mid ==A.size()-1 || (A[mid]>A[mid-1] && (A[mid]>A[mid+1]))) return A[mid];
    else if(A[mid] > A[mid-1]) low = mid+1;
    else high = mid-1;
    mid = low + (high-low)/2;
  }
  return A[A.size()-1];
}


/*
 i   : 0 1 2 3 4  5 6 7
 num : 3 5 7 9 11 ..... 
 num[i] = 2*(i+1) + 1

*/
vector<int>all_primes(int n){
  
  vector<int> R;
  
  bool C[n/2] = {true};
  
  for(int i =0; i<n/2; i++)
    C[i] = true;
    
  
  for(int i=0; i<n/2-1; i++){
    
    int num = 2*(i+1) + 1;
    cout<<endl;
    cout<<"Considering num="<<num<<" Ruling out mul:-";
    
    if(C[i]) R.push_back(num);
    else continue;

    int idx = 2;
    while(num*idx < n){
      if( num*idx & 1){
        C[(num*idx-1)/2 -1] = false;
        cout<<num*idx<<" ";
      }
      idx++;
    }
    
  }
  cout<<endl;
  for(auto prime:R)
    cout<<prime<<" ";
  
  return R;
}



int main() {
  cout<<square_root(624);
  all_primes(100);
  cout<<find_max_inc_dec_array()<<endl;
  
  return 0;
}
