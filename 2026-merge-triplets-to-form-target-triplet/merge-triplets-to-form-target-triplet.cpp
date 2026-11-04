class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {
        int arr[3] = {-1, -1, -1};
        for (auto trip : triplets) {
            if ((trip[0] <= target[0]) && (trip[1] <= target[1]) &&
                (trip[2] <= target[2])) {
                    arr[0] = max(arr[0],trip[0]);
                    arr[1] = max(arr[1],trip[1]);
                    arr[2] = max(arr[2],trip[2]);
            }
        }
        return (arr[0] == target[0])&&(arr[1] == target[1])&&(arr[2] == target[2]);
    }
};