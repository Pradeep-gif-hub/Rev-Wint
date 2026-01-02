// a) using the Undordered_map O(n)
// class Solution {
// public:
//     int minAllOneMultiple(int k) {
//         if(k%2==0 || k%5==0){
//             return -1;
//         }
//         int remainder=0;
//         for(int i=1;i<=k;i++){
//             remainder=(remainder*10+1)%k;
//             if(remainder==0){
//                 return i;
//             }
//         }
//         return -1;
//     }
// };

// b).USING PEGIONHOLE APPROACH- O(1) If more objects are distributed among fewer containers, at least one container will contain more than one object - 13 students, 12 months  At least two students share a birthday month.

// int repeatedNTimes(vector<int>& nums) {
//         for(int i=0;i<nums.size()-2;i++){
//             if(nums[i]==nums[i+1] || nums[i]==nums[i+2]){
//                 return nums[i];
//             }
//         }
//         return nums[nums.size()-1];
//     }
// };

