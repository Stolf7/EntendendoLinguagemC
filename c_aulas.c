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
// TIPOS DE VARIAVEIS

	char letra = 'a' ou 1; // armazena 1 caractere
	
	int numero = 1; // armazena um numero inteiro
	long int numero = 11111111111; // armazena mais bits
	const int numero = 1; // "const" fixa o numero
	
	float numero = 1.5; // armazena um numero picado
	double numero = 1.11111111111; // possui mais precisao que "float"
	const float numero = 1; // "const" fixa o numero
	
	bool x = True; // False
	// nao é escaneavel

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

// CONCEITO 14 ? -> INTERROGACAO // 

#include <stdio.h>

int main()
{
	
	int numero1 = 1;
	int numero2 = 2;
	 // estrutura de comparacao 
	 //sintaxe 
	 // comparacao ? caso verdadeiro : caso falso;
	numero1 > numero2 ? printf("Yes") : printf("Not");
	
	return 0;
	
}

// CONCEITO 15 VETORES

// vetor 

#include <stdio.h>
// "void" e () são a mesma coisa, = a vazio
int main(void)
{
	
	int nota[5];
	
	nota[0] = 10;
	nota[1] = 9;
	nota[2] = 7;
	nota[3] = 2;
	nota[4] = 8;	
	
	printf("Nota %i", nota[2]);
	return 0;
}

// ---------------------------------------------------
//  EXIBINDO E ARMAZENANDO VETORES
#include <stdio.h>

int main(void)
{
	// "{}" adiciona valores para o vetor
	int vetor[10] = {10,9,8,7,6,5,4,3,2,1};
	// loop para imprimir todos os vetores
	for(int i = 0; i < 10; i++)
	{// "i" assume o papel de "vetor [x]"
		printf("\n%i", vetor[i]);
	}
	return 0;
}

// ---------------------------------------------------
// EX VETOR // ARMAZENANDO DADOS COM LOOP
#include <stdio.h>

int main()
{
	float notas[5] = {0};
	float total = 0;
	float media = 0;
	
	printf("Insira suas 5 notas: ");
	for(int i = 0; i < 5; i++)
	{
		// note que scanf esta armazenando em notas [i]
		scanf("%f", &notas[i]);
	}
	
		for(int i = 0; i < 5; i++)
		{
			total += notas[i];
		}
	
	media = total / 5;
	
	printf("A media do aluno e': %f", media);
	
	
	return 0;
}


