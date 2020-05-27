#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	
	int i;
	srand(time(NULL)); //시드(seed) 값, 실행시킬 때마다 값을 바꾸고 싶을 때 = 랜덤  
	for(i=1; i<=15; i++)
        printf("%2d: %5d\n", i, rand());
        
    return 0;
}
