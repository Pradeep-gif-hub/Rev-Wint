class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            int cnt=0;
            vector<int>ans;
            for(int j=2;j*j<=nums[i];j++){
                if(cnt>2) break;
                if(nums[i]%j==0){
                    if(j*j==nums[i]){
                        cnt+=1;
                        ans.push_back(j);
                    }
                    else{
                        cnt+=2;
                        ans.push_back(j);
                        ans.push_back(nums[i]/j);
                    }
                }
            }
            if(cnt==2){
                for(int temp:ans){
                    sum+=temp;
                }
                sum+=1;
                sum+=nums[i];
            }
        }
        return sum;
    }
};

//class Solution{
// public:
//     int sumFourDivisors(vector<int>&nums){
//         int sum=0;
//         for(int x:nums){
//             int cnt=0,divSum=0;
//             for(int i=1;i*i<=x;i++){
//                 if(x%i==0){
//                     if(i*i==x){
//                         cnt+=1;
//                         divSum+=i;
//                     }else{
//                         cnt+=2;
//                         divSum+=i+(x/i);
//                     }
//                 }
//                 if(cnt>4)break;
//             }
//             if(cnt==4)sum+=divSum;
//         }
//         return sum;
//     }
// }