Array Questions-3

1.Bir tamsayi dizisi içinde en çok tekrar eden degeri (mod) hesaplayarak ekrana yazdiran bir C kodu yaziniz.
Bu nitelikte birden fazla öge varsa dizide ilk geçen deger bulunacak. Ekran çiktisi su sekilde olmali:

4 7 6 7 3 2 9 7 4 9 7 1

mod = 7 ve 4 kez tekrar ediyor

3 4 8 4 9 4 6 7 3 2 2 2

mod = 4 ve 3 kez tekrar ediyor

Asagidaki test kodunu kullanabilirsiniz:
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define     SIZE      1000

int main()
{

    int a[SIZE];

    srand((unsigned)time(0));

    for (int i = 0; i < SIZE; ++i) {
        a[i] = rand() % 500;
        if (i && i % 20 == 0)
            printf("\n");
        printf("%3d ", a[i]);
    }
    ///kod
}

2.Bir dizinin ögelerinin ardisikk (consecutive) tamsayilardan olusup olusmadigini sinayan bir C kodu yaziniz:

int a1[] = {74, 70, 73, 71, 83, 77, 84, 81, 82, 78, 86, 72, 79, 88, 76, 87, 75, 89, 80, 85}; //evet

int a2[] = {43, 44, 48, 40, 50, 47, 45, 42, 52, 49, 54, 46, 51, 41, 53}; //evet

int a3[] = {9, 0, 7, 6, 8, 5, 4, 3, 2, 7}; //hayir

Problemi ilave bir dizi kullanarak ve ilave bir dizi kullanmadan ayri ayri çözmeye çalisin.

3.Asgidaki kodda SIZE tane ögeye sahip bir tamsayi dizisine rastgele degerler veriliyor:

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 20

int main()
{
    int a[SIZE];

    srand((unsigned)time(0));
    for (int i = 0; i < 20; ++i) {
        a[i] = rand() % 20 + 1;
        printf("%d ", a[i]);
    }
    printf("\n");
}
Bu dizinin elemanlarinin degerlerini kullanarak bir histogram olusturacak C programini yazmaniz isteniyor. Örnek bir ekran ciktisi 21_histogram adli dosyadaki gibi olmali.

4. Elemanlari rastgele atanan dizinin elemanlarini ekrana yazdiran, istenen herhangi bir  degerin olup olmadigini ve kac adet oldugunu sorgulayan programi yaziniz.

Örnek çikti 1:

int arr[10]={2,5,1,78,90,0,5,7,10,67};

5 rakami 2 dizinin elemanlari arasinda 2 tane bulunmustur.

Örnek çikti 2:

int arr[10]={2,5,1,78,90,0,5,7,10,67};

11 rakami dizinin elemanlari arasinda bulunmamaktadir.

5.C programlama dilinde kullanicidan alinan bir cümleyi tersten yazdiran programin kodunu yaziniz.

Örnek Çikti:
C Programlama
amalmargorP C
