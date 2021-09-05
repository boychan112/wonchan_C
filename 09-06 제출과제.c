#include <stdio.h>
#define NUM 10
main() {
    int score[NUM], tot, ave, i, n;
    
    //for문을 이용해서 NUM 개의 개수만큼 scanf로 과목 받아들여서 계산하고 출력하기(출력할때 score[i] 대신 *(score+1) 이용) 
    srand(time(NULL));
    for(i = 0; i < NUM; i++){
        scanf("%d", &score[i]);
        tot += score[i]; 
        }
    ave = tot/NUM;
    
    printf("=========================성적표========================\n");
    for(i = 0; i < NUM; i++){
        printf("과목%2d ", i+1);
    }
    printf(" 총점  평균\n");
    
    for(i = 0; i < NUM; i++)    
        printf("%6d ", *(score+i));
    printf("%5d %5d", tot, ave);
    
}
