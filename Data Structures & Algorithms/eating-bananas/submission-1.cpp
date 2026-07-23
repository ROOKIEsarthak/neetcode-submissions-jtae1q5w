class Solution {
   public:
    int speedData(vector<int>& piles, int speed, int totalTime) {
        int timeTotal = 0;
        for (int i = 0; i < piles.size(); i++) {
            if (piles[i] % speed == 0) {
                timeTotal += (piles[i] / speed);
            } else {
                timeTotal += ((piles[i] / speed) + 1);
            }
        }
        return timeTotal;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int minSpeed = 1, maxSpeed = 0, midSpeed = 0 , totalTime = 0;
        vector<int>arr;
        for (auto i : piles) {
            maxSpeed = max(i, maxSpeed);
        }
        totalTime = speedData(piles, maxSpeed, totalTime);
        while(minSpeed <= maxSpeed){
            midSpeed = (minSpeed+maxSpeed)/2;
            arr.push_back(midSpeed);
            totalTime = speedData(piles, midSpeed, totalTime);
            if(totalTime > h){
                minSpeed = midSpeed+1; 
            }else if(totalTime <=h){
                maxSpeed = midSpeed-1;
            }
        }
        return minSpeed;
    }
};