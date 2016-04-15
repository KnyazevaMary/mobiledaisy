#include <stdio.h>
int main(){
int dayn;
	printf("Введите количество дней\n");
	scanf("%d", &dayn);
	int year=dayn/365;
	int month=(dayn%365)/30;
	int day=((dayn%365)%30);
	printf("Количество лет: %d \nКоличество месяцев: %d \nКоличество дней: %d \n", year, month, day);
}
