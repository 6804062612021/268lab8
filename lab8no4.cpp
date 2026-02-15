#include <stdio.h>

int checkscore(char std[]);
int max3(int* s);

int main() {
    int i,score[4],top3[3];
    char ans[4][10]={
   	{'A','B','A','C','C','D','E','E','A','D'},//7
	{'D','B','A','B','C','A','E','E','A','D'},//6
	{'C','B','A','E','D','C','E','E','A','D'},//4
	{'A','B','D','C','C','D','E','E','A','D'}};//8

	for(i=0;i<4;i++){
		score[i] = checkscore(ans[i]);
		printf("std %d => %d\n", (i+1), score[i]);
	}
	max3(&score[0]);
	printf("\nTop 3 score : ");
	for(i=0;i<3;i++){
		printf("%d ", score[i]);
	}
}

int checkscore(char std[]){
	char charkeys[10]={'D','B','D','C','C','D','A','E','A','D'};
	int score=0,j;
	for(j=0;j<10;j++){
		if(std[j]==charkeys[j]) score = score+1;
	}
	return score;
}

int max3(int* s){
	int i=0,temp;
	while(i<3){
		if(*(s+i)<*(s+i+1)){
			temp = *(s+i);
			*(s+i) = *(s+i+1);
			*(s+i+1) = temp;
			i=-1;
		}
		i++;
	}
}
