class Solution {
public:
    int climbStairs(int n) {
        if(n==1){
            return 1;
        }
        if(n==2){
            return 2;
        }
        int num1=1;
        int num2=2;
        int num; 
        for(int i=3;i<=n;i++){
            num=num1+num2; 
            num1=num2; 
            num2=num;
        }
        return num;
        //斐波那契数列

    }
};