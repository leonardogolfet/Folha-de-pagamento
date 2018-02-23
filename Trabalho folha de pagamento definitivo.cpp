#include<stdio.h>
#include<locale.h>


main()

  {
  float falt, valorhora, salariofixo, horasextras, salariofamilia, salarioliquido, valordia, j, inss, salariobruto, iprfv, filhos, iprf, i, valfalta,filhosd,horaextra, faltatotal,iii; 
  char nfun ;
  int faltas,semanafalta, funci;
  setlocale(LC_ALL,"portuguese");
  faltatotal=0;
  printf("\nOlá, Escreva a quantidade de funcionarios que voce deseja fazer a lista de pagamentos");
  scanf ("%d", &funci);
   for (i=1;i<=funci;i++)
   {
   printf ("\nDigite o salario fixo do funcionario\n");
   scanf("%f", &salariofixo);
   printf ("\nDigite a Quantidade de filhos do funcionario\n");
   scanf ("%f", &filhos);
   printf ("\nDestes filhos, quantos sao invalidos ou menors de 14 anos ?\n");
   scanf ("%f", &filhosd);
   printf ("\nQuantas horas extas o funcionario fez ?\n");
   scanf ("%f", &horasextras);
   printf("\nQuantas faltas teve o funcionario ?");
   scanf("%d",&faltas);
   valorhora=salariofixo/220;
   valordia=valorhora*8;
   do
    {
	 printf("\nDigite em qual semana ocorreu a falta ?\n");
	 scanf("%d", &semanafalta);
	 falt=0;
      switch(semanafalta)
        {
            case 1:
                falt=faltas+1;
                valfalta=salariofixo-(faltas*valordia);
                faltatotal=faltatotal+(faltas*valordia);
                 break;
            case 2:
                falt=faltas+1;
                valfalta=salariofixo-(faltas*valordia);
                faltatotal=faltatotal+(faltas*valordia);
                 break;
            case 3:
                falt=faltas+1;
                valfalta=salariofixo-(faltas*valordia);
                faltatotal=faltatotal+(faltas*valordia);
                 break;
            case 4:
                falt=faltas+1;
                valfalta=salariofixo-(faltas*valordia);
                faltatotal=faltatotal+(faltas*valordia);
                 break;
            case 0:
            	faltas=faltas+0;
                
                 break;
                 
     
      default:
                printf("Você não digitou um valor válido para semanas\n");
         }
    printf("Se o usuario faltou em mais semanas digite 1, senão digite 2\n");
    scanf("%f", &j);
    }while (j==1);
    valfalta=valfalta+(valorhora*horasextras);
    salariobruto=salariofixo-faltatotal;
    horaextra=valorhora*horasextras;
	
	if (salariobruto<1659,38 )
     inss=(salariobruto*0.08);
    else 
  
 {
	     if (salariobruto<2765,66)
	     inss=(salariobruto*0.09);
         else 
		 {

    if(salariobruto<5531,31)
    inss=(salariobruto*0.11);
    else 
    inss=608.44;
}
}


iprfv= (salariobruto-(filhos*189,59))-inss;
    if (iprfv < 1903,98)
      iprf=0;
    else {
	
    if (iprfv < 2826,65){
	
      iprf = (iprfv - 142,80);
      iii=(142,80);}
    else {
	
    if (iprfv < 3751,05){
	
      iprf= (iprfv- 354,80);
      iii=(354,80);}
    else {
	
    if (iprfv < 4664,68){
	
      iprf= (iprfv- 636,13) ;
      iii=(636,13);}
    else {
	
    if (iprfv >= 4664,68)
     iprf= (iprfv- 869,36);
     iii=(869,36);
}
}
}
}
    salarioliquido=salariobruto-inss-iii+horaextra;
    if (salarioliquido<860)
     salariofamilia=(filhosd*44);
  else 
 {
	     if (salarioliquido<1292)
     salariofamilia=(filhosd*31);
    else
     salariofamilia=0;
} 
	salarioliquido=salarioliquido+salariofamilia;
    salariobruto=salariofixo-faltatotal+horaextra;

printf ("\nSALÁRIO BRUTO: %.2f\n", salariobruto);
printf ("\nHORAS EXTRAS: %.2f\n", horaextra);
printf ("\nSALARIO FAMILIA:  %.2f\n", salariofamilia);
printf ("\nDESCONTO FALTAS:  %.2f\n", faltatotal );
printf ("\nDESCONTO INSS: %.2f\n", inss);
printf ("\nDESCONTO IRPF: %.2f\n", iii);
printf ("\nSALARIO LIQUIDO %.2f\n", salarioliquido);
}
}
    
    
	
  
  
  
  
