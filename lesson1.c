#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main2(){
	int n=10;
	int p, g, b;
	for(int i=0;i<n;i++){
		printf("vveditre number]\n");
		scanf("%i",&p);
		printf("vvedite other number\n");
		scanf("%i", &g);
	printf("%i+%i=? \n",p,g);
	scanf("%i", &b);
	if(b==p+g){
		printf("Nice \n");
	}
	else{
		printf("Bad, %i+%i=%i \n", p, g, p+g);
	}
	}
	return 1;
}
int main1() {
printf("3+5=");
int i;
scanf("%i", &i);
if(i==8){
	printf("Nice \n");
}
else{
	printf("Fool \n");
}
	
	return 0;
}
int main3(){
	int x[10], i;
for(i=0;i<10;i++){
	scanf("%i",&x[i]);
	printf("Введите число %i \n", i);
}
for(i=0;i<10;i++){
	if(i%2==0){
		printf("%i \n", x[i]);
	}
}
return 0;
}
int main(){
	//randomize();
	int i, p, a, b, x[10], n=10;
	for(i=0; i<n; i++){
		int a=rand()%10+1, b=rand()%10+1;
		printf("Сколько будет %i*%i? \n", a, b);
		scanf("%i", &x[i]);
		if(x[i]==a*b){
		printf("Супер!\n");
	}
	else{
		printf("Error\n");
	}
	}
	
	return 0;
}
