#include <stdio.h>

int main () {
	
	char letra;
	
	/*Solicitar uma letra para o usu�rio*/
	
	printf ("Ola, digite uma letra: ");
	scanf ("%c", &letra);
	
	/*Comparar com as vogais>:
	� igual uma vogal?*/
	
	if (letra == 'a' || letra == 'A' ||
	    letra == 'e' || letra == 'E' ||
		letra == 'i' || letra == 'I' ||
		letra == 'o' || letra == 'O' ||
		letra == 'u' || letra == 'U'){
		
	/*Se sim, imprime "� vogal*/
	printf ("Essa letra e uma vogal");

	/*Se n�o, imprime "N�o � vogal*/
	
	} else{
		printf ("Essa letra nao e uma vogal");
	}
	
	
	return 0;
	
}
