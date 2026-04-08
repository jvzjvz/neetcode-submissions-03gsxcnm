class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        size_t len = nums.size();
        vector<int> output(len, 1);
        
        for (int i = 0; i < len; i++) {
            int left = i - 1;
            int right = i + 1;

            while (left > -1) {
                output[i] *= nums[left];
                left--;
            }

            while (right < len) {
                output[i] *= nums[right];
                right++;
            }
        }

        return output;
    }
};
