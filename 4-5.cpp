#include<stdio.h>
int main(void)
{
	
	
    double total, rate, investment; 
    int year, n;   
    n =1;
    printf("������ �Է�");
    scanf("%lf", &investment);
    printf("������ �Է�");
    scanf("%lf", &rate);
    printf("�Ⱓ(��)�� �Է�");
    scanf("%d", &year);
    total = investment;
    rate = rate / 100.0; 
    printf("����	������\n");
    while(year>0)
{
    total = total *(1+rate);
    year--;
    n++;
}
    printf("%d	%lf\n",n-1, total);
    return 0;
}
