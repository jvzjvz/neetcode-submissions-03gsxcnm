class Solution {
public:
    int maxArea(vector<int>& heights) {
        int len = heights.size();
        int left = 0;
        int right = len - 1;

        int max_water = 0;

        while (left < right) {
            int width = right - left;

            int height = 0;
            if (heights[left] <= heights[right]) {
                height = heights[left];
                left++;
            } else {
                height = heights[right];
                right--;
            }

            int water = width * height;
            max_water = std::max(max_water, water);
        }

        return max_water;
    }
};
