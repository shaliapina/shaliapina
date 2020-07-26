#include <stdio.h>
#include <math.h>
int degree(int a, int n){
	int x[n], i, b;
	for(i=0; i<n; i++){
		x[i] = a;
	}
	b = x[0];
	if(n==0){
		b =  1;
	}
	else{
	for(i=0; i<n-1; i++){
		b = b * x[i+1];
	}
}
//printf("%i\n", b);
return b;
}
int bite(int *x, int n){
	int i;
	for(i=0; i<n; i++){
		printf("%i", x[i]);
}
return *x;
}
int main(){
	int i, a, s, k, n=5, x[n], b;
	//предлагаю ввести число
	for(i=0; i<n; i++){
		x[i] = 0;
	}
	printf("Type a positive number \n");
	scanf("%i", &a);
	//если отрицательно, то ввести новое число
	if(a<0){
		while(a<0){
		printf("Type a POSITIVE number \n");
		scanf("%i", &a);
	}}
	//перевожу в двоичную систему
	i=n;
	while((a>0)&&(i>=0)){
		i=i-1;
		x[i] = a%2;
		a = (a - a%2)/2;
	}
	bite(x, 5);
	//сохраняю индекс первого значимого числа в переменной
	i=-1;
	do{
		i++;
		s = k=i;
	}while(x[i]==0);
	printf("\n");
	//делаю реверс
	i=n-1;
	while(i>k){
		a = x[k];
		x[k] = x[i];
		x[i] = a;
		i=i-1;
		k++;
	}
	bite(x, 5);
	printf("\n");
	//перевожу новое число в десятичную систему
	i=n;
	a = 0;
	do{
		i=i-1;
		a = a + x[i]*degree(2, (n-1-i));
	}while(i!=s);
	printf("%i\n", a);
	printf("Meow!\n");
	printf("\n");
	return 0;
}
