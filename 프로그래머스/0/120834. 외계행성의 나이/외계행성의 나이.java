class Solution {
    public String solution(int age) {
        String result = "";
        String stringtifiedAge = age + "";
        for(int i = 0; i < stringtifiedAge.length(); i++){
            result += (char) (Integer.parseInt(String.valueOf(stringtifiedAge.charAt(i))) + 97);
        }
        return result;
    }
}