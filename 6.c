#include <stdio.h>
int main()
{
    int score;
    scanf("%d",&score);
   if (score >= 68) {
    if(score < 75){
    printf("C(%d)\n",75-score);
    }
   } else if(score >= 85  ) {
    if(score < 100){
    printf("A\n");
    }
    } else if(score >= 75  ) {
    if(score < 80){
    printf("B\n");
    }
    } else if(score >= 55  ) {
    if(score < 68){
    printf("D\n");
    }
    } else if(score >= 0  ) {
    if(score < 55){
    printf("F\n");
    }
    }else{
        printf("error score");
    }


    return 0;
}
