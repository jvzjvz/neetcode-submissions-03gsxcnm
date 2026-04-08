class Solution {
    public boolean hasDuplicate(int[] nums) {
         for (int i = 0; i < nums.length; i++)
        {
            int target = nums[i];
            for (int j = 0; j < nums.length; j++)
            {
                if (target == nums[j] && i != j) return true;
            }
        }
        return false;
    }
}
