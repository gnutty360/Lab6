#include <stdio.h>
#include <string.h>

void tester(int* c, int k) {
	printf("x[%d] = %d\n", k, c[k]);
	c[10000]=1309;
}

int main(int argc, char* argv[]) {
	int i = 0, j, k;
	int x[10001];

	while(i < 10001){
		x[i] = i;
		i++;
	}

	printf("Enter an integer between 0 to 10000: ");
	fflush(stdout);
	scanf("%d",&k);

	tester(x, k);
}
