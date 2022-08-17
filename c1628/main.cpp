#include <stdio.h>
int main() {
    int myGrade;
    char myMajor[3], myName[10];
    
    printf("학년 입력! ");
    scanf("%d", &myGrade);
    
    printf("전공 입력해 주라: ");
    scanf("%s", myMajor);
    
    printf("이름을 입력해보는게 좋을거야 ^^: ");
    scanf("%s", myName);
    
    
    printf("%d학년 %s과 %s :)\n", myGrade, myMajor, myName);
    return 0;
}
