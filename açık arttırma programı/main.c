#include <stdio.h>
#include <stdlib.h>




typedef struct {

char esyaadi[80];
int fiyat;

}esya;
//typedef ve struct ile sat�lacak e�yan�n fiyat ve ad�n� birbirine ba�lad�m.



int main(int argc, char *argv[]) {
    char kazanan[100];
	int katilimcisayi,teklif,kullaniciteklifi=420001,gericekilme,kazananteklif,i=1, arttirma,j=1,bastakikatilimcisayisi,katilimcisayi2,tur1=0,kullanicisonteklif=420000;
	//de�i�kenleri tan�mlad�m

	kazananteklif=420000;
	esya card={"1999 Pokemon Base Set Shadowless 1st Edition Holo Charizard",kazananteklif};
    //sat�lacak e�ya ile ilgili bilgileri yazd�m.


    printf("Evet sevgili katilimcilar bug�n %s satilacak. \n Ilk once katilimci sayisini belirlemekle baslayalim. \n Katilimci sayisi:",card.esyaadi );
    scanf("%d",& katilimcisayi);
    printf("\n Bu degerli parcamizin baslangic fiyati $420.000. \n Acik arttirmayi baslatiyorum. \n");

	bastakikatilimcisayisi=katilimcisayi;
	int katilimcilar[katilimcisayi];
    
	for(;j<=katilimcisayi;j++){
	katilimcilar[j]=j;
	}
    //kullan�c� harici kat�l�mc�lara isim olarak numara atad�m
    
    
	katilimcisayi2=katilimcisayi-1;
    
	for(;katilimcisayi!=1;i=1){           
	for(;i<=katilimcisayi2;i++){          //alttaki for d�ng�s� ile her bir turu, �stteki for d�ng�s� ile isede tur say�s�n� kontrol alt�na ald�m


		if(kullaniciteklifi>=kullanicisonteklif){
		if(i==1){
    	printf("Sizin siraniz. Teklif vermek istiyorsan�z teklifinizi yaziniz, \n En yuksek tekliften dusuk teklif yaparsaniz elenirsiniz. \n Teklifiniz:");
		scanf("%d",& kullaniciteklifi);

		if(kullaniciteklifi<kazananteklif && tur1==0){
		printf("\nKullanici acik arttirmadan geri cekildi.\n");
		katilimcisayi--;
	    }
	    else if(kullaniciteklifi<kullanicisonteklif){
		printf("\nKullanici acik arttirmadan geri cekildi.\n");
		katilimcisayi--;

	    }
		else{

		printf("\n Kullanici teklifi: %d\n",kullaniciteklifi);
		kazananteklif=kullaniciteklifi;
	    kullanicisonteklif=kullaniciteklifi;
		}
	    }
		}


    gericekilme= rand() %5;   
	//burada random bir say� belirleyip kat�l�mc�lar�n %20 ihtimal ile belirledi�im say� denk gelirse oyundan �ekilmelerini b�ylece a��k artt�rman�n sonsuza kadar s�rmemesini sa�lad�m
     
	if(katilimcilar[i]!=60573){ //

	if(gericekilme==2){
	katilimcisayi--;

	printf("%d. kullanici geri cekildi.\n Kalan kisi sayisi: %d\n",i,katilimcisayi);
	katilimcilar[i]=60573;
	//a��k artt�rmaya kat�lan di�er kullan�c�lar geri �ekildi�inde dizi i�indeki de�erlerini 60573 yaparak if ile bu de�eri alan kat�l�mc�lar� oyun d��� b�rakt�m
	}
	else{

    arttirma= rand() %10001;  //di�er kat�l�mc�lar�n artt�rma de�erlerini random, 10.000 ile 0 aras�nda bir say� olmas�n� sa�lad�m 
    kazananteklif=kazananteklif+arttirma; 
    printf("%d. kullanicinin teklifi: %d \n",i,kazananteklif);
	}
    }
	}
	if(katilimcisayi!=1)
	printf("Yeni tur basliyor.\n");
}


    printf("%s esyasi $%d fiyatina ",card.esyaadi,kazananteklif);

    for(j=1;j<bastakikatilimcisayisi;j++){ //ana kullan�c� �ekilip a��k artt�rmay� di�er kullan�c�lardan birinin kazan�p kazanmad���n� kontrol ettim

    	if(katilimcilar[j]!=60573)
    	printf("%d numarali katilimciya satildi.",j);

	}
    if(kullaniciteklifi==kazananteklif)
    printf("ana kullaniciya satildi.");

	return 0;
}
