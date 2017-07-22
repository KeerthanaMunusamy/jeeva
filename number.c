#include <stdio.h>

int main(void) {
	long long n;
	int count;
	scanf("%lld",&n);
	 while(n!=0)
	 {
	 	n=n/10;
	 	count++;
	 }
	printf("%d",count);

return 0;
}
