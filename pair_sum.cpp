#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
  vector<int> element;
  vector<vector<int>> ans;
  for (int i = 0; i < arr.size(); i++) {
    for (int j = i+1; j < arr.size(); j++) {
      if (arr[i] + arr[j] == s) {
        element.push_back(min(arr[i], arr[j]));
        element.push_back(max(arr[i], arr[j]));
        ans.push_back(element);

        
        element.erase(element.begin(), element.end());
      }
    }
  }
  sort(ans.begin(),ans.end());
  return ans;
}