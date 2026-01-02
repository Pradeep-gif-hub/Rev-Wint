class Solution {
public:
    int minAllOneMultiple(int k) {
        if(k%2==0 || k%5==0){
            return -1;
        }
        int remainder=0;
        for(int i=1;i<=k;i++){
            remainder=(remainder*10+1)%k;
            if(remainder==0){
                return i;
            }
        }
        return -1;
    }
};

// class Solution {
// public:
//     int minAllOneMultiple(int k) {
//         if(k%2==0 || k%5==0){
//             return -1;
//         }
//         int rem=0;
//         for(int i=1;i<=k;i++ ){
//             rem=(rem*10+1)%k;
//             if(rem==0){
//                 return i;
//             }
//         }
//         return -1;
//     }
// };