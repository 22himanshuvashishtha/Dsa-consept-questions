class Solution {
    private:
    int solve(vector<int>& tops, vector<int>& bottoms,int val){
        int stepUp=0,stepDown=0;
        for(int i=0;i<tops.size();i++){
            if(tops[i]!=val && bottoms[i]!=val){
                return -1;
            }else if(tops[i]!=val){
              stepUp++;
            }else if(bottoms[i]!=val){
              stepDown++;
            }
        }
        return min(stepDown,stepUp);
    }
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int result=INT_MAX;
        for(int i=1;i<=6;i++){
           int step=solve(tops,bottoms,i);
           if(step!=-1){
            result=min(result,step);
           }
        }
        return result == INT_MAX ?-1:result;
    }
};
