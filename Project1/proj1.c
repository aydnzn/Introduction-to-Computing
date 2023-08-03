/*
 ============================================================================
 Name        : proj1.c
 Author      : Aydin Uzun
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char story[1000]="";
	char stopstring[]="End of story.";
	int res1;
	res1 = strlen(stopstring);
	int res2,res3,res4,res5,res6;
	int a=res1;
	char line[100];
	char nline[100];
	fgets(line,100,stdin);
	strcpy(story,line);
	while(1){
		fgets(nline,100,stdin);
		strcat(story,nline);
		int i;
		int counter=0;
		for(i=0;i<res1;i++){
			if(nline[i]==stopstring[i]){
				counter++;
			}
		}
		if(counter==res1){
			break;
		}

	}

	char name[20];
	char replacename[20];
	gets(name);
	gets(replacename);
	res2= strlen(story);
	res3= strlen(name);
	res4 = strlen(replacename);
	int i,j,s;

	int k;
	for(i=0;i<res2;i++){
		if(name[0]!=story[i]){
			printf("%c",story[i]);
		}

		if(name[0]==story[i]){
			k=i+1;
			int c=1;
			j=1;
			for(j=1;j<res3;j++){
				if(story[k]==name[j]){
					c++;
				}
				k++;
			}

			if(c==res3){
				s=i;
				int as;
				for(as=0;as<res4;as++){
					printf("%c",replacename[as]);
				}
				i=i+res3-1;
			}





		else{
			printf("%c",story[i]);
		}
		}
	}
}