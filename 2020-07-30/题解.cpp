class Solution {
public:
    int integerBreak(int n) {
        int num_3=0,num_2=0,num_1=0;
        if(n==2){
            return 1;
        }
        if(n==3){
            return 2;
        }
        num_3=n/3;
        n%=3;
        long int sum=0;
        if(n==2){
            sum=pow(3,num_3);
            sum*=2;
        }else if(n==1){
            if(num_3>=1){
                num_3-=1;
                sum=pow(3,num_3);
                sum*=4;
            }else{
                sum=pow(3,num_3);
            }
        }else{
            sum=pow(3,num_3);
        }
        return sum;
    }
};