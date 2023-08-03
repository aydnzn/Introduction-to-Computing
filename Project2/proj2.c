#include <stdio.h>
#include <stdlib.h>
#include "teachingcodes.h"

int main(void) {
	TC_BEGIN;

	// == CHANGE STARTS BELOW THIS LINE ==
	int giris,i,j,k,d,max,num;
		max = 0;
		scanf("%d",&giris);
		while(giris>1){

			d=0;
			for(i=giris;i>1;i--){
				k=0;
				for(j=2;j<=i;j++){
					if(i%j==0){
						k=k+1;
					}
				}
				if(giris%i==0 && k==1){
					d=d+1;
				}
			}
			if(d>=max){
				max = d;
				num = giris;
			}
			giris = giris -1;
		}
		printf("%d %d",num,max);

	// == CHANGE STOPS ABOVE THIS LINE ==

	TC_END;
	return 0;
}
