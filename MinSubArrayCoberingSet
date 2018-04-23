#include <iostream>
#include <vector>
#include <unordered_set>
#include <bits/stdc++.h>
#include <string>

using namespace std;
/*
x:1 ->0
y:1 ->-1
z:1 -> 0
yabcxyzyzyx
      ^e 
 ^s
*/


string getShortestUniqueSubstring( const vector<char>& arr, const string &str ) 
{
  // your code goes here
  int Map[128] = {0};
  unordered_set<char> Set(arr.begin(), arr.end());
  string ret;
  for(auto c: arr)
    Map[c]++;

  
  int start = 0, end=0, global_min=INT_MAX, count = arr.size();
  int min_start=0,min_end=0;
  
  cout<<count<<endl;
  
  while(end < str.length()){
    cout<<"end at:"<<str[end]<<endl;
    if(Set.count(str[end])){ //Charater of interest
      if(Map[str[end]] > 0) count--; //Not previously covered include it now
      Map[str[end]]--;
    }

    
    while(count==0){
      cout<<"start at:"<<str[start]<<endl;
      //chk_updt_global_min(global_min, min_start, min_end, start, end);
      if(end -start < global_min){
        global_min = end -start;
        min_start = start; min_end = end;
      }
      //Try to shrink the window
      if(Set.count(str[start])){ //Charater of interest
        if(Map[str[start]] >= 0) count++; //Was previously covered loosing it now
        Map[str[start]]++;
      }      
      start++;
    }//inner while
    end++;
  }//outer while
  
  return (global_min == INT_MAX) ? ret : str.substr(min_start, min_end-min_start+1);
}

int minSubArrayLen()
{
  vector<int> nums = {2,3,1,2,4,3};
                    //0 1 2 3 4 5
  int s = 7;

        int start = 0, end =0, curr_sum=nums[0], global_min=INT_MAX;
        while(end <nums.size()){
            if(curr_sum == s){
                global_min = min(global_min, (end-start+1));
                cout<<"Equal start:"<<start<<" end:"<<end<<endl;
                end++;
                curr_sum+=nums[end];
            }
            else if(curr_sum<s){
                cout<<"Lesser start:"<<start<<" end:"<<end<<"curr_sum:"<<curr_sum<<endl;
                end++;
                curr_sum+=nums[end];
            }
            else{
                if(end>start){
                    cout<<"Greater start:"<<start<<" end:"<<end<<endl;
                    curr_sum-=nums[start];                                
                    start++;
                }
                else if(end==start && end <nums.size() -1){
                    cout<<"start:"<<start<<" end:"<<end<<endl;
                    start++;
                    end++;
                    curr_sum = nums[end];
                }
                else break;                    
            }
        } //while
        return (global_min==INT_MAX)?0: global_min;  
  
}
int main() {
  string str = "xaxcacssc";
  vector<char> arr = {'x','c','s'};
  
  //cout<<getShortestUniqueSubstring(arr, str)<<endl;
   
  
  cout<<minSubArrayLen()<<endl;
  
  return 0;
}
