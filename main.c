//Ejercicio 4 Final Funciones 
//4. Realice un programa en C que busque un caracter dentro de un String (ambos proporcionados por el usuario), 
//ademas de que mencione cuantas veces se repite el caracter y las posiciones en el que se encuentra. Utilice funciones.
#include<stdio.h>
#include<string.h>
void string(char serie[1][200]);
int main(){
	char serie[1][200];
	string(serie);
	return 0;
}

void string(char serie[1][200]){
	int i, j,c;
	char s;
	printf ("Dime algo no mas de 200 caracteres\n");
	for(i=0;i<1;i++){
		fgets(serie[i], sizeof(serie[i]), stdin);
	}
	for(i=0;i<1;i++){
			printf("%s", serie[i]);
	}
	printf("\ncaracter\n");
	scanf("%s", &s);
	c=0;
	for (i=0;i<1;i++){
		for(j=0;j<200;j++){
			if (serie[i][j]==s){
				c=c+1;
				printf("posicion del caracter en la cadena %d, %d\n",i,j );
			}
		}
	}
	printf("Veces repetidas del caracter en la cadena  %d", c);
	
}
