class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // nums[i] = -(nums[j] + nums[k])

        // key = nums[i]
        // value = i
        // loop over j and k, if -(nums[j] + nums[k]) == key
        //  then create triplet


        vector<vector<int>> result;
        unordered_map<int, int> lookup;

        size_t len = nums.size();
        for (int i = 0; i < len; i++) {
            lookup[nums[i]] = i;
        }

        for (int j = 0; j < len; j++) {
            for (int k = 0; k < len; k++) {
                if (j == k) continue;

                int value = -(nums[j] + nums[k]);
                if (lookup.contains(value)) {
                    int i = lookup.at(value);
                    if (i == j || i == k) continue;

                    vector<int> triplet = {nums[i], nums[j], nums[k]};
                    std::sort(triplet.begin(), triplet.end());
                    result.push_back(triplet);
                }
            }
        }

        std::sort(result.begin(), result.end());
        auto it = std::unique(result.begin(), result.end());
        result.erase(it, result.end());

        return result;
    }
};
