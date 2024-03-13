#include <stdio.h>

int main(){
	int vet[9], teste[9];
	for(int i = 0 ; i<9 ; ++i){
		scanf("%d", &vet[i]);
	}
		
	for(int i = 0 ; i<9 ; ++i){
		if(vet[i] == 2 || vet[i] == 3 || vet[i] == 5 || vet[i] == 7 || vet[i] == 11 || vet[i] == 13 || vet[i] == 17 || vet[i] == 19 || vet[i] == 23 || vet[i] == 27 || vet[i] == 29){
			printf("Vet[%d] = %d\n", i, vet[i]);
		}
	}
	
	return 0;
}
