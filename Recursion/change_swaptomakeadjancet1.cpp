class Solution {
public:
    bool checkOnesSegment(string s) {
        int n=s.length();
        if(n==1 && s[0]=='1') return true;
        for(int i=0;i<n-1;i++){
            if(s[i]=='1' && s[i+1]=='1'){
                return true;
            }
        }
        return false;
    }
};

// return s.find("01")==string::npos ( it also trusi to fidn the 01 tigeter stirng to throw faslse)