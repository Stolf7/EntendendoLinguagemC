Aula 1

#include <stdio.h>  /* ----->  Serve para fazermos a inclusão da bibilioteca */
					// standart input output


int main ()  /* ----->  Para criarmos a funçaõ principal */
{
	
	printf ("Hello World!"); /* -----> Sintaxe(;) */
	
	return 0;
}

Aula 2 

#include <stdio.h>

int main ()
{
	//fazer um comentario -> permite comentar linha
	/* Tambem faz um comentario  -> permite comentar varias linhas  */
	
	printf("Hello\nWhats up bro? \n"); // Comando /n serve para pularmos uma linha
	
	return 0;
}

Aula 3

#include <stdio.h> //standart input output

int main()
{
	// variavel de tipo inteiro 'int'
	int minha_idade;
	
	minha_idade = 23;
	
	// '%i' -> informa que temos uma variavel do tipo int
	printf("A minha idade e %i \n", minha_idade);
	
	return 0;
}

Aula 4 

#include <stdio.h> 

int main()
{
	// variavel de tipo inteiro 'int'
	int minha_idade;
	
	minha_idade = 23;
	
	int mae_idade;
	mae_idade = 48;
	//observe que podemos declarar a variavel de ambas as formas 
	int pai_idade = 49;
	
	// '%i' -> informa que temos uma variavel do tipo int
	printf("A minha idade e %i\nDa minha mae e %i\nE do meu pai e %i",
	minha_idade, mae_idade, pai_idade);
	
	return 0;
}
