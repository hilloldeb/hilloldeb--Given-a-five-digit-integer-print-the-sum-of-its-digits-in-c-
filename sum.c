#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    int sum = 0;
    int er, r;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    er = n;
    
    while ( er > 0) {
        r = er % 10;
        sum = sum + r;
        er = er / 10;
    }
    printf("%d",sum);
    return 0;
}
