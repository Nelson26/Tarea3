//Dada los siguientes operadores:
//+,(),++,∗,−,(),−,−,∗,/,+,−−
//Desarrolle una expresión utilizando variables y constantes con el requisito que el resultado de 16.
//Nelson Andres Gonzalez Guerra

#include <stdio.h>
int main(){
	int total=0;
	int numero=1;            //partire con un numero constante definido al principio.... en este caso el numero 1
	total=(numero*-1);       //total=-1
	total++;                 //total=0
	total=total+22;          //total=22
	total--;                 //total=21
	total=total-3;           //total=18
	total=total/2;           //total=9
	total=total-1;           //total=8
	total=(total*3)+6;       //total=24+6=30
	total=total-14;          //total=30-14=16
	printf("%d\n",total);    //imprimo total
	return 0;
}