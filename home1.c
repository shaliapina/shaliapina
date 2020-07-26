#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int pepe(){
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

int main(){
	int i, k, a, x[10], n=10; 
	for(k=0; k<n; k++){
		printf("Write a number\n");
		scanf("%i", &x[k]);
	}
		for(k=0; k<n-1; k++){
			for(i=k+1; i<n;i++){
			if(x[k]>x[i]){
				a=x[k];
				x[k]=x[i];
				x[i]=a;

			}
	}
}
	for(i=0; i<n; i++){
		printf("%i ",x[i]);
	}
	
	//for(i=0; i<n; i++){
	//if(x[0]>x[i]){
			//printf[x[0]]
			//printf("%i\n", x[i]);
		//}
		
	return 0;
}