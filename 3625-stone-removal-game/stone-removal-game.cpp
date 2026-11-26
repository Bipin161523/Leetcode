class Solution {
public:
    bool canAliceWin(int n) {
        int stone = 10;
        while(n >= stone){
            n -= stone;
            stone--;
            if(stone == 0)break;
        }
        return stone%2 == 1;
    }
};