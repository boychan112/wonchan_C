#include <stdio.h>
#define NUM 10
main() {
    int score[NUM], tot, ave, i, n;
    
    //for���� �̿��ؼ� NUM ���� ������ŭ scanf�� ���� �޾Ƶ鿩�� ����ϰ� ����ϱ�(����Ҷ� score[i] ��� *(score+1) �̿�) 
    srand(time(NULL));
    for(i = 0; i < NUM; i++){
        scanf("%d", &score[i]);
        tot += score[i]; 
        }
    ave = tot/NUM;
    
    printf("=========================����ǥ========================\n");
    for(i = 0; i < NUM; i++){
        printf("����%2d ", i+1);
    }
    printf(" ����  ���\n");
    
    for(i = 0; i < NUM; i++)    
        printf("%6d ", *(score+i));
    printf("%5d %5d", tot, ave);
    
}
