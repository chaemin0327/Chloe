#include <stdio.h>
#include <string.h>

int main (void){
	int a, b;
	char s[100];
	int i, j,k,len;
	
	scanf("%d", &a);
	
	for(i=0;i<a;i++){
		scanf("%d %s", &b, s);
		len=strlen(s);
		for(j=0;j<len;j++){
			for(k=0;k<b;k++)
			printf("%c",s[j]);
		}
		printf("\n");
	}
	return 0;
}