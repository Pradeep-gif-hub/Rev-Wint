class Solution{
private:
    vector<int>previoussmallest(vector<int>&arr){
        int n=arr.size();
        stack<int>st;
        vector<int>prevsml(n);
        for(int i=0;i<n;i++){
            while(!st.empty()&&arr[st.top()]>=arr[i]){
                st.pop();
            }
            prevsml[i]=st.empty()?-1:st.top();
            st.push(i);
        }
        return prevsml;
    }
    
    vector<int>nextsmaller(vector<int>&arr){
        int n=arr.size();
        stack<int>st;
        vector<int>nextsml(n);
        for(int i=n-1;i>=0;i--){
            while(!st.empty()&&arr[st.top()]>arr[i]){
                st.pop();
            }
            nextsml[i]=st.empty()?n:st.top();
            st.push(i);
        }
        return nextsml;
    }
    
    vector<int>previousgrt(vector<int>&arr){
        int n=arr.size();
        stack<int>st;
        vector<int>prevgrt(n);
        for(int i=0;i<n;i++){
            while(!st.empty()&&arr[st.top()]<=arr[i]){
                st.pop();
            }
            prevgrt[i]=st.empty()?-1:st.top();
            st.push(i);
        }
        return prevgrt;
    }
    
    vector<int>nextgrt(vector<int>&arr){
        int n=arr.size();
        stack<int>st;
        vector<int>nextgrt(n);
        for(int i=n-1;i>=0;i--){
            while(!st.empty()&&arr[st.top()]<arr[i]){
                st.pop();
            }
            nextgrt[i]=st.empty()?n:st.top();
            st.push(i);
        }
        return nextgrt;
    }

public:
    long long subarrayRanges(vector<int>&arr){
        int n=arr.size();
        vector<int>psl=previoussmallest(arr);
        vector<int>nsl=nextsmaller(arr);
        vector<int>pl=previousgrt(arr);
        vector<int>nl=nextgrt(arr);
        long long total=0;
        for(int i=0;i<n;i++){
            long long leftmin=i-psl[i];
            long long rightmin=nsl[i]-i;
            long long leftmax=i-pl[i];
            long long rightmax=nl[i]-i;
            long long maxcon=arr[i]*leftmax*rightmax;
            long long mincon=arr[i]*leftmin*rightmin;
            total+=(maxcon-mincon);
        }
        return total;
    }
};
