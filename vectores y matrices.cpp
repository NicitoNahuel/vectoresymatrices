#include <stdio.h>
int opcion;
int vector[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
int matriz2a[2][2], matriz2b[2][2];
int numeros[10];
int matriz3[3][3], adjunta[3][3];
int i, dia, mes, prom,acum,determinante, count,dia_año;
int dias_faltan=365;
main ()
while (1)
{
	printf ("ingrese el numero de ejercicio que quiere ver");
	scanf ("%d", &opcion);
	i=0;
	switch(opcion)
	{
		case 1:{
			break;
		}
		
		case 2:{
			break;
		}
		//Un programa que almacene en una tabla el número de días que tiene cada mes (su­pon­dremos que es un año no bisiesto), pida al usuario que le indique un mes (1=enero, 12=diciembre) y muestre en pantalla el número de días que tiene ese mes.
		case 3:{
			mes=0;
		//pregunta que mes
 		  printf("Un programa que almacene en una tabla el número de días que tiene cada mes (su­pon­dremos que es un año no bisiesto), pida al usuario que le indique un mes (1=enero, 12=diciembre) y muestre en pantalla el número de días que tiene ese mes.\n");
		  printf("Ingrese un mes (1-12): \n ");
		  scanf("%d", &mes);
		//dice cuantos dias tiene ese mes
		  printf("El mes %d tiene %d días.\n",i+1, vector[i+1]);	
			break;
		}
		
		case 4:{
			mes=0; dia=0;
		//Un programa que almacene en una tabla el número de días que tiene cada mes (año no bisiesto), pida al usuario que le indique un mes (ej. 2 para febrero) y un día (ej. el día 15) y diga qué número de día es dentro del año (por ejemplo, el 15 de febrero sería el día número 46, el 31 de diciembre sería el día 365).
		  printf ("Un programa que almacene en una tabla el número de días que tiene cada mes (año no bisiesto), pida al usuario que le indique un mes (ej. 2 para febrero) y un día (ej. el día 15) y diga qué número de día es dentro del año (por ejemplo, el 15 de febrero sería el día número 46, el 31 de diciembre sería el día 365).\n");
		  printf("Ingrese el dia y el mes: \n ");
		  scanf("%d, %d", &mes, &dia);
		
		  //suma lo dia de los meses que pasaron
		  for (i=0; i<mes-1; i++) 
		  {dia_año=dia_año+vector[i];}
		
		  //sumar los dias que pasaron del me
		  dia_año=dia_año+dia;
		
		  printf("es el dia numero %d del año.\n", num_dia);
			break;
		}
		
		case 5:{
				//A partir del programa que almacenaba en una tabla el número de días que tiene cada mes, crear otro que pida al usuario que le indique la fecha, detallando el día (1 al 31) y el mes (1=enero, 12=diciembre), como respuesta muestre en pantalla el número de días que quedan hasta final de año.
			printf ("A partir del programa que almacenaba en una tabla el número de días que tiene cada mes, crear otro que pida al usuario que le indique la fecha, detallando el día (1 al 31) y el mes (1=enero, 12=diciembre), como respuesta muestre en pantalla el número de días que quedan hasta final de año.\n");
		  mes=0; dia=0;
		  printf("Ingrese el día y mes en numeros: \n");
		  scanf("%d, %d", &dia, &mes);
		
		  //que dia del me es
		  for (i=0; i<mes+1; i++) 
		  {dia_año=dia_año+vector[i];}
		
		  //sumar los dias que pasaron del mes
		  dia_año=dia_año+dia;
		  //a los dias del año le resta lo dias que ya pasaron
		  dias_faltan= dias_faltan - dia_año;
		  
		  printf("quedan %d dias de tortura.\n", dias_restantes);

			break;
		}
		
		case 6:{
			printf ("Crear un programa que pida al usuario 10 números enteros y luego los muestre en orden inverso (del último al primero), usando for \n");
			// Pedir al usuario que ingrese 10 números enteros
		    for (i=0; i<10;i++) 
			{
		        printf("Ingrese el número %d: ", i+1);
		        scanf("%d", &numeros[i]);
		    }
		    
		    // Mostrar los números en orden inverso
		    printf("al revez seria:\n");
		    for (i=9;i>=0;i--) 
			{printf("%d ", numeros[i]);}
			break;
		}
		case 7:{
			Printf ("Crear un programa que pida al usuario 10 números reales, calcule su media y luego muestre los que están por encima de la media.\n");
			// Pide los numeros
			for (i=0;i<10;i++)
			 	{
				    printf("Ingrese el número %d: ", i+1);
				    scanf("%d", &numeros[i]);
				    acum = acum+numeros[i];
				}
			
			    //Calcular la media
			    acum=acum/10;
			    printf ("la media de %d", acum)
			
			    // Mostrar los números por encima de la media
			    printf("Los numeros superiore a la media son: \n", media);
			    for (i=0;i<10;i++) 
					{
			        if (numeros[i]>acum) 
					{printf("|%d|", numeros[i]);
			        }
			    }
			break;
		}
		
		case 8:{
			    // pide los 10 numeros
			    printf ("Un programa que pida al usuario 10 números enteros y calcule (y muestre) cuál es el mayor de ellos.\n");
			    printf("Ingrese 10 numeros enteros:\n");
			    for(i=0;i<10;i++) 
				{
			        printf("ingrese el numero %d: ", i+1);
			        scanf("%d", &numeros[i]);
			    }
			    
			    //bucar el mayor
			    for(i=0;i<10;i++) 
				{
			        if(numeros[i]>mayor || i==0) 
					{
			            mayor=numeros[i];
			        }
			    }
			    
			    //mostrar el mayor
			    printf("El numero mayor es: %d\n", mayor);
			    
			break;
		}
		
		case 13:{
				printf ("Un programa pida datos al usuario los datos de una matriz de 2x2 y muestra su traspuesta (el resultado de intercambiar filas por columnas). \n");
			    i=0;j=0;
			
			    // pido la matriz
			    for(i=0;i<2;i++)
				{
			        for(j=0;j<2; j++) 
					{
			            printf("ingrese el numero %d %d:\n",i,j);
						scanf("%d", &matriz2a[i][j]);
			        }
			    }
			
			    //saca la traspuesta
			    for(i=0;i<2;i++) 
				{
			        for(j=0;j<2;j++)
					{matriz2b[j][i]=matriz2a[i][j];}
			    }
			
			    //muestra la traversa
			    for(i=0;i<2;i++) 
				{
			        for(j=0;j<2;j++)
					{
			            printf("%d ", matriz2b[i][j]);
			        }
			    printf("\n");
			    }

			break;
		}
		case 14:{			  
			  printf ("Un programa que pida al usuario los datos de una matriz de 3x3, y muestre su determinante. \n");
			  //pido la matriz
			  for (int i = 0; i < 3; i++) 
			  {
			    for (int j = 0; j < 3; j++) 
				{
				  printf("Ingrese el numero %d, %d:\n",i,j);
			      scanf("%d", &matriz3[i][j]);
			    }
			  }
			  
			  // Calculamos el determinante
				count= matriz3[0][0] * (matriz3[1][1] * matriz3[2][2] - matriz3[1][2] * matriz3[2][1]) - matriz3[0][1] * (matriz3[1][0] * matriz3[2][2] - matriz3[1][2] * matriz3[2][0]) + matriz3[0][2] * (matriz3[1][0] * matriz3[2][1] - matriz3[1][1] * matriz3[2][0]);
			  
			  // Mostramos el determinante
			  printf("la determinante es %d\n", count);
			  
			break;
		}
		case 15:{ 
	    printf ("Un programa que pida al usuario los datos de una matriz de 3x3, y calcule y muestre su matriz adjunta.\n");
		  //Pido la matriz
		  for (int i=0;i<3;i++)
		  {
		    for (int j=0;j<3;j++) 
			{
			  printf("Ingresa el numero %d %d: \n", i, j);
		      scanf("%d", &matriz3[i][j]);
		    }
		  }
		  
		  //calculo la adjunta
		  adjunta[0][0] = matriz3[1][1]*matriz3[2][2]-matriz3[2][1]*matriz3[1][2];
		  adjunta[0][1] = -1*(matriz[1][0]*matriz[2][2]-matriz[2][0]*matriz[1][2]);
		  adjunta[0][2] = matriz[1][0]*matriz[2][1]-matriz[2][0]*matriz[1][1];
		  adjunta[1][0] = -1*(matriz[0][1]*matriz[2][2]-matriz[2][1]*matriz[0][2]);
		  adjunta[1][1] = matriz[0][0]*matriz[2][2]-matriz[2][0]*matriz[0][2];
		  adjunta[1][2] = -1*(matriz[0][0]*matriz[2][1]-matriz[2][0]*matriz[0][1]);
		  adjunta[2][0] = matriz[0][1]*matriz[1][2]-matriz[1][1]*matriz[0][2];
		  adjunta[2][1] = -1*(matriz[0][0]*matriz[1][2]-matriz[1][0]*matriz[0][2]);
		  adjunta[2][2] = matriz[0][0]*matriz[1][1]-matriz[1][0]*matriz[0][1];
		  
		  //muestra la adjunta
		  printf("La adjunta es:\n");
		  for (i=0;i<3;i++) 
		  {
		    for (j=0;j<3;j++) 
			{printf("|%d|", adjunta[i][j]);}
		    printf("\n");
		  }
			break;
		}
		
		case 16:{
			printf ("Un programa que pida al usuario los datos de una matriz de 3x3, y calcule y muestre su matriz inversa.\n");
			 printf("Ingrese los valores de la matriz 3x3:\n");
		    
		    //Pide la matriz
		    for(i=0; i<3; i++) 
			{
		        for(j=0; j<3; j++)
				{
		            printf("\n ingrese el numero %d %d: ", i, j);
		            scanf("%d", &matriz3[i][j]);
		        }
		    }
		    
		    //la determinante
		    deteminante=matriz3[0][0]*(matriz3[1][1]*matriz3[2][2]-matriz3[2][1]*a[1][2]) - matriz3[0][1]*(matriz3[1][0]*matriz3[2][2]-matriz3[1][2]*matriz3[2][0]) + matriz3[0][2]*(matriz3[1][0]*matriz3[2][1]-matriz3[1][1]*matriz3[2][0]);
		    
		    //si la determinante es 0 la inversa es nula)
		    if (determinante==0) {
		        printf("La matriz no tiene inversa.\n");
		        return 0;
		    } 
		    
		    //hace la inversa (uso adujunta para no declarar otra variable)
		    adjunta[0][0] = (matriz3[1][1]*matriz3[2][2]-matriz3[1][2]*matriz3[2][1])/determinante;
		    adjunta[0][1] = (matriz3[0][2]*matriz3[2][1]-matriz3[0][1]*matriz3[2][2])/determinante;
		    adjunta[0][2] = (matriz3[0][1]*matriz3[1][2]-matriz3[0][2]*matriz3[1][1])/determinante;
		    adjunta[1][0] = (matriz3[1][2]*matriz3[2][0]-matriz3[1][0]*matriz3[2][2])/determinante;
		    adjunta[1][1] = (matriz3[0][0]*matriz3[2][2]-matriz3[0][2]*matriz3[2][0])/determinante;
		    adjunta[1][2] = (matriz3[1][0]*matriz3[0][2]-matriz3[0][0]*matriz3[1][2])/determinante;
		    adjunta[2][0] = (matriz3[1][0]*matriz3[2][1]-matriz3[2][0]*matriz3[1][1])/determinante;
		    adjunta[2][1] = (matriz3[2][0]*matriz3[0][1]-matriz3[0][0]*matriz3[2][1])/determinante;
		    adjunta[2][2] = (matriz3[0][0]*matriz3[1][1]-matriz3[1][0]*matriz3[0][1])/determinante;
		    
		    //muestra la inversa
		    printf("La inversa es:\n");
		    for(i=0;i<3;i++) 
			{
		        for(j=0;j<3;j++) 
				{
		            printf("|%d|", inv[i][j]);
		        }
		        printf("\n");
		    }
			break;
		}
		case 17:{
			printf ("Un programa que use una matriz de 3x4 para resolver un sistema de 3 ecuaciones con 3 incógnitas usando el método de Gauss (hacer ceros por debajo de la diagonal principal para luego aplicar sustitución regresiva).\n");
			break;
		}
		case 18:{
			printf ("Un programa que, a partir de los datos prefijados de los días de cada mes, diga qué meses tienen 30 días. Se deberá mostrar el número de cada mes, pero empezando a contar desde 1 (abril será el mes 4).\n")
		    printf("Los meses con 30 dias son:\n");
		    
		    for(i=0; i<12; i++) 
			{
		        if (vector12[i]==30) 
				{printf("%d tiene 30 dias \n", i+1);}
		    }
			break;
		}
	}
}

