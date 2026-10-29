class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        vector<pair<int,int>>arr;
        for(int i=0;i<boxTypes.size();i++){
            arr.push_back({boxTypes[i][1], boxTypes[i][0]});
        }
        sort(arr.begin(), arr.end(), [](pair<int, int> p1, pair<int, int> p2) {
            return p1.first > p2.first;
        });
        int result = 0;
        for(int i=0;i<boxTypes.size();i++){
            if(arr[i].second <= truckSize){
                result += arr[i].first * arr[i].second;
                truckSize -= arr[i].second;
            }else{
                result += arr[i].first * truckSize;
                break;
            }
        }
        return result;
    }
};