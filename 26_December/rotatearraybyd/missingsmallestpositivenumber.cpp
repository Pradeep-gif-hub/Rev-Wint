// Baiacally we make the mapping of number with its frequency using map
// Then we iterate through the map and check if the current number is equal to expected number

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        map<int,int> mp;
        for(int x : nums){
            if(x > 0) mp[x]++;
        }

        int expect = 1;
        for(auto it : mp){
            if(it.first == expect)
                expect++;
            else if(it.first > expect)
                return expect;
        }
        return expect;
    }
};
