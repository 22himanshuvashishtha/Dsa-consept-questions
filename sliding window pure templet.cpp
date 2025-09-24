class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
      int i=0,j=0;
      int n=nums.size();
      int count=1e9,sum=0;
      while(j<n){
        sum+=nums[j];
        while(sum>=target){
            count=min(count,(j-i+1));
            sum-=nums[i];
            i++;
        }
        j++;
      }   
       return count==1e9 ? 0 : count;     
    }
};
