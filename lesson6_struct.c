#include<stdio.h>
#include<stdlib.h>
struct first{
	int key;
	struct first *next;
};
void printer(struct first *start){
		while(start!=NULL){
		printf("%i\n", start->key);
		start=start->next;
	}
}
void deleter(struct first *start){
	struct first *tmp;
		while(start->key!=3){
		tmp=start;
		start=start->next;
	}
	tmp->next=start->next;
	free(start);
}
int main(){
	struct first *name, *head,*tmp;
	//int x;
	int *x;//int*
	//*int



	x=(int *)malloc(10*sizeof(int));
	head = name = (struct first*)malloc(sizeof(struct first));
	name->key=1;
	name->next=NULL;
	name->next = (struct first*)malloc(sizeof(struct first));
	name = name->next;
	name->key=2;
	name->next=NULL;
	for(int i=0;i<8;i++){
		name->next = (struct first*)malloc(sizeof(struct first));
		name = name->next;
		name->key=3+i;
		name->next=NULL;
	}
	name=head;
	printer(head);
	deleter(head);
	printer(head);



	//head=head->next;
	//printer(head);

}