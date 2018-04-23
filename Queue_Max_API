#include <iostream>
#include <queue>
using namespace std;


/*

  F                      B
Q:10 5 4 3 8

A:10 8

Enqueue: push()
1. > than back of A :erase from back until greater in A

2. < back of A enqueue(push back) in A

Dequeue:pop()

1. if  == A front  pop A front
2. If < A front - no op

max() : return A front

*/

class my_queue{

  queue<int> Q;
  deque<int> A;
  
public:
  
  void push(int x){
    Q.push(x);

    if(A.empty() || x < A.back()) A.push_back(x);
    else{
      while(!A.empty() && A.back() < x) A.pop_back();
      A.push_back(x);
    }

  }
  
  void pop(){
    int x = Q.front();
    Q.pop();
    if(x == A.front()) A.pop_front();
       
  }
  
  int max(){
    return A.front();
  }
  
};




int main() {
  
  my_queue q;
  q.push(10); 
  cout<<q.max()<<endl;

q.push(5); 
  cout<<q.max()<<endl;
  
q.push(4); 
  cout<<q.max()<<endl;  
  
  q.push(20); 
  cout<<q.max()<<endl; 
  return 0;
}
