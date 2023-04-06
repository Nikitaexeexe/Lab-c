#include <stdio.h>
#include <stdlib.h>
#include "funcs.h"

int main() {
    system("chcp 65001");

    double a, b, c;
    printf("storona a :");
    scanf("%lf", &a);
    printf("storona b :");
    scanf("%lf", &b);
    printf("storona c :");
    scanf("%lf", &c);

    if (res(a, b, c) == true)   {
		printf("perimetr :%.2lf\n", summ(a, b, c));
    	printf("plohad :%.2lf\n", mult(a, b, c));
  } else if (res(a, b, c) == false)
    printf("treugolnika ne syshestvuet");

    return 0;
}

