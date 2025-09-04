#include <bits/stdc++.h>
using namespace std;

vector<int> NGR(vector<int> nums){
  int n = nums.size();
  stack<int> st;
  vector<int> ans(n,-1);

  for(int i=0;i<n;i++){ 
    while(!st.empty() && nums[i] > nums[st.top()]){
      ans[st.top()] = nums[i];
      st.pop();
    }
    st.push(i);
  }

  return ans;
}

vector<int> NSR(vector<int> nums){
  int n = nums.size();
  stack<int> st;
  vector<int> ans(n,-1);

  for(int i=0;i<n;i++){ 
    while(!st.empty() && nums[i] < nums[st.top()]){
      ans[st.top()] = nums[i];
      st.pop();
    }
    st.push(i);
  }

  return ans;
}

vector<int> NGL(vector<int> nums){
  int n = nums.size();
  stack<int> st;
  vector<int> ans(n,-1);

  for(int i=n-1;i>-1;i--){ // 2 1 3 6 8 1
    while(!st.empty() && nums[i] > nums[st.top()]){
      ans[st.top()] = nums[i];
      st.pop();
    }
    st.push(i);
  }

  return ans;
}

vector<int> NSL(vector<int> nums){
  int n = nums.size();
  stack<int> st;
  vector<int> ans(n,-1);

  for(int i=n-1;i>-1;i--){ 
    while(!st.empty() && nums[i] < nums[st.top()]){
      ans[st.top()] = nums[i];
      st.pop();
    }
    st.push(i);
  }

  return ans;
}

void printVector(vector<int> print){
  for(int x : print){
    cout << x << " ";
  }
  cout << endl;
}


int main(){
  vector<int> nums = {2, 7, 3, 5, 4, 6, 8};
  printVector(NGR(nums));
  printVector(NSR(nums));
  printVector(NGL(nums));
  printVector(NSL(nums));
}
