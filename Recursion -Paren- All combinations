
#include <bits/stdc++.h>
using namespace std;

bool my_cmp (vector<string> i1, vector<string> i2){
  return (i1[1] > i2[1]);
}


void clean_string(string& str){
  int write_idx=0;
  for(int i=0; i<str.length(); i++){
    if(!ispunct(str[i])){
        str[write_idx++] = tolower(str[i]);
    }
  }
  str.erase(str.begin()+write_idx, str.end());
}
vector<vector<string>> wordCountEngine(const string& document) 
{
  //1. Split by token and add to a hash_table (tolower)
  //2. Table -> Return matrix (convert fr to string)
  //3. Sort the matrix by frequency
  
  unordered_map<string, int> M;
  stringstream ss(document);
  string tmp;
  
  while(getline(ss, tmp, ' ')){
    clean_string(tmp);
    
    if(tmp.size() && (M.find(tmp)==M.end())) M.emplace(tmp, 1);
    else M[tmp]++;
  }
  
  vector<vector<string>> R;
  for(auto it=M.begin(); it!=M.end();it++){
    vector<string> item; 
    item.emplace_back(it->first);
    item.emplace_back(to_string(it->second));
    R.push_back(item);
  }
  
  for(int i=0; i<R.size(); i++){
    cout<<R[i][0]<<" : "<<R[i][1]<<endl;
  }
  cout<<"---"<<endl;
  
  std::sort(R.begin(), R.end(), my_cmp);
  return R;
  
}
// (((((()
void generate_balanced_paren_rec(int left_balance, int rt_balanace, const string& str, vector<string>& R)
{
  
  if(left_balance < 0 || rt_balanace < 0){
    return;
  }
  
  if(rt_balanace == 0){
    R.push_back(str);
    return;
  }
  
  if(rt_balanace > left_balance) {
    //str+=')';
    generate_balanced_paren_rec(left_balance, rt_balanace-1, str+')', R);
  }  
  
  if(left_balance >0){
    //str+='(';
    generate_balanced_paren_rec(left_balance-1, rt_balanace, str+'(', R);    
  }
  

  
}

void generate_balanced_paren(int n){
  vector<string> R; string str;
  generate_balanced_paren_rec(n, n, str, R);
  
  for(int i=0;i<R.size();i++)
    cout<<R[i]<<endl;
  
}

void generate_all_combinations_rec(vector<int>& A, int i, vector<int>& tmp, int k, vector<vector<int>>& R){
  
  //Base Cases TBD
  if(i >=A.size())
    return;
  
  if(tmp.size() == k){
    R.push_back(tmp);
    return;
  }
  
  
  //with
  int size = tmp.size();
  tmp.push_back(A[i]);
  generate_all_combinations_rec(A, i+1, tmp, k, R);
  
  //without
  tmp.resize(size);
  generate_all_combinations_rec(A, i+1, tmp, k, R);
  
}

void generate_all_combinations(){
  
  int Arr[5] = {1,2,3,4,5};
  //            1,2,3  
  vector<int> A(Arr, Arr+5);
  vector<int> tmp;
  
  vector<vector<int>>R;
    
  generate_all_combinations_rec(A, 0, tmp, 3, R);
  
  for(int i=0;i<R.size(); i++){
    for(int j=0; j<R[0].size(); j++){
      cout<<R[i][j];
    }
    cout<<endl;
  }
}


int main() {
  //vector<vector<string>> R = wordCountEngine("Practice makes perfect, you'll get perfecT by practice. just practice! just just just!!");
  
  //for(int i=0; i<R.size(); i++){
    //cout<<R[i][0]<<" : "<<R[i][1]<<endl;
  //}
  
  //generate_balanced_paren(5);
  generate_all_combinations();
  
  return 0;
}
