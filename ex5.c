/*
Alunos: Patrícia Duarte e Mário Victor
Exercicio5
*/

#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>

struct time 
{ 
   int hora; 
   int min; 
   int seg; 
}; 
struct time tempo;

void seg_tempo(int qtd_seg)
{ 
   int aux; 
   aux = qtd_seg; 
   tempo.seg = aux % 60; 
   aux /= 60;    
   tempo.min = aux % 60; 
   tempo.hora = aux / 60; 
   printf("%d segundos equivalem a %d:%.2d:%.2d horas\n", qtd_seg, tempo.hora, tempo.min, tempo.seg);    
} 

int tempo_seg()
{ 
   int qtd=0; 
   printf("Informe a hora (hh:mm:ss): "); 
   scanf("%d:%d:%d", &tempo.hora, &tempo.min, &tempo.seg); 
   qtd = ((tempo.hora * 60) + tempo.min) * 60 + tempo.seg; 
   return qtd; 
} 

int main()
{ 
    
   int num_seg; 
   printf("Informe a quantidade de segundos: "); 
   scanf("%d", &num_seg); 
   seg_tempo(num_seg); 
   printf("Quantidade de segundos: %d\n", tempo_seg()); 
   return 0; 
}
