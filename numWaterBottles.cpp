class Solution {
public:
    int numWaterBottles(int b, int e) {
        int ans=b;
        while(b>=e){
            ans++;
            b=b-e+1;
        }
        return ans;
    }
};
