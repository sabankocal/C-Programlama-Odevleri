2)
1.soruyu tekrar cozmemiz isteniyor fakat bu sefer tanimladigimiz array'i code umuz icinde sadece 2 kere kullanmamiza musaade edilmis.
Sonrasinda yapacagimiz tum islemleri ise pointer aritmetigi ile derste yaptigimiz sekilde yapmamiz isteniyor.
int arr[10];
int* ptr = &arr[0];
// bu satirlardan sonra arr dizisini kullanmamiz yasak.
Hinweis: arr[5] = *(ptr+5)