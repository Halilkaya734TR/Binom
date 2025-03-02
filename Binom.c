#include <stdio.h>
int faktoriyel(int x)
{
    int m=1;
    for(int i=1;i<=x;i++)
       m*=i; 
    return m;
}


int Kombinasyon(int a,int i)
{
  int c;
  c = faktoriyel(a) /(faktoriyel(i)*faktoriyel(a-i));
  return c;
}

void Yazdir(int a)
{
    printf("(x+y)^%d Acilimi:",a);
    for(int i=0;i<=a;i++)
    {
        int b = Kombinasyon(a,i);
        printf("%d * a^%d * b^%d",b,a-i,i);
        if(i<a)
        printf("+");
    }

}

int main()
{
  int a;
  printf("Üssü belirleyiniz:\n");
  scanf("%d",&a);
  Yazdir(a);
}

