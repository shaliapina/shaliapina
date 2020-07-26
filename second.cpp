#include<iostream>
using namespace std;
int main(){
	int i, k, n=10; 
	char x[n], a;
	cout<<"Please, enter 10 letters \n";
	for(i=0;i<n;i++){
			cin>>x[i];
			if(x[i]=='\n'){
				--i;
			}
	}
	for(i=0;i<n;i++){
		if(x[i]<=64||x[i]>=123||(x[i]>=91&&x[i]<=96)){
			cout<<"No\n";
			return -1;
		}
	}
	for(k=0;k<n-1;k++){
		for(i=k+1;i<n;i++){
			if((x[k]>96&&x[k]<123&&x[i]>96&&x[i]<123)||(x[k]>64&&x[k]<91&&x[i]>64&&x[i]<91)){
				if(x[k]>x[i]){
					a=x[k];
					x[k]=x[i];
					x[i]=a;
			}
		}
		else if(x[k]>64&&x[k]<91&&x[i]>96&&x[i]<123){
			if(x[k]+31.1>x[i]){
					a=x[k];
					x[k]=x[i];
					x[i]=a;
		}
		}
		else if(x[i]>64&&x[i]<91&&x[k]>96&&x[k]<123){
			if(x[k]>x[i]+31.1){
					a=x[k];
					x[k]=x[i];
					x[i]=a;
		}
		}
		else{
			cout<<"Error \n";
		}
	}
}
	for(i=0;i<n;i++){
		cout<<x[i];
	}
	cout<<'\n';
	return 0;
}