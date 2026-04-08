class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int longest_sequence_len = 0;
        int current_sequence_len = 0;

        std::unordered_set<int> lookup(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++) {
            // only starting at nums that are the starts of sequences
            if (lookup.find(nums[i] - 1) != lookup.end())
                continue;
            
            current_sequence_len = 1;

            while (lookup.find(nums[i] + current_sequence_len) != lookup.end()) {
            // while (lookup.contains(desired_num)) {
                current_sequence_len++;
            }

            longest_sequence_len = max(longest_sequence_len, current_sequence_len);
        }

        return longest_sequence_len;
    }
};
