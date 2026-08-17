#include <stdio.h>

int main()
{
	
	int a ,b;
	
	a=12;
	b=6;
	
	printf("Arithmetic operators\n");
	
  	printf ("a + b=%d\n",a+b);
      printf ("a - b=%d\n",a-b);
  	printf ("a * b=%d\n",a*b);
  	printf ("a / b= %d\n",a/b);
	 
	 printf("Relational operators\n");
     printf("a = b =%d\n",a == b);
     printf("a != b =%d\n",a != b);
	 printf("a > b =%d\n", a > b);
	 printf("a < b =%d\n", a < b);
	 printf("a >= b =%d\n" ,a >= b);       
       printf("a <= b =%d\n" ,a <= b); 
	
	 printf("Logical operators \n");
	 printf("a && b =%d\n", a&&b);
     printf("a || b = %d\n", a ||b);
     printf("! a = %d\n" , !a);
     printf("! b = %d\n" ,! b);
	
       printf("Bitwise operators\n");
         printf("a & b =%d\n", a & b);
        	 printf("a | b =%d\n", a | b);
    	 printf("a ^ b =%d\n", a ^ b);
	   
	   printf("Assignment operators\n");
	   
	   a = 12;
	   
	   printf("a += b = %d\n", a += b);
	    
	    a = 12;
	    
	   printf( "a -= b = %d\n", a -= b);
	   
	   a = 12;
	   
	   printf("a *= b = %d\n", a *= b);
	   
	   a = 12;
	   
	   printf("a /= b = %d\n", a /= b);
	   
	
	return 0;
}
	