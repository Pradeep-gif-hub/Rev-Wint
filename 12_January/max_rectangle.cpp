class Solution{
public:
    int largestRecArea(vector<int>&heights){
        int n=heights.size();
        int maxarea=0;
        stack<int>st;
        for(int i=0;i<=n;i++){
            int h=(i==n)?0:heights[i];
            while(!st.empty() && heights[st.top()]>h){
                int height=heights[st.top()];
                st.pop();
                int width=st.empty()?i:i-st.top()-1;
                maxarea=max(maxarea,height*width);
            }
            st.push(i);
        }
        return maxarea;
    }
    int maxArea(vector<vector<int>>&mat){
        if(mat.empty()) return 0;
        int n=mat.size();
        int m=mat[0].size();
        vector<int>heights(m,0);
        int maxarea=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==1) heights[j]++;
                else heights[j]=0;
            }
            maxarea=max(maxarea,largestRecArea(heights));
        }
        return maxarea;
    }
};
