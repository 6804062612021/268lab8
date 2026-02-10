#include <stdio.h>

int findMax(int num[]);
void printAr(int myAr[]);

void addthree(int number[], int pos[][5], int sizepos); //add "sizepos" in parameter

int main() {
	int number[5] = {20,50,100,99,9};
	int add[][5] = {{0,2,4},{111,222,333}};
	printf("Before Added\n");
	printAr(number);
	printf("Maximum of these number is %d\n\n",findMax(number));
	addthree(number,add,3);
	printf("After Added (number[0]+111, number[2]+222, number[4]+333)\n");
	printAr(number);
	printf("Maximum of these number is %d\n",findMax(number));
	return 0;
}

int findMax(int num[]){
	int maximum,i=0;
	maximum = num[i];

	for(i=0;i<5;i++) {
		if(num[i] > maximum)
			maximum = num[i];
	}
	return maximum;
}

void printAr(int myAr[]){
	int i;
	for(i=0;i<5;i++) printf("number[%d] : %d\n",i,myAr[i]);
}

void addthree(int number[], int pos[][5], int sizepos){
	for(int i=0 ; i<sizepos ; i++){
		number[pos[0][i]] = number[pos[0][i]] + pos[1][i];
	}
}
