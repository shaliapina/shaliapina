#include <stdio.h>
#include <stdlib.h>
int main(){
	int *x,*y;
	int n;
	scanf("%i",&n);
	//++*x;
	x=(int*)malloc(n*sizeof(int));
	int j;
	y=x;
	for(int i=0;i<n;++i){
		printf("a\n");
		scanf("%i",&j);
		*x=j;
		++*x;
		}
	x=y;
	for(int i=0;i<n;++i){
		printf("%i",x[i]);
	}
	printf("\n");
	free(x);
	return 0;
}