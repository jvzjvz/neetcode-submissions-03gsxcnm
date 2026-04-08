class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> result(2);

        for (int i = 0; i < numbers.size(); i++) {
            int other = target - numbers[i];
            for (int j = 0; j < numbers.size(); j++) {
                if (i != j && numbers[j] == other) {
                    if (i < j) {
                        result[0] = i + 1;
                        result[1] = j + 1;
                    } else {
                        result[0] = j + 1;
                        result[1] = i + 1;
                    }
                    return result;
                }
            }
        }
        return result;
    }
};
