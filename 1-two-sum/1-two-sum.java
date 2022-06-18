class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap <Integer, Integer> mp = new HashMap<>();
        for(int i = 0; i < nums.length; i++){
            int b = nums[i], a = target - b;
            if(mp.containsKey(a))
                return new int[]{mp.get(a), i};
            mp.put(b,i);
        }
    return new int[]{};
    }
}