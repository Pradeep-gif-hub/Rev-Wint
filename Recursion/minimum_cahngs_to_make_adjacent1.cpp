// class Solution {
// public:
//     int minOperations(string s) {
//         int n=s.length();
//         int op1=0,op2=0;
//         for(int i=0;i<n;i++){
//             if(s[i]!=(i%2?'1':'0'))
//                 op1++;
//             if(s[i]!=(i%2?'0':'1'))
//                 op2++;
//         }
//         return min(op1,op2);
//     }
// };


class Solution {
public:
    int minOperations(string s) {
        int count1=0,count2=0;
        int n=s.size();
        char prev='1';
        for(int i=0;i<n;i++){
            if(s[i]==prev){
                count1++;
                prev=(s[i]=='1'?'0':'1');
            }
            else{
                prev=s[i];
            }
        }
        char prev1='0';
        for(int i=0;i<n;i++){
            if(s[i]==prev1){
                count2++;
                prev1=(s[i]=='1'?'0':'1');
            }
            else{
                prev1=s[i];
            }
        }
        return min(count1,count2);
    }
};