#include <stdio.h>
#include <math.h>

int main(){
	int d1, d2, d3, d;
	printf("Chieu dai tu nha den cua hang 1: ");
	scanf("%d", &d1);
	printf("Chieu dai tu nha den cua hang 2: ");
	scanf("%d", &d2);
	printf("Chieu dai cua hai cua hang: ");
	scanf("%d", &d3);
	if(d1 >= 2 * (d2 + d3)){
		d = 2 * (d2 + d3);
		printf("Khoang cach toi thieu: %d", d);	
    }
    else if(d2 >= 2 * (d1 + d3)){
    	d = 2*(d1 +d3);
    	printf("Khoang cach toi thieu: %d", d);
	}
	 else if(d3 >= 2 * (d1 + d2)){
    	d = 2*(d1 +d2);
    	printf("Khoang cach toi thieu: %d", d);
	}
	else{
		d = d1 + d2 + d3;
		printf("Khoang cach toi thieu: %d", d);
	}
	return 0; 
}

