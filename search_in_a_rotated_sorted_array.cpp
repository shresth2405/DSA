class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s = 0;
        int e = nums.size()-1;
        int mid = s + (e - s) / 2;
        int sol = -1;
        while (s < e) {
            mid = s + (e - s) / 2;
            if (nums[mid] > nums[e]) {
                s = mid+1;
            } else {
                e = mid;
            }
        }
        
        int pivot=s;
        if(target>=nums[pivot] && target<=nums[nums.size()-1]){
            s=pivot;
            e=nums.size();
        }
        else{
            s=0;
            e=pivot-1;
        }
        
        
        while (s <= e) {
            mid = s + (e - s) / 2;
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] > target) {
                e = mid-1;
            } else {
                s = mid+1;
            }
            
        }
        return sol;
    }


    };

