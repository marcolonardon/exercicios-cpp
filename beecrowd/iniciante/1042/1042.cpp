#include <stdio.h>
#include <stdlib.h>

int n1, n2, n3, maior, menor, medio;
main(){
    scanf("%i %i %i", &n1, &n2, &n3);
    if(n1 > n2){
		if(n1 > n3){
			maior = n1;
			if(n2 > n3){
				menor = n3;
                medio = n2;
			}else{
				menor = n2;
                medio = n3;
			}
		}else{
			maior = n3;
			menor = n2;
            medio = n1;
		}	
	}else{
		if(n1 > n3){
			maior = n2;
			menor = n3;
            medio = n1;
		}else{
			if(n2 > n3){
				maior = n2;
				menor = n1;
                medio = n3;
			}else{
				maior = n3;
				menor = n1;
                medio = n2;
			}
		}
	}
    printf("%i\n%i\n%i\n", menor, medio, maior);
    printf("\n");
    printf("%i\n%i\n%i\n", n1, n2, n3);
}