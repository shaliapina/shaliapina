#include <iostream>
using namespace std;

struct list{
	int key;
	struct list *next;
};
int main(){
	struct list *one,*head;
	head = one= new struct list[1];
	one->key=4;
	one->next=NULL;
	cout<<one->key<<endl;
	one->next = new struct list[1];
	one=one->next;
	one->key=5;
	one=head;


	return 0;

}