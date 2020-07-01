class Solution {
public:
    int findLength(vector<int>& A, vector<int>& B) {
        int count=0;
        int ans=0;
        int len_a=A.size();
        int len_b=B.size();
        for(int i=0;i<len_a;i++){
            ans=max(ans,count);
            count=0;
            for(int j=0;j<len_b;j++){
                if(i+j<len_a){
                    if(A[i+j]==B[j]){
                        count++;
                    }else{
                        ans=max(ans,count);
                        count=0;
                    }
                }else{
                    ans=max(ans,count);
                    break;
                }
            }
        }
        for(int i=0;i<len_b;i++){
            ans=max(ans,count);            
            count=0;
            for(int j=0;j<len_a;j++){
                if(i+j<len_b){
                    if(B[i+j]==A[j]){
                        count++;
                    }else{
                        ans=max(ans,count);
                        count=0;
                    }
                }else{
                    ans=max(ans,count);
                    break;
                }
            }
        }
        return ans;
    }
};