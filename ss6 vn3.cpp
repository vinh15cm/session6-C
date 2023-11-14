#include <stdio.h>
int main(){
	int a,b; 
 int USCLN(int a, int b) ;
    if (b == 0) return a;
    return USCLN(b, a % b);

 int BSCNN(int a, int b) ;
    return (a * b) / USCLN(a, b);

 printf("Moi ban nhap 2 so: ");
 scanf("%d%d", &a, &b);
 printf("Tong cua %d va %d la %d\n",a, b, a+b);
 printf("Hieu cua %d va %d la %d\n",a, b,  a-b);
 printf("Tich cua %d va %d la %d\n",a, b,  a*b);
 printf("Thuong cua %d va %d la %f\n",a, b, (float)a/b);
 printf("USCLN cua %d va %d la: %d, ", a, b, USCLN(a, b));
 printf("BSCNN cua %d va %d la: %d", a, b, BSCNN(a, b));
 
 return 0;
}
