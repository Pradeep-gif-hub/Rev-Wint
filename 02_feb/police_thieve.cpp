class Solution {
public:
    int catchThieves(vector<char> &arr, int k) {
        vector<int> police, thief;
        int n = arr.size();

        for (int i = 0; i < n; i++) {
            if (arr[i] == 'P') police.push_back(i);
            else if (arr[i] == 'T') thief.push_back(i);
        }

        int i = 0, j = 0, count = 0;
        while (i < police.size() && j < thief.size()) {
            if (abs(police[i] - thief[j]) <= k) {
                count++;
                i++;
                j++;
            } else if (police[i] < thief[j]) {
                i++;
            } else {
                j++;
            }
        }

        return count;
    }
};
