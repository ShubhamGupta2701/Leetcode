// 912. Sort an Array

class Solution {
public:

    void mergeSort(vector<int>& n,int l, int r){
        if(l>=r){
            return;
        }
        vector<int> merge;
        int mid = (l+r)/2;
        mergeSort(n,l,mid);
        mergeSort(n,mid+1,r);
        int left = l,right = mid+1;
        while(left<=mid&&right<=r){
            if(n[left]>n[right]){
                merge.push_back(n[right]);
                right++;
            }else{
                merge.push_back(n[left]);
                left++;
            }
        }
        while(left <= mid){
            merge.push_back(n[left]);
            left++;
        }
        while(right <= r){
            merge.push_back(n[right]);
            right++;
        }

        int j = 0;
        for(int i = l; i <= r; i++){
            n[i] = merge[j];
            j++;
        }

        return;
    }
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums,0,nums.size()-1);
        return nums;
    }
};  