#include <stdio.h>
int main (void){
	int a[10];
	int b[10];
	int i, j;
	int count=0;
	
	for(i=0; i<10; i++){
		scanf("%d", &a[i]);
		b[i]=a[i]%42;
	}

	for(i=0; i<10; i++){
		int duplicate_found=0;
		
		for(j=0;j<i;j++){
			if(b[i]==b[j]){
				duplicate_found = 1;
            	break;
			}
		}
		if(!duplicate_found)
			count++;
	}

	printf("%d", count);
	
	return 0;
}