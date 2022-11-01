#include <stdio.h>
#include <math.h>

void fun (int x){
printf("Hello");
return;
}

int add (int num1, int num2){
    int sum = num1+num2;
    return;
}

int main(){
int x,a, num1,num2;
fun(x); 

printf("\nenter number 1: ");
scanf("%d", &num1);
printf("\nEnter number 2: ");
scanf("%d", &num2);
a = add(num1,num2);
printf("\n%d\n", a);

}