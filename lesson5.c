#include <stdio.h>
//int main1(){
//char p='a',z='Z';
//printf("%c\n",(char)914);
//printf("%i\n",z);
//}
int main(){
	int n=10, i, k;
	char x[n];
	char c;
	int z;
	char p;
	//вводим 10 букв
	printf("Введите 10 букв\n");
	for(i=0; i<n; i++){
		scanf("%c", &x[i]);
		//z=(int)x[i];
		//printf("%i\n",z);
		if(x[i]<65 ||  (x[i]>90 && x[i]<97) || x[i]>122){
			printf("Error---------\n");
			//--i;
			return -1;
		}
	//если пробел, то не считаем
		//x[i] = int x[i];s
		if(x[i]=='\n') --i;		}
	//сортируем
	for(i=0; i<n-1; i++){
		for(k=i+1; k<n; k++){
			if((x[k]>=65&&x[k]<=90)&&(x[i]>=97&&x[i]<=122)){
				if(x[k]+31.01<=x[i]){
					p=x[k];
					x[k]=x[i];
					x[i]=p;
				}
			}
			else if((x[k]>=97&&x[k]<=122)&&(x[i]>=65&&x[i]<=90)){
				if(x[k]<=x[i]+31.01){
					p=x[k];
					x[k]=x[i];
					x[i]=p;
				}
			}
			else if((x[k]>=97&&x[k]<=122)&&(x[i]>=97&&x[i]<=122)){
				if(x[k]<=x[i]){
					p=x[k];
					x[k]=x[i];
					x[i]=p;
				}
			}
			else{
				if(x[k]<=x[i]){
					p=x[k];
					x[k]=x[i];
					x[i]=p;
				}
			}
		}
	}
	for(i=0; i<n; i++){
	printf("%c", x[i]);
}
	printf("\n");
	return 0;
}