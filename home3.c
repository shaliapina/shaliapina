#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	int n=10, i;
	double a, k, b, c;
	double p;
	double x[n];
srand(time(NULL));
for(i=0; i<n; i++){
	
	p=rand()%10;
	x[i]=rand()%10+p/10;
}
printf("Введите число\n");
scanf("%lf", &a);
for(i=0;i<n; i++){
	printf(" %.1lf ", x[i]);
}
printf("\n");
b=x[0];
c=x[0];
if(a==0){
	for(i=0; i<n; i++){
		if(x[i]>b){
			b=x[i];
		}

	}
	a=b;
	printf("%lf\n",a);
}
else if(a==1){
	b=x[0];
	for(i=0; i<n; i++){
		if(x[i]<b){
			b=x[i];
		}

	}
	a=b;
	printf("%lf\n",a);
}
else if(a==2){
	b=x[1];
	for(i=1; i<n; i=i+2){
		if(x[i]>b){
			b=x[i];
		}

	}
	a=b;
	printf("%lf\n",a);
}
else if(a==3){
	b=x[0];
	for(i=0; i<n; i=i+2){
		if(x[i]<b){
			b=x[i];
		}

	}
	a=b;
	printf("%lf\n",a);
}
else if(a==4){
	b=x[0];
	for(i=1; i<n; i=i+2){
		if(x[i]>b){
			b=x[i];
		}
	}
	for(i=0; i<n; i=i+2){
		if(x[i]<c){
			c=x[i];
		}
	}
	a=b+c;
	printf("%lf\n",a);
}
else if(a==5){
	b=0;
	for(i=0; i<n; i++){
		if(x[i]<0){
			x[i]=0-x[i];
		}
		b=b+x[i];
	}
	a=b;
	printf("%lf\n", a);
}
else{
	printf("Mistake\n");
}
return 0;
}