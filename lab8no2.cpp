#include <stdio.h>

int checkscore(char std[]);
int no1stat(char first[][10]);

int main() {
    int i;
    char ans[8][10]={
   	{'A','B','A','C','C','D','E','E','A','D'},//7
	{'D','B','A','B','C','A','E','E','A','D'},//6
	{'E','D','D','A','C','B','E','E','A','D'},//5
	{'C','B','A','E','D','C','E','E','A','D'},//4
	{'A','B','D','C','C','D','E','E','A','D'},//8
	{'B','B','E','C','C','D','E','E','A','D'},//7
	{'B','B','A','C','C','D','E','E','A','D'},//7
	{'E','B','E','C','C','D','E','E','A','D'}};//7

	for(i=0;i<8;i++) printf("std %d => %d\n", (i+1), checkscore(ans[i]));
	printf("There are %d students who answered question 1 correctly",no1stat(ans));
}


int checkscore(char std[]){
	char charkeys[10]={'D','B','D','C','C','D','A','E','A','D'};
	int score=0,j;
	for(j=0;j<10;j++){
		if(std[j]==charkeys[j]) score = score+1;
	}
	return score;
}

int no1stat(char first[][10]){
	int num=0,i;
	for(i=0;i<8;i++){
		if(first[i][0]=='D') num = num+1;
	}
	return num;
}
