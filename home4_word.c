#include<stdio.h>
int main(){
	char str[250], c; 
	int len, i=0;
	//запоминаю слово
	while((c=getchar())!=EOF){
	//если энтер, то - к следующему алгоритму
		if(c=='\n')break;
		else{
			str[i]=c;
			i++;
			len = i;
		}
	}
	char hist[len];
	int count=0, a=1;
	int flag=0;
	//считываю предложение
	while((c=getchar())!=EOF){
	//если буква совпала, то запоминаю ее в  hist и считаю кол-во совпадений в count
		//printf("%c", str[i]);

		if(c==str[count]&&flag==0){
			hist[count]=c;
			count++;
		}
	//если набрали нужное количество совпадений
		else if(count==len){
	//если далее следует пробел, или., то печатаем число
			if(c==' ' || c==',' || c=='.'|| c=='\n'){
				printf("-%i-", a);
				printf("%c", c);
				a++;
				count=0;
			}
	//если после совпадений слово продолжается, то печатаем слово
			else{
				for(count=0; count<len; count++){
					printf("%c", hist[count]);
				}
				printf("%c", c);
				count = 0;
			}
		}
	//если буквы не совпали, то печатаем буквы
		else{
			if(c==' '|| c==',' || c=='.' ){
				flag=0;
			}
			else
			{
				flag=1;
			}
			if(count!=0){
				for(int k = 0;  k<count; k++){
				printf("%c", hist[k]);
			}
			printf("%c", c);
			count=0;
			}
				else{
				printf("%c", c);
					}

				}
	}
	return 0;
}