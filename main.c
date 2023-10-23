#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdbool.h>
#include <stdlib.h>

struct Usuario {
    char nome[50];
    char senha[50];
};
int main() {
  setlocale(LC_ALL, "Portuguese");
  struct Usuario usuarios[100];
  int qntUsuarios = 0;
  int opcao;
  int leitura;
  char nomeUsuario[50];
  char senhaUsuario[50];
  bool login = false;
  int GPU, CPU, MEM, FALTA;
  int loja, lojaplaca, placavideo, processador, memram;
  char* senhaEstoque = "estoquesenha";
  char* senhaEstUsuario;
  int tentativas = 0;
  while(1){
    system("cls");
    printf("Seja bem vindo \n");
  	printf("Menu:\n");
    printf("1 - Registrar-se \n");
    printf("2 - Fazer Login\n");
    printf("3 - Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);
    switch(opcao){
      case 1:
        system("cls");
        if(qntUsuarios < 100) {
          printf("Digite o nome de usuario desejado: \n");
          scanf("%s", usuarios[qntUsuarios].nome);
          printf("Digite a senha desejada: \n");
          scanf("%s", usuarios[qntUsuarios].senha);
          printf("Registro concluído com sucesso");
          qntUsuarios++;
        }
        else{
          printf("Limite de usuarios atingido! \n");
        }
        break;
      case 2:
        system("cls");
        printf("Digite o nome de usuario: \n");
        scanf("%s", nomeUsuario);
        printf("Digite a senha: \n");
        scanf("%s", senhaUsuario);
        for (int i = 0; i < qntUsuarios; i++){
          if(strcmp(usuarios[i].nome, nomeUsuario) == 0 && strcmp(usuarios[i].senha, senhaUsuario) == 0){
            system("cls");
            printf("Login realizado com sucesso!\n");
            login = true;
            while(1){
            menu:
              system("cls");
  					printf("Menu:\n");
    				printf("1 - Acessar o menu de estoque \n");
            printf("2 - Está com dificuldade ao montar o PC? Veja as recomendações \n");
    				printf("3 - Sair \n");
    				printf("Escolha uma opção: ");
    				scanf("%d", &leitura);
    				switch(leitura){
              case 1:
                if(tentativas < 5){
                  system("cls");
                printf("Por favor, digite a senha de acesso \n");
                  scanf("%s", senhaEstUsuario);
                if(strcmp(senhaEstoque, senhaEstUsuario) == 0){
                  system("cls");
                printf("Acessando menu de estoque: \n");
                printf("Digite a quantidade de GPUs no estoque: \n");
                  scanf("%d", &GPU);
                printf("\nDigite a quantidade de CPUs no estoque: \n");
    							scanf("%d", &CPU);
                printf("\nDigite a quantidade de Memorias ram no estoque: \n");
    							scanf("%d", &MEM);
    			if(GPU <= 20){
        				FALTA = 200 - GPU;
        				GPU = GPU + FALTA;
    					}
   			 	if(CPU <= 10){
        				FALTA = 100 - CPU;
       					CPU = CPU + FALTA;
    			}
   				if(MEM <= 30){
        				FALTA = 300 - MEM;
        				MEM = MEM + FALTA;
             }system("cls");
    						printf("Quantidade de GPUs no estoque: %d", GPU);
    						printf("\nQuantidade de CPUs no estoque: %d", CPU);
    						printf("\nQuantidade de Memorias ram no estoque: %d\n", MEM);
                  system("pause");
                 }
                 else{
                   system("cls");
                  printf("Senha incorreta, tente novamente \n");
                  tentativas++;
                   system("pause");
                 }
                }
            else{
              system("cls");
              printf("Voce excedeu o limite de tentativas, procure ajuda do suporte caso tenha sido um engano \n");
              system("pause");
              
            }
                break;
                
              case 2:
                	while(1){
                    system("cls");
                		printf("Escolha a peça desejada: \n");
                		printf("1- Placas de video \n");
                		printf("2- Processadores \n");
                		printf("3- Memorias Ram \n");
                		printf("4- Voltar \n");
                    printf("Escolha uma opção: ");
                		scanf("%d", &loja);
                		switch(loja){
                    	case 1:
                         placasdevideo:
                          system("cls");
                      		printf("1- GTX 1060					2- RTX 2060 \n");
                      		printf("3- RTX 3060					4- RTX 4060 \n");
                        	printf("5- Voltar \n");
                        	printf("Escolha uma opção: ");
                        	scanf("%d", &placavideo);
                        	switch(placavideo){
                            case 1:
                              system("cls");
                              	printf("Processador sugerido: \n");
                              	printf("I5 10400F \n");
                              	printf("Memoria ram sugerida: \n");
                              	printf("2x8gb - ddr4 2400mhz \n");
                              system("pause");
                            case 2:
                              system("cls");
                              	printf("Processador sugerido: \n");
                              	printf("I7 7700K \n");
                              	printf("Memoria ram sugerida: \n");
                              	printf("2x8gb - ddr4 2666mhz \n");
                              system("pause");
                              break;
                            case 3:
                              system("cls");
                              	printf("Processador sugerido: \n");
                              	printf("I9 10900F \n");
                              	printf("Memoria ram sugerida: \n");
                              	printf("2x16gb - ddr4 3200mhz \n");
                              system("pause");
                              break;
                            case 4:
                              system("cls");
                              	printf("Processador sugerido: \n");
                              	printf("I5 13400F \n");
                              	printf("Memoria ram sugerida: \n");
                              	printf("2x16gb - ddr4 4600mhz \n");
                              system("pause");
                              break;
                            case 5:
                              	
                              break;
                              default:
                              system("cls");
                              printf("Opção invalida, tente novamente. \n\n");
                              system("pause");
                              goto placasdevideo;
                              break;
                          }
                      	break;
                      case 2:
                        processadores:
                        system("cls");
                        printf("1- I5 10400F 				2- I7 7700K \n");
                        printf("3- I9 10900F				4- I5 13400F \n");
                        printf("5- Voltar \n");
                        printf("Escolha uma opção: \n");
                        scanf("%d", &processador);
                        switch(processador){
                          case 1:
                            system("cls");
                            	printf("Placa de video sugerida: \n");
                              printf("GTX 1060 \n");
                              printf("Memoria ram sugerida: \n");
                              printf("2x8gb - ddr4 2400mhz\n");
                            system("pause");
                            break;
                          case 2:
                            system("cls");
                            	printf("Placa de video sugerida: \n");
                              printf("GTX 2060 \n");
                              printf("Memoria ram sugerida: \n");
                              printf("2x8gb - ddr4 2666mhz\n");
                            system("pause");
                            break;
                          case 3:
                            system("cls");
                            	printf("Placa de video sugerida: \n");
                              printf("GTX 3060 \n");
                              printf("Memoria ram sugerida: \n");
                              printf("2x16gb - ddr4 3200mhz\n");
                            system("pause");
                            break;
                          case 4:
                            system("cls");
                            	printf("Placa de video sugerida: \n");
                              printf("GTX 4060 \n");
                              printf("Memoria ram sugerida: \n");
                              printf("2x16gb - ddr4 4200mhz\n");
                            system("pause");
                            break;
                          case 5:
                            break;
                          default:
                            system("cls");
                            printf("Opção invalida, tente novamente. \n\n");
                            system("pause");
                            goto processadores;
                            break;
                        }
                        break;
                      case 3:
                        memorias:
                        system("cls");
                        printf("1- 8gb - ddr4 2400mhz 				2- 8gb - ddr4 2666mhz \n");
                        printf("3- 16gb - ddr4 3200mhz				4- 16gb - ddr4 4200mhz \n");
                        printf("5- Voltar \n");
                        printf("Escolha uma opção: \n");
                        scanf("%d", &memram);
                        switch(memram){
                          case 1:
                            system("cls");
                            	printf("Placa de video sugerida: \n");
                              printf("GTX 1060 \n");
                             	printf("Processador sugerido: \n");
                              printf("I5 10400F \n");
                            system("pause");
                            break;
                          case 2:
                            system("cls");
                            	printf("Placa de video sugerida: \n");
                              printf("GTX 2060 \n");
                              printf("Processador sugerido: \n");
                              printf("I7 7700K \n");
                            system("pause");
                            break;
                          case 3:
                            system("cls");
                            	printf("Placa de video sugerida: \n");
                              printf("GTX 3060 \n");
                              printf("Processador sugerido: \n");
                              printf("I9 10900F \n");
                            system("pause");
                            break;
                          case 4:
                            system("cls");
                            	printf("Placa de video sugerida: \n");
                              printf("GTX 4060 \n");
                              printf("Processador sugerido: \n");
                              printf("I5 13400F \n");
                            system("pause");
                            break;
                          case 5:
                            break;
                          default:
                            system("cls");
                            printf("Opção invalida, tente novamente. \n\n");
                            system("pause");
                            goto memorias;
                            break;
                            }
                        break;
                      case 4:
                        	goto menu;
                        break;
                          default:
                            system("cls");
                            printf("Opção invalida, tente novamente. \n\n");
                            system("pause");
                            break;
                  	}
                	}
                  
              case 3:
                system("cls");
                	printf("Saindo do programa... \n");
                login = false;
                system("pause");
                return 0;
                break;
            }
            
          }
          }
          if(login == false){
            system("cls");
            printf("Nome de usuario ou senha incorretos, tente novamente\n\n");
            system("pause");
          }
        }
        break;
      case 3:
        system("cls");
        printf("Encerrando programa... \n");
        system("pause");
        return 0;
        break;
          
      default:
        system("cls");
         printf("Opção inválida. Tente novamente.\n\n");
        system("pause");
        break;
    }
  }
  }