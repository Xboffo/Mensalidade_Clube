 #include  <stdio.h>

/* 
Inclua os sinais de MAIOR QUE e MENOR QUE no #include    
Prof. Saulo Santos
   
   Um clube situado na cidade de Bras�lia-DF, precisa calcular o valor da mensalidade de
   associados que n�o pagaram a mensalidade. Escreva um programa que pe�a ao usu�rio para 
   digitar a quantidade de dias de atraso e com base nesse dado, calcule o valor da mensalidade atualizada. 
   O c�lculo da multa segue a seguinte regra: 
   
   - 10% sobre o valor da mensalidade acrescido de 0.1% por dia de atraso. 
   
   Dados de entrada:
   
   - o valor da mensalidade 
   - porcentagem da multa 
   - porcentagem por dia de atraso 
   
   Sa�da:
   
   - Valor da mensalidade acrescido da multa.
*/

double CalculaNovaMensalidade(double mensalidade, double taxa, double taxaDiaria, int dias){
 
 taxaDiaria = taxaDiaria * dias; // 0.2;
 taxa = taxa + taxaDiaria;  // 10% + 0.2% = 10.2%
 return mensalidade * (1 + taxa/100);
 
}

int main(void) {
 double mensalidade, novaMensalidade, taxa = 10.0, taxaDiaria = 0.1;
 int dias;     
 
 //Entrada de Dados
 printf("Digite a mensalidade:");
 scanf("%lf",&mensalidade);
 
 printf("Quantidade de dias de atraso: ");
 scanf("%d",&dias); // 2 
 
 //Processamento de Dados
 
 novaMensalidade = CalculaNovaMensalidade (mensalidade, taxa, taxaDiaria, dias);
 
 
 
 //Sa�da de Dados
 printf("Nova mensalidade: R$%0.2lf",novaMensalidade);
 
 
 return 0;
}
