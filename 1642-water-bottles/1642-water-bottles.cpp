class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        long long bottlesDrank = numBottles;
        long long empties = numBottles;

        while (empties >= numExchange) {
            long long newBottles = empties / numExchange; 
            bottlesDrank += newBottles;
            empties = newBottles + (empties % numExchange);
        }

        return (int)bottlesDrank;
    }
};