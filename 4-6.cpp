#include <stdio.h>
int main(void){
     int coin,coin1,coin2;
     int c500, c100, c50, c10;
     printf("��ȯ�� �ݾ��� �Է����ּ��� >> ");
     fflush(stdout);
     scanf("%d", &coin);
	 c500 = coin/500; 
	 coin = coin%500; 
	 if(c500>1)
	 {
	 c500=c500-1;
     }
	 coin=coin+500;
	 c100 = coin/100; 
	 coin %= 100;     
     if(c100>1){
     	c100=c100-1;
	 }
     coin=coin+100;
     c50 = coin/50;
     coin %= 50;
	if(c50>1){
		c50=c50-1;
	}
	coin=coin+50;
     c10 = coin/10;    
     printf("���� �� ¥�� ����  : %d��\n", c500);
     printf("�� �� ¥�� ����   : %d��\n", c100);
     printf("���� �� ¥�� ����   : %d��\n", c50);
     printf("�� �� ¥�� ����   : %d��\n", c10);
     return 0; 
}
