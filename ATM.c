#include <stdio.h>

int main() {
	int withdraw;
	double balance;
	scanf("%d%lf", &withdraw, &balance);
	if(withdraw % 5 == 0 && balance >= (withdraw + 0.50))
	{
	    printf("%lf\n", balance - withdraw - 0.50);
	}else{
	    printf("%lf\n", balance);
	}
	return 0;
}
