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
	
	printf ("請輸入一個數值介於-1到1之間（不包含-1）：");
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
	    		printf ("當 x = %.4f ，第 %.0f 項，數值為：%.8f，到此程式結束！\n", x, n, math);
			
		    	return 0;
	    	}
	    	math_ = math;
	    	n++;
    	}
	}
	else
	{
		printf ("超出範圍，級數發散！\n");
	}
	
	return 0;
 }
