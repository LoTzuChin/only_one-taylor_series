#include <stdio.h>
#include <stdlib.h>

int main ()
{
	double x;
	double n = 1;
	double math = 0;
	double math_ = 2;
	int c = 1;  
	double cx = 1;
	double a;
	double reduce;
	
	printf ("�п�J�@�ӼƭȤ���-1��1�����]���]�t-1�^�G");
	scanf ("%lf", &x);
	
	if (x>-1 && x<=1)
	{
		while (1)
	    {
		    c = c * -1;
		
		    cx = cx * x;
			
	    	a = (-1.0)/n;
		
	    	math = math + a * c * cx;
		
		    reduce = math - math_;
	    	if (reduce < 0)
		        reduce = -reduce;
		    
	    	if((reduce) < 0.00000001) 
		    {
	    		printf ("�� x = %.4f �A�� %.0f ���A�ƭȬ��G%.8f�A�즹�{�������I\n", x, n, math);
			
		    	return 0;
	    	}
	    	math_ = math;
	    	n++;
    	}
	}
	else
	{
		printf ("�W�X�d��A�żƵo���I\n");
	}
	
	return 0;
 }
