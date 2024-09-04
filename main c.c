#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int a;

    a = 1;

    printf("Digite um numero inteiro e positivo:");
    scanf("%d",&n);

    if(n<=0){
        printf("Entrada invalida.");

        return 0;
    }

    printf("n=%d\n",n);


    for(a=1;a<=n;a++){
        printf("%d: ",a);

        if(a%2 == 0 && a%3 == 0){
            printf("Pim Pam.\n");

        }
        else{
            if(a%2 == 0){
                printf("Pim.\n");
            }
            else{
                if(a%3 == 0){
                    printf("Pam.\n");
                }
                else{
                    printf("%d\n");
                }
            }
        }
    }

    return 0;

}
