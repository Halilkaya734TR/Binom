#include <stdio.h>
int faktoriyel(int x) //Faktoriyel hesaplar.
{
    int m=1; //faktoriyel çarpımlarını tutar.
    for(int i=1;i<=x;i++)
       m*=i;  //Faktoriyel hesaplanır döngüye göre.
    return m;
}


int Kombinasyon(int us,int i) //Kombinasyon hesaplar.
{
  int faktoriyel;
  faktoriyel = faktoriyel(us) /(faktoriyel(i)*faktoriyel(us-i)); //Kombinasyon formülündeki faktoriyerleri hesaplamak için kullanılır
  return faktoriyel;
}

void Yazdir(int us)
{
    printf("(x+y)^%d Acilimi:",us);
    for(int i=0;i<=us;i++)
    {
        int kombinasyon = Kombinasyon(us,i); //kombinasyon fonksiyonundaki değeri "kombinasyon" değerine atar.
        printf("%d * x^%d * y^%d",kombinasyon,us-i,i);
        if(i<us)
        printf("+"); //Değerler arasına "+" koyar.
    }

}

int main()
{
  int us;
  printf("Üssü belirleyiniz:\n");
  scanf("%d",&us); //Kullanıcıdan üs alınır.
  Yazdir(us); //Yazdır fonksiyonuna gönderir.
}

