#include<stdio.h>
#include<stdlib.h> 
#include<signal.h>

static void int_handler(int s)
{
	write(1 , "!" , 1);
}


int main()
{
	int i , j ;
	signal_set   * set,oset; 
	
	singal(SIGINT , int_handler);
	sigemptyset(&set);
	sigaddset(&set , NULL); 
	
	for(i=0;i<5000;i++)
	{
		sigprocmask(SIG_BLOCK , &set , NULL);  //�źŵ�maskλ��Ϊ0 
		for(j=0;j<5;j++)
		{
			write(1,"*" , 1);
			slep(1);
		}
		sigprocmask(SIG_UNBLOCK , &set , NULL);
	}
}
