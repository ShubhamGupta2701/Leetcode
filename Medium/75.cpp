// 75.  Sort Colors


class Solution {
public:
    void sortColors(vector<int>& n) {
        int low=0,mid=0,high=n.size()-1;
        while(mid<=high)
        {
            if(n[mid]==0)
            {
                swap(n[low],n[mid]);
                mid++;
                low++;
            }

            else if(n[mid]==1)
            mid++;

            else
            {
                swap(n[mid],n[high]);
                high--;
            }
        }
    }
};