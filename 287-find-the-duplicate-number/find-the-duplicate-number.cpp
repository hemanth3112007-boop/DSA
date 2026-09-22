class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size() - 1;
        int l = 1, h = n, count;
        while (l <= h) {
            int mid = l + (h - l) / 2;
            count = 0;
            for (int x : nums) {
                if (x <= mid) {
                    count++;
                }
            }
            if (count > mid) {
                h = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return l;
    }
};