#include <stdio.h>

int main() {
	
	int num1,num2,num3;
    
   	printf("enter three intergers")
	scanf("%d %d %d", &num1, &num2, &num3);

	if(num1 >= num2 && num1 >= num3){
	printf("the largest number is: %d\n",num1);
}else if(num2 >= num1 && num2 >= num3){
	printf("the largest numeber is: %d\n",num2);
}else{
	printf("the largest number is: %d\n", num3);
}

    return 0;
}
