//Authors: Luke Wright, Aiden Libanag, & Jordan Stephenson
//Date 12/8/2024

#include <stdio.h>

#define FILE_NAME "madlib2.txt"
#define ROW_CAP 20
#define COL_CAP 100

void madlibRead(FILE* fin, int col, int row, char str[][col]);
void madlibDisplay(int col, int row, char str[][col]);
void madlibA(int col, int row, int user, char str[][col]);
void madlibN(int col, int row, int user, char str[][col]);
void madlibV(int col, int row, int user, char str[][col]);
void strCopy(char source[][COL_CAP], char dest[][COL_CAP]);

int main(){

	char madLib[ROW_CAP][COL_CAP];
	FILE* fp;
	
	fp = fopen(FILE_NAME, "r");
	
	madlibRead(fp, COL_CAP, ROW_CAP, madLib);
	
	return 0;
	
}

void madlibRead(FILE* fin, int col, int row, char str[][col]){

	for(row = 0; str[row][col] != '\0'; row++){
		for(col = 0; str[row][col] != '\n'; col++){
		
			fscanf(fin, "%c", &str[row][col]);
			
		}
	}
}

void strCopy(char source[][COL_CAP], char dest[][COL_CAP]){

	for(row = 0; source[row][col] != '\0'; row++){
		for(col = 0; source[row][col] != '\n'; col++){
		
			dest[row][col] = source[row][col];
			
		}
	}
	
	dest[row][col] = '\0';
	
}
