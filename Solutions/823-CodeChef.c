#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int m,n,k; scanf("%d%d%d", &m,&n,&k);
	    (m>n*k) ? printf("YES\n") : printf("NO\n");
	}
	return 0;
}