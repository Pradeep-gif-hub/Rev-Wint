class Solution {
public:
    vector<int> sortIt(vector<int>& arr) {
        sort(arr.begin(), arr.end());

        vector<int> even, odd;
        int n=arr.size();

        for(int i=0;i<n;i++){
            if(arr[i]%2!= 0)
                odd.push_back(arr[i]);
            else
                even.push_back(arr[i]);
        }
        reverse(odd.begin(),odd.end());
        vector<int> res;
        for(int x : odd)  res.push_back(x);
        for(int x : even) res.push_back(x);

        return res;   
    }
};
