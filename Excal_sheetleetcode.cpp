class Solution {
public:
    int titleToNumber(string columnTitle) {
     int ans=0;
     int n=columnTitle.length();
        for(int i=0;i<columnTitle.length();i++){
        ans+=((int(columnTitle[i])-64)*pow(26,n-(i+1)));
        }
     return ans;   
    }
};
