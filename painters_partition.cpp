bool ispossible(vector<int> arr, int n, int k, int mid){
    int paintercount=1;
    int boardssum=0;
    for(int i=0; i<n; i++){
        if(arr[i]>mid){
            return false;
        }
        if(boardssum+arr[i]>mid){
            paintercount++;
            if(paintercount>k){
                return false;
            }
            boardssum=arr[i];
        }
        else{
            boardssum+=arr[i];
        }

    }
    return true;
}



int findLargestMinDistance(vector<int> &boards, int k)
{
    int s=0;
    int e=0;
    int ans=-1;
    for(int i=0; i<boards.size(); i++){
        e+=boards[i];
    }
    int mid=s+(e-s)/2;
    while(s<=e){
        if(ispossible(boards,boards.size(),k,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;    
}