// Conceito 1 // incluir bibliotecas

#include <stdio.h>  /* ----->  Serve para fazermos a inclusão da bibilioteca */
					// standart input output


int main ()  /* ----->  Para criarmos a funçaõ principal */
{
	
	printf ("Hello World!"); /* -----> Sintaxe(;) */
	
	return 0;
}

// Conceito 2 // funcao main 

#include <stdio.h>

int main ()
{
	//fazer um comentario -> permite comentar linha
	/* Tambem faz um comentario  -> permite comentar varias linhas  */
	
	printf("Hello\nWhats up bro? \n"); // Comando /n serve para pularmos uma linha
	
	return 0;
}

// Conceito 3 // fazer comentarios em c

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

// Conceito 4 // conceito e criacao de variaveis 

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

// Conceito 6 // operacoes matematicas

#include <stdio.h>

int main()
{
	int minha_idade = 20;
	int mae_idade = 40;
	int pai_idade = 45;
	int irmao_idade = 15;
	
	
	int idade_total = minha_idade + mae_idade + pai_idade + irmao_idade;
	
	printf("A soma das idades e: %i\n", idade_total);
	
	return 0;

	
}

// Conceito 7 // scand // obter dados do usuario


#include <stdio.h>

int main()
{
	
	int base;
	int altura;
	int area;
	
	area = base * altura;
		
	printf ("Digite o valor da base: ");
	scanf ("%i", &base);
	
	printf ("Digite o valor da altura: ");
	scanf ("%i", &altura);
		
	printf ("O valor da area e = %i", area);
	
	return 0;
	
}

// Conceito 8 // char, float, int

#include <stdio.h>

int main()
{
	int inteira = 10;
	// int para numeros inteiros
	
	float decimal = 10.5;
	// usamos flot para valores com virgula
	
	char caractere = 'a';
	// char para caracteres
	
	printf("inteiro = %i\ndecimal = %f\n caractere = %c\n", inteira, decimal, caractere);
	
	return 0;
}

// Conceito 9 // Contador

#include <stdio.h>

int main()
{
	
	int contador;
	
	//estrutura do for
	//(valor incial, limite, fazer algo )
	for (contador = 1; contador <= 10; contador = contador + 1)
	{
		printf("teste\n");
	}
	return 0;
	
}

// 
