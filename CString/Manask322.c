#include <stdio.h>
#include <string.h>
int main()
{
	char man[20]="nitk is best";
	int l=strlen(man);
	puts(man);
	printf("\n");
	for(int i=l;i>-1;i--){
		printf("%c",man[i] );}
	printf("\n");
	return 0;
}