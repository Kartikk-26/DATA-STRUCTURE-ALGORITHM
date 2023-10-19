#include<stdio.h>
int main(){
    int x,r=0,n;
    printf("ENTER THE NUMBER : \n");
    scanf("%d",&x);
    printf("THE NUMBER BEFORE REVERSE IS %d\n",x);
    while(x!=0){
        r=r*10+x%10;
        x=x/10;
    }
    printf("THE NUMBER AFTER REVERSE IS %d\n",r);
}
//THE CODE IS WRIITEN IN C ;//k