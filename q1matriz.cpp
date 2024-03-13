#include <stdio.h>

int main(){
	int m[3][5];
	
	for(int i = 0 ; i<3 ; ++i){
		for(int j = 0 ; j<5 ; ++j){
			scanf("%d", &m[i][j]);
		}
	}
	
	printf("Essas sao as Matrizes entre 15 e 20:\n");
	for(int i = 0 ; i<3 ; ++i){
		for(int j = 0 ; j<5 ; ++j){
			if(m[i][j] >= 15 && m[i][j] <= 20){
				printf("M[%d][%d] = %d\n", i, j, m[i][j]);
			}
		}
	}
	
	return 0;
}
