#include <stdio.h>
#include <unistd.h>

int main() {
	int i;

	while (scanf("%d", &i) == 1) {
		printf("%d\n", i);
	}
	return 0;
}