class Solution {
public:
    string reverseVowels(string s)
    {
        stack<char> vowels;
        for (char& c : s)
        {
            if( isVowel(c))
            {
                vowels.push(c);
            }
        }
        for (char& c : s)
        {
            if (isVowel(c))
            {
                c = vowels.top();
                vowels.pop();
            }
        }

        return s;
    }
    bool isVowel(char& c)
    {
        const char lowerC = std::tolower(c);
        if (lowerC == 'a' ||
            lowerC == 'e' ||
            lowerC == 'i' ||
            lowerC == 'o' ||
            lowerC == 'u')
            return true;
        else
            return false;
    }
}; 

// class Solution {
// public:
//     string reverseVowels(string s) {
//         int n=s.length();
//         vector<char> v;
//         for(char c:s){
//             char x=tolower(c);
//             if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'){
//                 v.push_back(c);
//             }
//         }
//         int indx=v.size()-1;
//         for(int i=0;i<n;i++){
//             char x=tolower(s[i]);
//             if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'){
//                 s[i]=v[indx--];
//             }
//         }
//         return s;
//     }
// };
