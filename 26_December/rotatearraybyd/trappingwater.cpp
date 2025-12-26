//keyidea-Water trapped at any position is determined by the shorter boundary
// around it. Move the pointer on the smaller height side, keep its maximum so far, and add the difference between that maximum and the current height. Accumulating this gives the total trapped water. 

class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int right=n-1;
        int left=0;
        int rightmax=0;
        int leftmax=0;
        int water=0;
        while(left<right){
            if(height[left]<height[right]){
                leftmax=max(leftmax,height[left]);
                water+=leftmax-height[left];
                left++;
            }
            else{
                rightmax=max(rightmax,height[right]);
                water+=rightmax-height[right];
                right--;
            }
           
        }
         return water;
    }
};
