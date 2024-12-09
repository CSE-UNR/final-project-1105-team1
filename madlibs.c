//Authors: Luke Wright, Aiden Libanag, & Jordan Stephenson
//Date 12/8/2024

#include <stdio.h>

#define FILE_NAME "madlib2.txt"
#define ROW_CAP 17
#define COL_CAP 17

void madlibRead(FILE* fin, char str[][COL_CAP], char ind[]);
void madlibDisplay(char str[][COL_CAP]);
int madlibA(char user[], char str[][COL_CAP]);
void strCopy(char source[], char dest[]);

int main(){

	char madLib[ROW_CAP][COL_CAP], User[COL_CAP], prompt[COL_CAP];
	FILE* fp;
	
	fp = fopen(FILE_NAME, "r");
	
	madlibRead(fp, madLib, prompt);
	
	for(int index = 0; index < 7; index++){
	
		switch(prompt[index]){
		
			case 'A':
				printf("Please enter an adjective: ");
				scanf("%s", User);
			break;
			case 'V':
				printf("Please enter a verb: ");
				scanf("%s", User);
			break;
			case 'N':
				printf("Please enter a noun: ");
				scanf("%s", User);
			break;
			madlibA(User, madLib);
		}
		
		
	}
	
	madlibDisplay(madLib);
	
	fclose(fp);
	
	return 0;
	
}

void madlibRead(FILE* fin, char str[][COL_CAP], char ind[]){

	for(int row = 0; row < ROW_CAP; row++){
		for(int col = 0; col < COL_CAP; col++){
		
			fscanf(fin, "%c", &str[row][col]);
			
			if(str[row][col] == '\n'){
	
				str[row][col] = ' ';
			}
			
			if(str[row][col] == 'A' || str[row][col] == 'N' || str[row][col] == 'V'){
			
				ind[row] = str[row][col];
			
			}
		}
	}
}

void strCopy(char source[], char dest[]){

	int index;

	for(index = 0; source[index] != '\0'; index++){
	
		dest[index + 1] = source[index];
		
	}
	
	//dest[index + 1] = ' ';
	//dest[1] = ' ';
	
}

void madlibDisplay(char str[][COL_CAP]){

	for(int row = 0; row < ROW_CAP; row++){
		for(int col = 0; col < COL_CAP; col++){
			printf("%c", str[row][col]);
		}
	}
}	

int madlibA(char user[], char str[][COL_CAP]){

	int count = 0;

	for(int row = 0; row < ROW_CAP; row++){
		for(int col = 0; col < COL_CAP; col++){
			if(str[row][col] == 'A' || str[row][col] == 'N' || str[row][col] == 'V'){
				strCopy(user, str[row]);
				
				return 0;
			}
		}
	}
	return 0;
}
