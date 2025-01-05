bool isPossible(vector<int>& arr, int n, int m, int mid){
    int pagesum=0;
    int studentcount=1;
    for(int i=0; i<n; i++){
        if(pagesum+arr[i]<=mid){
            pagesum+=arr[i];
        }
        else {
            studentcount++;
            if(studentcount>m || arr[i]>mid){
                return false;
            }
            else{
                pagesum=0;
                pagesum+=arr[i];
            }
        }
    }
    return true;
}


int findPages(vector<int>& arr, int n, int m) { 
    int s=0;
    int e=0;
    for(int i=0;i<n;i++){
        e+=arr[i];
    }
    int ans=-1;
    int mid=s+(e-s)/2;
    if (m > n) {
        return -1; 
    }

    if (n == m) {
        return *max_element(arr.begin(), arr.end());
    }
    while(s<=e ){
        bool IsPossible=isPossible(arr, n, m, mid);
        if(IsPossible){
            e=mid-1;
            ans=mid;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;

    }
    
    return ans;
    
    
    
}
