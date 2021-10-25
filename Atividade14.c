#include <stdio.h>

int main(){
	
	float peso,altura,imc;
	
	printf("Vamos calcular o seu IMC- indice de massa corporea \n\n");
	
	printf("Vou precisar de algumas informacoes o seu peso e sua altura : ");
	scanf("%f %f",&peso,&altura);
	
	imc = peso / (altura * altura);
	
	if(imc < 20){
		printf("abaixo do peso ideal");
	}else if(imc >=20 && imc<25){
		printf("Peso normal");
	}else if(imc >=25 && imc < 30){
		printf("sobre peso");
	}else if(imc >=30 && imc <40 ){
		printf("obeso");
	}else{
		printf("obesidade morbida");
	}
	return 0;
}
