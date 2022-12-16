#include<stdio.h>


main(){
	
	int a,b,c,d;
	
	printf("type 1 no. :-");
	scanf("%i",&a);
	
	printf("type 2 no. :-");
	scanf("%i",&b);
	
	printf("type 3 no. :-");
	scanf("%i",&c);
	
	printf("type 4 no. :-");
	scanf("%i",&d);
	
	(a>b) ?
		
		(a>c) ?
			
			(a>d) ?
				
				printf("A is Max")
				
			:	
				printf("D is Max")
			:
	(b>c) ?
			
			(b>d) ?
				
				printf("B is Max")	
			:
				
				
				printf("D is Max")
			:
		
	(c>d) ?
			
			printf("C is Max")
						
		:
			
			printf("D is Max");
		
		
	
}
