#include <stdio.h>

int main() {

	/*Sintese de exemplos para estudos*/
	
	/*Modificadores de tipo */
	unsigned int numero_itens;
	long int numero_muito_grande;
	
	/*Combinando os modificadores de tipo unsigned e long*/
	unsigned long int valor_muito_grande;
	
	/*Modificador de tipo register*/
	register int contador;
	register unsigned sinaliz_status;

	/*Modificador de tipo short*/
	short int valor_chave;
	short int numero_pequeno;

	/*Omitindo int das declarações modificadas*/
	unsigned omitido;
	short omitimo_pequeno;
	long omitido_grande;

	/*Modificador de tipo signed*/
	signed char valor_byte;
	signed char escolha_menu;

	/*Tipos customizados*/
	typedef unsigned long int ULINT;
	ULINT minhavariavel;


	getchar();
	return 0;
}