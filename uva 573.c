#include <stdio.h>
int main()
{
    int day,k;
    double height,climb,back,per,fclimb,khoti;
    while(scanf("%lf %lf %lf %lf",&height,&climb,&back,&per)==4){
        if(height==0)
        break;
    day=1;
    khoti=0;fclimb=0;k=0;
    while(1){
    if(climb-khoti<0){
        fclimb=fclimb-back;
        k=1;
    }
    else{
    fclimb=fclimb+(climb-khoti);
    }
    khoti=((climb*per*1.0)/100)*day;
    if(fclimb>height){
        printf("success on day %d\n",day);
        break;
    }
    if(k!=1){
    fclimb=fclimb-back;
    }
    if(fclimb<0){
        printf("failure on day %d\n",day);
        break;
    }
    day++;
    }
    }
    return 0;


}
