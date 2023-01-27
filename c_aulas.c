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

// Conceito 10 // WHILE

#include <stdio.h>

int main()
{
	int contador = 1;
	
	while (contador < 10)
	{
		contador = contador + 1; //or ++contador;
		printf("%i\n", contador);
		
	}
	
	return 0;
}

// Conceito 11 // DO WHILE

#include <stdio.h>

int main()
{
	int i = 0;
	
	while(i != 0)
	{
		printf("Teste\n");
	}
	// usando o "do" pelo menos uma vez sera executado a acao
	//"while" verifica a condicao antes de executar
	do{
		printf("teste\n");
	}while(i != 0);
	
	
	return 0;
}

// Conceito 12 //  ELSE IF

#include <stdio.h>

int main()
{
	int idade;
	printf("Digite a sua idade: ");
	scanf("%i", &idade);
	
	if (idade <= 5)
	{
		printf("Bebe\n");
	}
	// "&&" é equivalente ao "or" ou "e"
	// "else if" é equivalente ao "elif"
	else if (idade > 5 && idade <=10)
	{
		printf("Crianca\n");
	}
	
	else if (idade > 10 && idade <=18)
	{
		printf("Adolescente\n");
	}
	//podemos usar quantos "else if" desejarmos
	else if (idade > 18 && idade <= 50)
	{
		printf("Adulto\n");
	}
	// enceramos a estrutura com "else"
	else
	{
		printf("Idoso\n");
	}
	
	
	return 0;
	
}

// Conceito 13 // SWITCH

#include <stdio.h>

int main()
{
	int i;
	printf("Insira o numero inteiro de 1 a 5: ");
	scanf("%i", &i);
	// "switch" é semelhante a if, utilizando o "case"
	switch (i)
	{
		case 1: 
			printf("Primeiro\n");
			/// "break" serve para informar onde o programa deve encerrar
			break;
		case 2: 
			printf("Segundo\n");
			break;
		case 3: 
			printf("Teceiro\n");
			break;
		case 4: 
			printf("Quarto\n");
			break;
		case 5: 
			printf("Quinto\n");
			break;
			//"default" define a acao padrao caso o usuario nao digite nada
		default:
			printf("Opcao invalida!");
			break;
	}
		
	return 0;
}

