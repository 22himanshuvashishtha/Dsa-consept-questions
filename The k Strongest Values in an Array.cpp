class Solution {
public:
    vector<int> getStrongest(vector<int>& arr, int k) {
        sort(arr.begin(), arr.end());  
        int n = arr.size();
        int median = arr[(n - 1) / 2];
        
        sort(arr.begin(), arr.end(), [&](int a, int b) {
            int diff_a = abs(a - median);
            int diff_b = abs(b - median);
            
            if (diff_a != diff_b) {
                return diff_a > diff_b; 
            }
            return a > b; 
        });
        vector<int> strongest_elements;
        for (int i = 0; i < k; ++i) {
            strongest_elements.push_back(arr[i]);
        }    
        return strongest_elements;
    }
};
