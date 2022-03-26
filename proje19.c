#include <stdio.h>
#include <stdlib.h>

int main() {
	
	//Cemberde Alan: pi*r*r
	//Cemberde cevre: 2*pi*r
	
	printf("Cemberde alan ve cevre hesabi\n");
	printf("********************\n");
	
	float pi,cevre,alan,yaricap;
	pi=3.14;
    printf("Yaricap Degeri: ");
	scanf("%f",&yaricap);
	
	alan=pi*yaricap*yaricap;
	cevre=2*pi*yaricap;
	
	printf("Alan: %f \n",alan);
	printf("Cevre: %f",cevre);
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
