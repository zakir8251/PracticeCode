#include <bits/stdc++.h>
using namespace std;



int longest_palindrome_subsequence(string str, int left, int right){
  
  //Base Cases - TBD
  if(left == right) return 1;
  if(left > right) return 0;
  
  if(str[left] == str[right]){
    return 2+longest_palindrome_subsequence(str, left+1, right-1);
  }else{
    return max(longest_palindrome_subsequence(str, left+1, right), longest_palindrome_subsequence(str, left, right-1));
  }
}


void pair_sum_closest_to_x(){
  
  int A[10] = {10,20,30,40,50,60,70,80,90,100};
  //                             ^  ^         
  int x = 135;
  int left = 0, right = 9, global_min=INT_MAX;
  
  while(left < right){
    if(A[left]+A[right] == x){
      global_min = 0; 
      break;
    }
    else if(A[left]+A[right] < x){
      global_min = min(global_min, abs(A[left]+A[right] - x));
      left++;
    }
    else{
      global_min = min(global_min, abs(A[left]+A[right] - x));
      right--;
    }
  }
  cout<<global_min<<endl;
  
}

void inflection_point(){
  
  vector<int> A = {10,20,30,40,50,60,70,600,700,704};
  
  int left = 0, right=A.size()-1;
  int max_idx = right;
  int mid = left + (right-left)/2;
  while(left<=right){
    cout<<mid<<endl;
    if(mid == A.size()-1 || (A[mid]>A[mid+1] && A[mid]>A[mid-1])){
      max_idx = mid; break;
    }
    else if(A[mid]>A[mid-1]) left = mid+1;
    else right = mid-1;
    mid = left + (right-left)/2;
  }
  cout<<A[max_idx]<<endl;
  
}

int main() {
  
  string str = "abwwcd66dqcba";
  int n = str.length()-1;
  //cout<<longest_palindrome_subsequence(str, 0, n)<<endl;
  
  //vector<vector<int>>DP(n, vector<int>(n,0));
  
  //pair_sum_closest_to_x();
  inflection_point();
  string tel = "234";
  

  
  return 0;
}
