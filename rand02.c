#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	
	int i;
	srand(time(NULL)); //�õ�(seed) ��, �����ų ������ ���� �ٲٰ� ���� �� = ����  
	for(i=1; i<=15; i++)
        printf("%2d: %5d\n", i, rand());
        
    return 0;
}
