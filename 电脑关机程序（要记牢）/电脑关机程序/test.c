#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
	char input[20] = { 0 };
	//shutdown -s -t 60   ϵͳ��60s�ڹػ�
	//system()--ִ��ϵͳ�����
	system("shutdown -s -t 60");
	while (1)
	{
		printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n������>:");
		scanf("%s", input);

		if (strcmp(input, "������") == 0)//�Ƚ������ַ���--strcmp()
		{
			system("shutdown -a");//ȡ���ػ�
			break;
		}
	}

	return 0;
}