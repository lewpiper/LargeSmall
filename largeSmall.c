//largeSmall
//Lew Piper III | Palomar ID 011263249

#include <stdio.h>
#include <math.h>
int compare ();
FILE *fp;

//Provided main function from the textbook
int main (void) {
	int i;
	
	fp = fopen("csis.txt", "w");
	for (i = 1; i <=4; ++i) {
		compare();
	}
	fclose(fp);
	return 0;
}

int compare (int w, int x, int y, int z){
	int max = 0;
	int min = 0;
	
	//Have the user input any for numbers
	printf("Please type in four numbers that need to be sorted from smallest to biggest: ");
	scanf("%d %d %d %d",&w,&x,&y,&z);
	
	
	//The following statements compare the entered numbers to find the max number
	//Compare w and x for max
	if (w > x) {
		max = w;
	} else {
		max = x;
	}
	//Compare x and y for max
	if (max > y) {
		max = max;
	} else {
		max = y;
	}
	//Compare y and z for max
	if (max > z) {
		max = max;
	} else {
		max = z;
	}
	
	//The following three if statements do a comparison for of the entered numbers to find the smallest one.
	//Compare w and x for min
	if (w < x) {
		min = w;
	} else {
		min = x;
	}
	//Compare x and y for min
	if (min < y) {
		min = min;
	} else {
		min = y;
	}
	//Compare y and z for min
	if (min < z) {
		min = min;
	} else {
		min = z;
	}
	
	printf("The four numbers entered are: %d %d %d %d. | Max = %d | Min = %d \n",w,x,y,z,max,min);
	fprintf(fp,"The four numbers entered are: %d %d %d %d. | Max = %d | Min = %d \n",w,x,y,z,max,min);
	
	return 0;
}

