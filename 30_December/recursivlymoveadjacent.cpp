class Solution {
public:
    string removeUtil(string s) {
        string prev="";
        while(prev!=s) {
            prev=s;
            string temp="";
            int i=0;
            while(i<s.size()) {
                int j=i;
                while(j<s.size() && s[j]==s[i]) j++;
                if (j-i==1) {
                    temp.push_back(s[i]);
                }
                i=j;
            }

            s=temp;
        }
        return s;
    }
};

OR

// class Solution {
//   public:
//     string removeUtil(string &s) {
//         string res = "";

//         for(char c : s){
//             if(!res.empty() && res.back() == c){
//                 res.pop_back();   // remove duplicate
//             }
//             else{
//                 res.push_back(c);
//             }
//         }

//         return res;
//     }
// };

