#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n , s , i ;
   do{
    printf("Veuillez entrer un nombtre : ");
    scanf ("%d",&n);
    }while (n<1);
    s=0 ;
    for (i=1; i<=n; i++) {
    s = s+i;
    }
    printf("la somme est : %d",s);
    return 0;
}
