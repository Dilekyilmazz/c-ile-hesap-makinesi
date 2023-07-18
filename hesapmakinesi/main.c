#include <stdio.h>
#include <stdlib.h>

int main()
{
    int secim;
    do{
            printf("lutfen hangi islemi yapacaginizi girin.1.Toplama 2.Cikarma 3.Carpma 4.Bolme ");
            scanf("%d",&secim);
            if(secim!=5){
                printf("islemin ilk sayisini girin :");
                int sayi1,sayi2;
                scanf("%d",&sayi1);
                printf("islemin ikinci sayisini girin :");
                scanf("%d",&sayi2);

                if(secim ==1){
                        printf("toplama isleminin sonucu : %d", (sayi1+sayi2));

                } else if(secim==2){
                    printf("cikarma isleminin sonucu : %d" ,(sayi1-sayi2));

                }else if(secim==3){
                    printf("carpma isleminin sonucu : %d" ,(sayi1*sayi2));

            }else if(secim==4){
                    printf("bolme isleminin sonucu : %d" ,(sayi1/sayi2));

            }
            printf("\n\n");
            }

    }while(secim!=5);

    return 0;
}
