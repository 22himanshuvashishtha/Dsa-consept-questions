class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<double>p;
        for(int i=0;i<nums1.size();i++){
            p.push_back(nums1[i]);
        }for(int i=0;i<nums2.size();i++){
            p.push_back(nums2[i]);
        }
        sort(p.begin(),p.end());
        int n=p.size();
        if (n % 2 != 0)
        return (double)p[n / 2];
 
    return (double)(p[(n - 1) / 2] + p[n / 2]) / 2.0;
    }
};
