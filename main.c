// main.c

#include <stdio.h>
#include "bubble.h" 
// >>>>>>>>>>>>>>> EXPLICAÇÃO BUBBLE. <<<<<<<<<<<<<<<<<<<<<<
/*
    Quando eu defino o #include"bubble.h" eu to chamando a biblioteca que leva esse mesmo nome. Observa que nessa biblioteca vai ter UMA função. Do mesmo jeito que quando eu
faço #include<stdio.h> eu to incluindo todas as funções que
estão dentro da biblioteca stdio, quando eu faço #include "bubble.h" é a mesma coisa. 
    Porém, se eu abrir o arquivo bubble.h que está dentro de uma pasta nos documentos do meu computador e olhar o que está escrito lá, tu vai ver que vai ter só uma DECLARAÇÃO da função SEM mostrar o que aquela função faz. 
 ---------------CITANDO:---------------------------------------
 Citando o site CPROGRESSIVO : " 
... alguns arquivos headers, ou seja, arquivos que tem a extensão .h, como o stdio.h e o stdlib.h, que tanto usamos no decorrer de nosso curso. 
    Se abrir os arquivos, verá que ele contém diversos protótipos de funções, muitos comentários e outras coisas.
Mas código C, como estamos estudando, verá muito pouco. "

site: http://www.cprogressivo.net/2013/09/Header-cabecalho-o-que-sao-para-que-servem-como-criar-e-usar-seus-arquivos-.h.html
--------------FIM DA CITAÇÃO-----------------------------------
    Na verdade, o que está dentro daquela função está em um outro arquivo nessa mesma pasta do meu computador chamado "bubble.c" .Nesse  código ta a chamada da biblioteca bubble.h , o nome da função que foi declarada naquela biblioteca e entre os "{ }" o código em sí.
    Contudo, você pode estar se perguntando o que isso vai mudar no seu código, qual é o lado bom de se fazer isso. Bom, caso haja essa dúvida, note que no meu código "main.c" eu posso simplesmente chamar a função que está dentro da biblioteca bubble.h sem que haja a necessidade de eu ter que declarar ela no meu código main e sem ocupar espaço do meu código main com a execução do que essa função faz. Isso deixa o código main mais curto e menos poluído visualmente.
    Caso ainda não esteja claro, vamos pensar no seguinte: Quando você está escrevendo no código a função printf(""); tu não escreve o código por trás das palavras " printf " . Tu simplesmente usa a função e sabe que alguma mensagem vai ser mostrado para o usuário. Em nenhum momento você parou para escrever um código extremamente complexo que permita mostrar a mensagem que você digitou no seu codigo para o usuário. Você simplesmente digitou a função PRINTF e o sua função foi executada. Você pode fazer isso porque no começo do programa você escreveu #include <stdio.h> e dentro dessa biblioteca há uma função chamada printf aonde está escrito o código para enviar mensagens ao usuário. 
    Por conseguinte, quando tu digita #include "bubble.h" e acha que  é necessário organizar um vetor, tu pode simplesmente chamar a função bubble(vetor); passar para ela um vetor que vai ser organizado, sem a real necessidade de tu escrever esse código todo na tua main. 
    Observe que o #include"bubble.h" dentro da minha função main.c e dentro da minha função bubble.c só foi executado e não deu erro porque o meu arquivo bubble.h está na mesma pasta que está o meu bubble.c e main.c


----------------------------------------> ÚLTIMO PARAGRAFO É IMPORTANTE <----------------------------------------

   

*/

int main() {

int h;
int vetor[5]= {3,7,5,4,0};
int *p=vetor;

bubble(vetor);

  for(h=0;h<5;h++){
            printf("\n");
            printf(" O valor do vetor eh: %i ",*(h+p));
            printf("\n"); }




return 0;
}


/* 
 
  **********************************************************************
  **********Escrever isso no terminal***********************************
  **********************************************************************
  **********************************************************************
  gcc -c bubble.c
  gcc -c main.c
  gcc -o exe bubble.o main.o
  ./exe
  **********************************************************************
  **********************************************************************
  **********************************************************************
  **********************************************************************
  **********************************************************************
  **********************************************************************
  **********************************************************************
  *************Explicação do que cada comando significa*****************
  **********************************************************************
  **********************************************************************
->Com o primeiro comando tu usa o compilador GCC para APENAS COMPILAR e NAO EXECUTAR o programa chamado bubble e cria um arquivo executável com o mesmo nome em extensão .o   Logo, cria o bubble.o

->Com o segundo comando tu usa o compilador GCC para APENAS COMPILAR e NAO EXECUTAR o programa chamado main e cria um arquivo executável com o mesmo nome em extensão .o   Logo, cria o main.o

->No terceiro comando ele vai compilar o programa que está no formato " o " , que é dito ao compilador através da parte " -o " e vai deixar executável (não é só pq ele cria os arquivos executáveis que eles já nascem prontos para ser executados, é necessário fazer esse comando primeiro) os arquivos executáveis, ou seja bubble.o e main.o

-> Agora de fato ele vai executar os arquivos.
  **********************************************************************
  **********************************************************************
  **********************************************************************
  **********************************************************************
  **********************************************************************
  **********************************************************************
*/ 
