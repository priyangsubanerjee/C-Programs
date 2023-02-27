#include<stdio.h>
int main(){

    int totalQuestions = 150;
    int correct1 = 80, correct2 = 72;
    printf("Correct answers by stu 1: %d \n", (totalQuestions * correct1/100));
    printf("Correct answers by stu 2: %d", (totalQuestions * correct2/100));
    return 0;
}