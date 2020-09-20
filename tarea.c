#include <stdio.h>

 void capturar_enteros()
 {
 	int enteros[5];
 	float promedio;
 	int i,suma=0;
 	  for( i=0;i<5;i++)
 	   {
 	   	  scanf("%d",&enteros[i]);
	   }
	   for(i=0;i<5;i++)
 	   {
 	   	  printf("%d  ",enteros[i]);
	   }
	   for(i=0;i<5;i++)
 	   {
 	   	  suma=suma+enteros[i];
	   }
	   printf("\n");
	   printf("Suma: %d \n",suma);+
	   printf("Promedio: %f \n",suma/5.0);
 }
 
  void mostrar(int n,char cadena[] )
 {
 	int i;
 	for(i=0;i<n;i++)
 	{
 		printf("%s",cadena);
	 }
 }
 int main(){
 	char op;
 	char cadena[20];
 	int n;
 	do
 	{
 		printf("1) Capturar enteros\n");
 		printf("2) Mostrar cadena n veces \n");
 		printf("3) Agregar personajes\n");
 		printf("4) Mostrar personajes\n");
 		printf("0) Salir \n");
 		scanf("%c",&op);
 		fflush(stdin);
 		
 		switch(op)
 		{
 			case '1':
 				capturar_enteros();
 			break;	
 			case '2':
 				printf("Escribe una cadena de hasta 20 caracteres");
 				fflush(stdin);
 				fgets(cadena,sizeof(cadena),stdin);
 				printf("n: ");
 				scanf("%d",&n);
 				mostrar(n,cadena);
 			break;
 			
 		
		 } 
 	
 	 fflush(stdin);
	 } while(op!='0');
	
 }
