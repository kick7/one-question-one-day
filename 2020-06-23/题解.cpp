class Solution {
public:
    string addBinary(string a, string b) {
        string str="";
        if(a.size()<b.size()){
            a=string(b.size()-a.size(),'0')+a;
        }
        if(b.size()<a.size()){
            b=string(a.size()-b.size(),'0')+b;
        }
  
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        int len=a.size();
        int num=0;
        for(int i=0;i<len;i++){
            int Num=(a[i]-'0'+b[i]-'0'+num)%2;
            num=(a[i]-'0'+b[i]-'0'+num)/2;
            str+=to_string(Num);
        }
        if(num){
            str+='1';
        }
        reverse(str.begin(),str.end());
        return str;
    }
};