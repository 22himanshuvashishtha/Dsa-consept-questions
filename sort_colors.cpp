class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l=0,r=0,mid=0;
        int i=0;
        while(i<nums.size()){
            if(nums[i]==0){
               l++;
            }else if(nums[i]==1){
               mid++;
            }else{
               r++;
            }
            i++;
        }
        for(int j=0;j<l;j++){
            nums[j]=0;
        }
        for(int j=l;j<mid+l;j++){
            nums[j]=1;
        }
        for(int j=(mid+l);j<(l+mid+r);j++){
            nums[j]=2;
        }
    }
};
