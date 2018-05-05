#include <iostream>
#include <stack>
using namespace std;

void insert_in_sorted_stack(stack<int>& S, int top){
  
  //Base case TBD
  if(S.empty()) {S.push(top); return;}
  
  if(top<S.top()) S.push(top);
  else{
    int curr_top = S.top();
    S.pop();
    insert_in_sorted_stack(S, top);
    S.push(curr_top);    
  }
}

void sort_stack(stack<int>& S){
  
  if(S.size() < 2) return;
  
  int top = S.top();
  S.pop();
  sort_stack(S);
  
  insert_in_sorted_stack(S, top);
  
  return;
}

void print_stack(stack<int> S){
  if(S.empty()) return;
  cout<<S.top()<<endl;
  int top = S.top();
  S.pop();
  print_stack(S);
  S.push(top);
  
}


int main() {
  
  stack<int> S;
  
  S.push(10);
  S.push(12);
  S.push(1);
  S.push(14);
  S.push(4);
  S.push(44);  
  
  print_stack(S);
  cout<<endl;
  sort_stack(S);
  print_stack(S);
  
  return 0;
}
