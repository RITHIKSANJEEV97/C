#include <stdio.h>
#include<string.h>
int main(void) {
	unsigned char name[100000]={"Sachin Ramesh Tendulkar"}; 
	unsigned char nickname[100000]={"Little Master"};
	int runs=18426;
	float batting_average=44.83;
	int odi_matches=463;
	printf("%s \n",name);
	printf("%s \n",nickname);
	printf("%d \n",runs);
	printf("%.2f \n",batting_average);
	printf("%d \n",odi_matches);
	return 0;
}
