class Solution {
public:
    int buttonWithLongestTime(vector<vector<int>>& events) {
        int n=events.size();
        int index=events[0][0];
        int maxmtime=events[0][1];
        for (int i=1;i<n;i++) {
            int duration=events[i][1]-events[i-1][1];
            if (duration>maxmtime ||
               (duration==maxmtime && events[i][0]<index)) {
                maxmtime=duration;
                index=events[i][0];
            }
        }
        return index;
    }
};


