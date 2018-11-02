#include <iostream>
using namespace std;

bool is_possible(int (&A)[5], int i, int sum){
  cout<< "i="<<i<<" sum: "<<sum<<endl;
  
  if(sum == 0) return true;
  
  if(i == 0 && sum!=A[0]) return false;
  
  if(A[i] > sum) return is_possible(A, i-1, sum);
  
  return is_possible(A, i-1, sum) || is_possible(A, i-1, sum-A[i]);
  
}



void partition_equal_sum_subset(){

  int A[5] = {1,5,11,5};
  int sum = 0;
  for(auto a: A)
    sum+=a;
  cout<<"In partition_equal_sum_subset sum:"<<sum<<endl;
  
  if(sum & 01) {cout<<"Sum odd not possible"<<endl; return;}
  
  cout<<is_possible(A, (sizeof(A)/sizeof(A[0]))-1, sum/2);
  
}

/*
   0 1 2 3 4 5 6 ... total/2
1  1 1 0 0 0 0 0 .... 0
5  1 
11 1
5  1
*/

int min_subset_sum_delta(int (&A)[5], int i, int curr_sum, int sum){
  
  //TBD - Base Cases
  
  if(i==0){
    
    return abs(curr_sum+A[0] - (sum - curr_sum-A[0]));
  } 
  
  return min(min_subset_sum_delta(A, i-1, curr_sum + A[i], sum), //Including ith index
             min_subset_sum_delta(A, i-1, curr_sum, sum)); //Excluding
  
}

void partition_min_sum_diff_subset(){

  int A[5] = {1,6,11,5};
  int sum = 0;
  for(auto a: A)
    sum+=a;
  cout<<"In partition_equal_sum_subset sum:"<<sum<<endl;
  
  cout<<min_subset_sum_delta(A, (sizeof(A)/sizeof(A[0]))-1, 0, sum);
  
}

/***********/

bool is_possible(int& A[], int i, int sum){
  
  if(i<0 || sum <0) return false;
  
  if(A[i] == sum) return true;
  
  return is_possible(A, i-1, sum) || is_possible(A, i-1, sum-A[i]);
  
}
  
void partition_equal_sum_subset(){
  cout<<"In partition_equal_sum_subset"<<endl;
  int A[5] = {1,3,4,0,8};
  int sum = 0;
  for(auto a: A)
    sum+=a;
  
  cout<<is_possible(A, 4, sum/2);
  
}

/************/


int main() {
  cout<<"Hello!"<<endl;
  //partition_equal_sum_subset();
  
  partition_min_sum_diff_subset();

  return 0;
}
