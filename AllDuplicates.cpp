#include <bits/stdc++.h> 

vector < int > findDuplicates(vector < int > & arr, int n) {
    vector<int> ans;
    ans.push_back(-1);
    bool add=true;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if((arr[j]==arr[i]) && (i!=j)){
                add=true;
                for(int k=0; k<ans.size();k++){
                    if(arr[j]==ans[k]){
                        add=false;
                    }
                }
                if(add){
                    ans.push_back(arr[j]);
                }
            }
        }
    }
    if(ans.size()!=1){
        ans.erase(ans.begin());
    }
    sort(ans.begin(),ans.end());
    return ans;

}