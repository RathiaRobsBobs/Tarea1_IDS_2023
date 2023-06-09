#include <iostream>
#include <cmath>

using namespace std;

float verifica_casos(int n, int k);

int main(){
	int n, k, t;
	int div;
		
	cout<<"On the first line, enter the number 't' (1=<t=<10^4) of cases. In the following lines, enter 2 integers 'n' and 'k' for each case. (2=<n=<100, 1=<k=<n)."<<endl;
	do{
		cin>>t;
		if(t<1 || t>100){
			cout<<"'t' must be between 1 and 100"<<endl;
		}
	}while(1>t || 100<t);
	
	float array1[t];
	
	for(int i=0; i<t; i++){
		do{
			fflush(stdin);
			cin>>n>>k;						
			array1[i]=verifica_casos(n, k);
			if(k<1 || k>n){
				cout<<"'k' must be greater than 1 less than 'n'."<<endl;
			}						
		}while(k<1 || k>n);			
	}
	cout<<endl;
	
	for(int i=0; i<t; i++){
		cout<<array1[i]<<endl;
	}
	
	return 0;
}



float verifica_casos(int n, int k){
	int array[n];
	int acum=1;
	float div;
	
	array[0]=1;	
	for(int i=1; i<n; i++){
		div=((i+1)/static_cast<float>(k));	
			
		if(ceil(div)>acum){	
			array[i]=1;
			acum++;
		}else{
			array[i]=0;
		}
	}
	
	if(array[n-1] == 0){
		array[n-1] = 1;
		acum++;
	}
	
	return acum;
}	









