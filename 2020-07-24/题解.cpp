class Solution {
public:
    bool divisorGame(int N) {
        if(N==1){
            return false;
        }
        return N%2==0?true:false;
    }
};