keyidea- with two Pointer approch phle dekhna hai ki wther flowers bloom ho rhe on day are<= mid means ek phul mila adn hence aise continue kro till cnt==k bouquetn ek bn jaye..and hence if bouqute>=m then ans=mid, mxm=mid-1; left=mid+1 and hence return ans; 

class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long n=bloomDay.size();
        if((long long)m *k>n) return -1;
        int maxm=*max_element(bloomDay.begin(),bloomDay.end());
        int minm=*min_element(bloomDay.begin(),bloomDay.end());
        int ans=-1;
        while(maxm>=minm){
            int mid=minm+(maxm-minm)/2;
            int cnt=0,bou=0;
            for(int i=0;i<n;i++){
                if(bloomDay[i]<=mid){
                    cnt++;
                    if(cnt==k) {
                        bou++;
                        cnt=0;
                    }
                }
                else {
                        cnt=0;
                    }
            }
            if(bou>=m){
                ans=mid;
                maxm=mid-1;
            }
            else{
                minm=mid+1;
            }
        }
        return ans;
    }
};


// // class Solution {
// // public:
// //     bool canMake(vector<int>& B, int m, int k, int day) {
// //         int cnt=0,ouquets=0;
// //         for(int b: B){
// //             cnt=(b<=day)?cnt+1:0;
// //             if(cnt==k) {
// //                 bouquets++;
// //                 cnt=0;
// //             }
// //         }
// //         return bouquets>=m;
// //     }

// //     int minDays(vector<int>& bloomDay, int m, int k) {
// //         long long need=(long long)m * k;
// //         if (need>bloomDay.size())return -1;
// //         int l=1,r=*max_element(bloomDay.begin(),bloomDay.end());
// //         while(l<r){
// //             int mid=(l+r)/2;
// //             if (canMake(bloomDay, m, k, mid))
// //                 r=mid;
// //             else
// //                 l=mid+1;
// //         }
// //         return l;
// //     }
// // };

7. Valid Palindrome 2.

class Solution {
public:
    bool isPal(string &s,int l,int r) {
        while(l<r){
            if (s[l]!=s[r]) return false;
            l++;
            r--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int l=0,r=s.size()-1;
        while(l<r) {
            if (s[l]==s[r]) {
                l++;
                r--;
            } else {
                return isPal(s,l+1,r) || isPal(s,l,r-1);
            }
        }
        return true;
    }
}; 