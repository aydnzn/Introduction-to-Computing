#include <stdio.h>
#include <stdlib.h>
#include "teachingcodes.h"

/*
Write a program which reads a sentence as a string, and a word as a string. 
Then the program should exclude this word from the sentence if the sentence contains the word, 
then print the new version to the screen. Assume no punctuation will occur, and every letter is 
lower case.
*/
int strlength(char ch[]){
	int count=0;
	while(ch[count]!='\0'){
		count++;
	}

	return count;

}

int main(void) {
	TC_BEGIN;
	char sent[200];
	char word[100];
	gets( sent );
	gets( word );
	int i=0,j=0,k,s;
	int res,res2,a,b,count=0;

	res= strlength( sent );
	res2=strlength( word );
	for(i=0;i<res;i++){
		for(j=0;j<res2;j++){
			if(sent[i]==word[j]){
				a=i;
				b=j;
				for(k=a;k<a+res2;k++){
					if(sent[k]==word[b]){

						count++;
					}
					else
						break;
					b++;
				}

			}
			if(count==res2){
				s=a;

			}

			count=0;


		}

	}

	for(i=0;i<s-1;i++){
		printf("%c",sent[i]);
	}

	printf(" ");

	for(i=s+1+res2;i<res;i++){
		printf("%c",sent[i]);
	}




	TC_END;
	return 0;
}
