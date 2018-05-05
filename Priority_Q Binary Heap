#include <bits/stdc++.h>


using namespace std;

class mycomparison
{
  bool reverse;
public:
  mycomparison(const bool& revparam=false)
    {reverse=revparam;}
  bool operator() (const int& lhs, const int&rhs) const
  {
    if (reverse) return (lhs>rhs);
    else return (lhs<rhs);
  }
};

typedef bool (*cmp)(int, int);

bool cmparion1(int a, int b){
  if(a<b) return true;
  else return false;
}

template <class T>
  bool function(T a, T b){
  return a.length() >= b.bength();
}

class person{

public:
  string name;
  int age;
  person(string n, int a){
    name= n; age = a;
  }
  
  bool operator<(const person& p){
    if(p.age < age) return true;
    else false;
  }
  
  bool operator() (person p1, person p2){
    if(p1.name.length() < p2.name.length())
      return true;
    else return false;
  }
};

void print_person(vector<person>& P){
  cout<<endl;
  for(auto it =P.begin(); it!=P.end();it++){
    cout<<it->name<<": "<<it->age<<endl;
  }
  
  
}
typedef bool (*new_cmp) (person, person);
  
class word{
  string str;
  
  public:
  string get_str(){return str;}
  void set_str(string _str){str = _str;}
  bool operator() (word w1, word w2){
    return (w1.str.length() > w2.str.length());
  }
  
  bool operator>(word w1){
    return (str.length() > w1.str.length());
  }
};

void k_longest_words_in_sentence(const string& str, int k){
  
  priority_queue<word, vector<word>, word> Heap;
  stringstream ss(str);
  string tmp;
  cout<<str<<endl;
  while(getline(ss, tmp, ' ')){
    cout<<"Getting line "<<tmp<<endl;
    if(k>0){
      word w; w.set_str(tmp);
      Heap.push(w);
      cout<<"Pushing to heap:- "<<tmp<<endl;
      k--;
      continue;
    }
    
    word top_word = Heap.top();
    if(tmp.length() > top_word.get_str().length()){
      Heap.pop();
      word w; w.set_str(tmp);
      cout<<"Pushing to heap:  - "<<tmp<<endl;
      Heap.push(w);      
    }
  }
  
  while(!Heap.empty()){
    word top_word = Heap.top();
    cout<<top_word.get_str()<<endl;
    Heap.pop();
  }
  
  
  
}

int main() {
  

  int myints[]= {10,60,50,20};

  std::priority_queue<int> first;
  std::priority_queue<int> second;
  std::priority_queue<int, std::vector<int>, greater<int>>
                            third (myints,myints+4);
  // using mycomparison:
  typedef std::priority_queue<int,std::vector<int>,cmp> mypq_type;

  mypq_type fourth(myints,myints+4, cmparion1);                       // less-than comparison
  //mypq_type fifth (mycomparison(true));   // greater-than comparison
  
  //fourth.emplace(100);
  //fourth.emplace(200); 
  
  cout<<fourth.top()<<endl;
  
  vector<int> A = {10,20,30,40};
  vector<int> B(A.begin(), A.begin()+2);
  for(auto it = B.begin(); it!=B.end(); it++)
    cout<<" "<<*it;
  
  
  vector<person> P;
  P.emplace_back("Zakirabcdefgh", 35);
  P.emplace_back("Nafisa", 32);
  print_person(P);
  sort(P.begin(), P.end(), P[0]);
  print_person(P);
  
  k_longest_words_in_sentence("Hello there this is Zakir am having a great day so far!", 5);
  
  return 0;
  
}
