#include <stdio.h>
int main()
{
    int avg_score = 49;
    int user_score;
    printf("Enter your score:\n");
    scanf("%d", &user_score);
    if (user_score >= avg_score)
    {
        printf("You Passed The Exam\n");
    }
    else
    {
        printf("You Failed The Exam\n");
    }
    return 0;
