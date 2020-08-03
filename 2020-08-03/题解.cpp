class Solution {
public:
    string addStrings(string num1, string num2) {
        int len1=(int)num1.size();
        int len2=(int)num2.size();
        string num0="";
        if(len1>len2){
            for(int i=len2;i<len1;i++){
                num0+='0';
            }
            num2=num0+num2;
        }
        if(len2>len1){
            for(int i=len1;i<len2;i++){
                num0+='0';
            }
            num1=num0+num1;
        }
        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());
//        cout<<num1<<endl;
//        cout<<num2<<endl;
        int len=(len1>len2?len1:len2);
        int temp=0;
        string str="";
        for(int i=0;i<len;i++){
            int num=(temp+(num1[i]-'0')+(num2[i]-'0'))%10;
            temp=(temp+(num1[i]-'0')+(num2[i]-'0'))/10;
            str+=to_string(num);
        }
        if(temp>0){
            str+=to_string(temp);
        }
        reverse(str.begin(),str.end());
        return str;
    }
};
