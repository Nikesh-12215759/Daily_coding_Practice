//TC->O(n)
//SC->O(1)
//Problem statement:
//You are given an array of integers nums,
// there is a sliding window of size k which is moving from the very left of the array to the very right. 
//You can only see the k numbers in the window. Each time the sliding window moves right by one position.

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int i=0,j=0;
        list<int>l;
        vector<int>ans;
        while(j<nums.size())
        {
            while(l.back()<nums[j]&&l.size()>0)//to remove smaller elements which are coming before j
            {
                l.pop_back();
            }
            l.push_back(nums[j]);//adding element into list
            if(j-i+1<k)
            {
                j++; //increasing the number of elements till the size of window reach
            }
            else if(j-i+1==k) // calculation when window size hit
            {
                ans.push_back(l.front());
                if(l.front()==nums[i])l.pop_front();//removing the elements before the front element
                i++; // sliding both the window
                j++;
            }
        }
        return ans;
    }
};