#include <stdio.h>

int main () {
	
	char letra;
	
	/*Solicitar uma letra para o usuário*/
	
	printf ("Ola, digite uma letra: ");
	scanf ("%c", &letra);
	
	/*Comparar com as vogais>:
	é igual uma vogal?*/
	
	if (letra == 'a' || letra == 'A' ||
	    letra == 'e' || letra == 'E' ||
		letra == 'i' || letra == 'I' ||
		letra == 'o' || letra == 'O' ||
		letra == 'u' || letra == 'U'){
		
	/*Se sim, imprime "É vogal*/
	printf ("Essa letra e uma vogal");

	/*Se não, imprime "Não é vogal*/
	
	} else{
		printf ("Essa letra nao e uma vogal");
	}
	
	
	return 0;
	
}
