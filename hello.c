#include <stdio.h>
#include <stdlib.h>
int main(int argc,char *argc[])
{
	printf("hello world!!!!!!\n");
	return 0;


}


void a_func(int para)
{
    printf("hello a\n");
	if(para==1)
		{
			printf("haha b modify a");
		}
}
void b_first_func(void)
{

	printf("haha a modify b");
	int tmp=0;
	printf("hello b\n");

}
