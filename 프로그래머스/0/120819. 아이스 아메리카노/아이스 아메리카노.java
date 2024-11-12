class Solution {
    public int[] solution(int money) {
        
        int left = money % 5500;
        return new int[]{(money - left) / 5500, left};
    }
}