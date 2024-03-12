//Water-Bottles
class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans = numBottles; 
        while(numBottles>=numExchange){
        int quotient= numBottles/numExchange; 
        int remainder = numBottles%numExchange ;
        ans +=quotient; 
        numBottles = quotient+ remainder; 
        }
        return ans;
    }
};

//Two Sum
class Solution {
    public int[] twoSum(int[] nums, int target) {
       int[] ans = new int[2];
        for(int i = 0;i<nums.length;i++){
            for(int j = i+1;j<nums.length;j++){
                if(nums[i] + nums[j] == target){
                ans[0] = i;
                ans[1] = j;
                break;
                }
                
            }
        }
        return ans;
      
    }
}