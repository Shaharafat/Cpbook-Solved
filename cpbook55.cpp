#include<stdio.h>
int main()
{
    int i;
    for(i=1000;i>=1;i--){
        if((i!=1000)&&(i%5==0)){
            printf("\n");
        }
        printf("%d",i);
        if(i!=1)
            printf("\t");
    }
    return 0;
}
