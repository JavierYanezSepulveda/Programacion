#include<stdio.h>
#include<string.h>
#define x 32768
int main(){
    int a, b, i, j, y=0;
    char ana[x], clon[x];
    printf("Ingrese el anagrama:\n");
    scanf("%s", &ana);
    b=strlen(ana);
    for(i=0; i<b; i++){
        if(ana[i]!=0){
            for(j=b; j>i; j--){
                if(ana[i]==ana[j]){
                    ana[i]=0;
                    ana[j]=0;
                }
            }
        }
   }
    for(a=0; a<=b; a++){
        if(ana[a]!=0)
            y++;
    }
    if((y==0)||(y==1)) printf("1\n");
    else printf("0\n");
}
