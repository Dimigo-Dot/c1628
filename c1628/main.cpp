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
    
    if(myMajor == "EB") printf("너는 이비!");
    else if(myMajor == "DC") printf("너는 디컨!");
    else if(myMajor == "WP") printf("너는 웹플!");
    else if(myMajor == "HD") printf("너는 해방!");
    printf("\n");
    
    return 0;
}
