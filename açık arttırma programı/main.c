#include <stdio.h>
#include <stdlib.h>




typedef struct {

char esyaadi[80];
int fiyat;

}esya;
//typedef ve struct ile satýlacak eþyanýn fiyat ve adýný birbirine baðladým.



int main(int argc, char *argv[]) {
    char kazanan[100];
	int katilimcisayi,teklif,kullaniciteklifi=420001,gericekilme,kazananteklif,i=1, arttirma,j=1,bastakikatilimcisayisi,katilimcisayi2,tur1=0,kullanicisonteklif=420000;
	//deðiþkenleri tanýmladým

	kazananteklif=420000;
	esya card={"1999 Pokemon Base Set Shadowless 1st Edition Holo Charizard",kazananteklif};
    //satýlacak eþya ile ilgili bilgileri yazdým.


    printf("Evet sevgili katilimcilar bugün %s satilacak. \n Ilk once katilimci sayisini belirlemekle baslayalim. \n Katilimci sayisi:",card.esyaadi );
    scanf("%d",& katilimcisayi);
    printf("\n Bu degerli parcamizin baslangic fiyati $420.000. \n Acik arttirmayi baslatiyorum. \n");

	bastakikatilimcisayisi=katilimcisayi;
	int katilimcilar[katilimcisayi];
    
	for(;j<=katilimcisayi;j++){
	katilimcilar[j]=j;
	}
    //kullanýcý harici katýlýmcýlara isim olarak numara atadým
    
    
	katilimcisayi2=katilimcisayi-1;
    
	for(;katilimcisayi!=1;i=1){           
	for(;i<=katilimcisayi2;i++){          //alttaki for döngüsü ile her bir turu, üstteki for döngüsü ile isede tur sayýsýný kontrol altýna aldým


		if(kullaniciteklifi>=kullanicisonteklif){
		if(i==1){
    	printf("Sizin siraniz. Teklif vermek istiyorsanýz teklifinizi yaziniz, \n En yuksek tekliften dusuk teklif yaparsaniz elenirsiniz. \n Teklifiniz:");
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
	//burada random bir sayý belirleyip katýlýmcýlarýn %20 ihtimal ile belirlediðim sayý denk gelirse oyundan çekilmelerini böylece açýk arttýrmanýn sonsuza kadar sürmemesini saðladým
     
	if(katilimcilar[i]!=60573){ //

	if(gericekilme==2){
	katilimcisayi--;

	printf("%d. kullanici geri cekildi.\n Kalan kisi sayisi: %d\n",i,katilimcisayi);
	katilimcilar[i]=60573;
	//açýk arttýrmaya katýlan diðer kullanýcýlar geri çekildiðinde dizi içindeki deðerlerini 60573 yaparak if ile bu deðeri alan katýlýmcýlarý oyun dýþý býraktým
	}
	else{

    arttirma= rand() %10001;  //diðer katýlýmcýlarýn arttýrma deðerlerini random, 10.000 ile 0 arasýnda bir sayý olmasýný saðladým 
    kazananteklif=kazananteklif+arttirma; 
    printf("%d. kullanicinin teklifi: %d \n",i,kazananteklif);
	}
    }
	}
	if(katilimcisayi!=1)
	printf("Yeni tur basliyor.\n");
}


    printf("%s esyasi $%d fiyatina ",card.esyaadi,kazananteklif);

    for(j=1;j<bastakikatilimcisayisi;j++){ //ana kullanýcý çekilip açýk arttýrmayý diðer kullanýcýlardan birinin kazanýp kazanmadýðýný kontrol ettim

    	if(katilimcilar[j]!=60573)
    	printf("%d numarali katilimciya satildi.",j);

	}
    if(kullaniciteklifi==kazananteklif)
    printf("ana kullaniciya satildi.");

	return 0;
}
