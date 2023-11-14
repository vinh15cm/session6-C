#include<stdio.h>
int main(){
	int a,b,c;
	int max,min; 
	printf("nhap vao a :");
	scanf("%d", &a);
	printf("nhap vao b :");
	scanf("%d",&b);
	printf("nhap vao c :");
	scanf ("%d",&c);
	printf("tong cua a,b,c la : %d \n",(a+b+c));
	printf("trung binh cong cua a,b,c la : %d \n",(a+b+c)/3);
	if(a >= b&&  a>= c) max = a;
    else if(b>= a && b>= c) max = b;
    else if(c >= a && c >= b) max = c;
    if(a <= b&&  a<= c) min = a;
    else if(b <= a && b<= c) min = b;
    else if(c <= a && c <= b) min = c;
    printf(" max la: %d\n min la: %d", max, min);

} 
