	#include <stdio.h>
int main(){
	int day=27, month=12, A;
	A=day;
	day=month;
	month=A;
	printf("%d/%d\n", day, month);
}
