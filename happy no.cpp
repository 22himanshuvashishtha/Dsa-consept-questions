class Solution {
public:
    bool isHappy(int n) {
        set<int>st;
        int temp=n;
        while(temp!=1){
            int no=temp;
            int newno=0;
           while(no>0){
            int sum=no%10;
            newno+=sum*sum;
            no=no/10;
           }
           if(st.find(newno)!=st.end()){
            return false;
           }else{
            st.insert(newno);
            temp = newno;
           }
        }
        return true;
    }
};
