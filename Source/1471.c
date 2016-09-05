#include <stdio.h> 
#include <stdlib.h>

int main() {
	
	int n,r,i,a;
	while (scanf("%d %d",&n,&r) != EOF){
		bool v[10000]={false};
		for (i=0;i<r;i++){
			scanf("%d",&a);
			v[a]=true;}
		for (i=1;i<=n;i++)
			if (v[i]==false)
				printf("%d ",i);
		if (n==r)
			printf("*");
		printf("\n");}
	return 0;}