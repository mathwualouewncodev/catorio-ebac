	//OBSERVAÇÃO: tudo que tiver "//" são marcações, leiam para não se perder no codigo


#include <stdio.h> //biblioteca de comunicação com o usuario
#include <stdlib.h> //biblioteca de alocação de espaço em memória
#include <locale.h> //biblioteca de alocações de texto por região
#include <string.h>//biblioteca responsavel por cuidar da strings


     int registro() //int registro (inicio)
{
	  char arquivo[40];
      char cpf[40];
      char nome[40];
      char sobrenome [40];
      char cargo[40];

      printf ("digite o cpf a ser cadastrado");
      scanf("%S", cpf);

      strcpy(arquivo, cpf);
      
      FILE *file; //cria arquivo
      file = fopen(arquivo, "w"); //cria  arquivo
      fprintf(file,cpf); //salva o valor da variavl
      fclose(file);
      
      file = fopen(arquivo, "a");
      fprintf(file,",");
      fclose(file);
      
      printf("digite o nome a ser cadastrado");
      scanf("%s",nome);
      
      file = fopen(arquivo, "a");
      fprintf(file,nome);
      fclose(file);
      
      file = fopen(arquivo, "a");
      fprintf(file,",");
      fclose(file);
      
      printf("digite o sobrenome a ser cadastrado");
      scanf("%s",sobrenome);
      
      file = fopen(arquivo, "a");
      fprintf(file,sobrenome);
      fclose(file);
      
      file = fopen(arquivo, "a");
      fprintf(file,",");
      fclose(file);
      
      printf("digite o cargo a ser cadastrano:  ");
      scanf("%s",cargo);
      
      file = fopen(arquivo, "a");
      fprintf(file,cargo);
      fclose(file);
      
      system("pause");
    
} // int registro (final)

        
		
		
		
	   int consultar()   
{     // inicio consultar

    setlocale(LC_ALL, "portugeuse"); //to definindo a linguagem
      
      char cpf[40];
      char conteudo[200];
      
      printf("digite o cpf a ser consultado");
      scanf("%s",cpf);
      
      FILE *file;
      file = fopen(cpf, "r");
      
      if(file == NULL)
      {
      	printf("\nnão foi possivel achar o arquivo\n\n");
	  }
      
      while(fgets(conteudo, 200, file) != NULL)
      {
      	   printf("\nessas são as informações do usuario:   ");
      	   printf("%s", conteudo);
      	   printf("\n\n");
	  }
      
      system("pause");
  
}     //fim int consultar

    
   
      int deletar()
{ 
     char cpf[40];
    
    printf("qual o CPF do USURARIO a ser deletado?\n");  
    scanf("%s", cpf);
      
    remove(cpf);
    
    FILE *file;
    file = fopen(cpf, "r");
    
    if(file == NULL);
    {
    	printf("esse cpf não foi encontrado\n");
    	system ("pause");
	}  
}

int main()
{
     int opcao=0;
     int laco=1;

     for(laco=1;laco=1;)
{ 
	  
        system("cls");

        setlocale(LC_ALL, "portuguese");  //definindo localidade
        
	    printf (" cartorio da EBAC \n\n");  //inicio do menu   
	    printf("escolha a opção desejada do menu: \n\n");
	    printf("\t1 - Registrar nomes");
      	printf("\t2 - Consultar nomes");
    	printf("\t3 - Deletar nomes\n");
    	printf("\n0\t4 - saida do menu\n");
        printf("opção: ");       //fim do menu
   
    scanf("%d", &opcao);    //armazenando a escolha do usuario

    system("cls");


    switch (opcao)
{
	
    
    
   case 1:   	
            registro();
            break;
   
   case 2:  consultar();
            break;
        
   case 3:  deletar();
            break;
            
   case 4:
   printf("obrigado por utilizar o sistema!\n");
   return 0;
   break;
            
   default:
        printf("esta opcão infelismente não existe\n\n");
 		   system("pause");
 		
		 break;
}      //switch case
}      //for
   
}     //int main (2)

