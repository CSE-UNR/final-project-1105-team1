//Authors: Luke Wright, Aiden Libanag, & Jordan Stephenson
//Date 12/8/2024

#include <stdio.h>

#define FILE_NAME "madlib2.txt"
#define ROW_CAP 20
#define COL_CAP 100

void madlibRead(int col, int row, char str[][col]);
void madlibDisplay(int col, int row, char str[][col]);
void madlibA(int col, int row, int user, char str[][col]);
void madlibN(int col, int row, int user, char str[][col]);
void madlibV(int col, int row, int user, char str[][col]);

int main(){

	char madLib[ROW_CAP][COL_CAP];
	int c;
	FILE* fp;
	
	fp = fopen(FILE_NAME, "r");
	
	c = strLength(madLib);
	
	printf("%d", c);

	return 0;
	
}

void madlibRead(int col, int row, char str[][col]){

	
