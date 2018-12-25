#include <stdio.h>
#include <conio.h>
void Secara_nilai(float a,float b,char c){
float *Alamat_A;
Alamat_A = &a;
a - 7;
printf("Lokal A = %f, Alamat a = %p\n",a,Alamat_A);
printf("Lokal B = %f\n",b);
printf("Lokal C = %c\n",c);
}
int main(){
float a=25,*Alamat_A;
char c = 'a';
Alamat_A = &a;
Secara_nilai(a,a/3,c);
printf("Main A = %f, alamat A = %p\n",a,Alamat_A);
printf("Main A/3 = %f\n", (a/3));
printf("Main C = %c\n",c);
return 0;
}
