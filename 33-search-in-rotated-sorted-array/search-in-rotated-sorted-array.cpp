class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            // Target found
            if (nums[mid] == target)
                return mid;

            // Left half is sorted
            if (nums[mid] >= nums[start]) {
                if (target >= nums[start] && target < nums[mid]) {
                    end = mid - 1;      // go left
                } else {
                    start = mid + 1;    // go right
                }
            }
            // Right half is sorted
            else {
                if (target > nums[mid] && target <= nums[end]) {
                    start = mid + 1;    // go right
                } else {
                    end = mid - 1;      // go left
                }
            }
        }

        return -1; // not found
    }
};
