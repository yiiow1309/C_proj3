#include <stdio.h>
#include <string.h>
#include <Windows.h>
int main(void)
{
        char str[3][57];
        FILE *fp = fopen("C:\Users\User\Desktop\plaintext.txt", "r");
        printf("Caesar ��ȣ��\n");
        printf("Plain Text\n");
        for (int i = 0; i < 3; i++)
        {
               for (int j = 0; j < 57; j++)
               {
                       fscanf(fp, "%c", &str[i][j]);
                       printf("%c", str[i][j]);
               }
        }
        printf("\n\n");
        printf("Plain Text Caesar ��ȣȭ\n");
        for (int i = 0; i < 3; i++)
        {
               for (int j = 0; j < 57; j++)
               {
                       str[i][j] -= 3; 
                       if (str[i][j] < 0)
                              str[i][j] += 3;
                       printf("%c", str[i][j]);
               }
        }
        printf("\n\n");
        fclose(fp);
        Sleep(3000);
        system("cls");
        fp = fopen("C:\Users\User\Desktop\plaintext.txt", "r");
        printf("�ܼ� ��ġ ��ȣ��\n");
        printf("Plain Text\n");
        for (int i = 0; i < 3; i++)
        {
               for (int j = 0; j < 57; j++)
               {
                       fscanf(fp, "%c", &str[i][j]);
                       printf("%c", str[i][j]);
               }
        }
        printf("\n\n");
        printf("Plain Text �ܼ� ��ġ ��ȣ��\n");
        for (int i = 0; i < 57; i++)
        {
               for (int j = 0; j < 3; j++)
               {
                       printf("%c", str[j][i]); //�ε��� i�� j �ٲٱ�
               }
        }
        printf("\n\n");
        fclose(fp);
        Sleep(3000);
        system("cls");
        fp = fopen("C:\Users\User\Desktop\plaintext.txt", "r");
        printf("XOR ��ȣ��\n");
        printf("Plain Text\n");
        for (int i = 0; i < 3; i++)
        {
               for (int j = 0; j < 57; j++)
               {
                       fscanf(fp, "%c", &str[i][j]);
                       printf("%c", str[i][j]);
               }
        }
        printf("\n\n");
        printf("Plain Text XOR ��ȣ��\n");
        for (int i = 0; i < 3; i++)
        {
               for (int j = 0; j < 57; j++)
               {
                       str[i][j] %= 3;
                       printf("%c", str[i][j]);
               }
        }
        printf("\n");
        fclose(fp);
        return 0;
}
