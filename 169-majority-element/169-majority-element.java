class Solution {
    public int majorityElement(int[] nums) {
       HashMap <Integer, Integer> mp = new HashMap<Integer, Integer>();
        for(int x: nums){
            if(!mp.containsKey(x)){
                mp.put(x,1);
            } else {
                mp.put(x, mp.get(x) +1);
            }
            
            if(mp.get(x) > nums.length/2)
                return x;
        }
        return -1;
        
    }
}