class Solution {
    public int totalHammingDistance(int[] nums) {
        int ans = 0, n = nums.length;
    for (int j=0;j<32;j++) {
        int bitCount = 0;
        for (int i=0;i<n;i++) 
            bitCount += (nums[i] >> j) & 1;
        ans += bitCount*(n - bitCount);
    }
    return ans;
    }
}