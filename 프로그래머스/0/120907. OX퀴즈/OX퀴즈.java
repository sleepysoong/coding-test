class Solution {
    public String[] solution(String[] quizzes) {
        String[] answer = new String[quizzes.length];
        for(int i = 0; i < quizzes.length; i++){
            String[] splitedQuiz = quizzes[i].split(" ");
            answer[i] =
                Integer.parseInt(splitedQuiz[0]) + (Integer.parseInt(splitedQuiz[2]) * (splitedQuiz[1].equals("+") ? 1 : -1))
                == Integer.parseInt(splitedQuiz[4]) ? "O" : "X";
        }
        return answer;
    }
}
