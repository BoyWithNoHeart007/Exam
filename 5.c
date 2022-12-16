#include<stdio.h>


main(){
	
	int unit,bill,surcharge,total_bill;
	
	printf("type unit");
	scanf("%d",unit);
	
	if(unit<50){
		
		bill = unit*0.50;
		
	}
	
	else if(unit<150){
	
		
		bill = 25 + (unit*0.75)	
	
	}
		
	else if(unit<250){
		
		bill = 75 + (unit*0.75)					
}
	else if(unit>250){
		
		bill = 187.5 + (unit*0.75)					
}
	surcharge = bill*0.20
	
	total_bill = surcharge+bill; 
}

