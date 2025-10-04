class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        int totGas=0,totCost=0;
        for(int i=0;i<n;i++){
            totGas+=gas[i];
        }
        for(int i=0;i<n;i++){
            totCost+=cost[i];
        }
        if(totGas<totCost)return -1;
        int start=0;
        int currGas=0;
        for(int i=0;i<n;i++){
           currGas=currGas+(gas[i]-cost[i]);
           if(currGas<0){
            start=i+1;
            currGas=0;
           } 
        }
     return start;
    }
};
