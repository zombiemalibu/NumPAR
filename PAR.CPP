#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{

 int i=1;
 int j=0;
 int valor=0;
 int bandera=0;
 int arreglo[999];
 int contador;
 int par_encontrado=0;
 srand(time(NULL));

 for(j=0;j<=999;j++)
  {
  arreglo[j]=1+rand()%(15-1);
  }

 printf("Programa Buscador de Numero Par en un Arreglo");
 printf("\n\nCondiciones Necesarias:");
 printf("\n\n1.El siguiente número a el debe ser impar \n2.La suma del numero anterior y posterior, deben de dar el numero que se encuentra posicionado \n3.El resultado de la division entre 2 del numero par analizado es igual al numero siguiente siguiente\n");

 while(par_encontrado==0 && arreglo[i+2]!=999)
     {
     if(arreglo[i]%2==0 && arreglo[i+1]%2!=0 && arreglo[i-1]+arreglo[i+1]==arreglo[i] && arreglo[i]/2== arreglo[i+2])
        {
         par_encontrado=arreglo[i];
         valor=arreglo[i];
         printf("\n\nNumero Par Encontrado: %d ",par_encontrado);
         printf("\n\n|%d| |%d| |%d| |%d| ",arreglo[i-1],arreglo[i],arreglo[i+1],arreglo[i+2]);
         }
      i++;
     }
 contador=1;https://l.messenger.com/l.php?u=https%3A%2F%2Fz-1-cdn.fbsbx.com%2Fv%2Ft59.2708-21%2F17119515_10154922647250731_3110759716305764352_n.CPP%2FPAR.CPP%3Foh%3D58c958ed4ef32e50d0e77f205a639eda%26oe%3D58C55D17%26dl%3D1&h=ATPockGQLHefFtwQk6cj8lGi4q5ZLNnKXhNzksRASHmOjxHXbX5GTvlgI9gxuOlcopYkAE6PlTPY2kYOaQs1WpyX_ieqX_8DsxleRBZIJcl-QzlpIPtVAM9ubokf7PF4
 while(bandera!=1 && par_encontrado!=0)
	{
   valor=valor/2;
   contador=contador+1;
	if( valor%2!=0 || valor==1)
   	{
      bandera=1;
      printf("\nNumero de veces divisible entre 2: %d \n",contador-1);
      }
   }

 if(par_encontrado==0)
 	{
   printf("\n\nNumero Par NO Encontrado ... Intentar de Nuevo !!! ");
   }

  system("PAUSE");
}
