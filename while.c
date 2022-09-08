#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n , i ;
    printf("Veuillez entrez un nombre : ");
    scanf("%d",&n);
    while (n<0 || n>10){
    printf("Veuillez entrer un nombre : ");
    scanf("%d ",&n);
    }
    i=0;
    while (i<=10){
        printf("%d x %d = %d\n",n,i,n*i);
        i++;
    }

    return 0;
}
