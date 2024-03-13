//Time complexity O(n^2)
class Solution {
    public int maxProduct(int[] nums) {
        int max = 0;
        for(int i =0; i<nums.length; i++){
            for(int j = i+1;j<nums.length;j++){
             int result = (nums[i] - 1) * (nums[j] -1);
             if (result>max)
             max = result;
            }
        }
        return max;  
    }
}


//Time Complexity O(n)
class Solution{
    public int maxProduct(int[] nums){
        int max = -1,SecondMax = -1;
        for(int i = 0;i<nums.length;i++){
            if(nums[i]>max){
                SecondMax = max;
                max = nums[i];
            } 
            else if(nums[i]>SecondMax)
                SecondMax = nums[i];
        }
        int ans = (max-1) * (SecondMax-1);
        return ans;
    }
}