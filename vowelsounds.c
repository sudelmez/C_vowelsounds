#include <stdio.h>

void sesliharf(char dizi[]){
	int i=0,j=0,a=0;
	int say=0;
	char harf[25];
	char sesli[10]={'A','a','E','e','I','i','O','o','U','u'};
	
	for(i=0;dizi[i]!='\0';i++){
		for(j=0;j<10;j++){
			if(dizi[i]==sesli[j]){
				say++;
				harf[a]=dizi[i];
				a++;
			}
		}
	}
	printf("Sesli harfler:");
	for(i=0;harf[i]!='\0';i++){
		printf("%c,",harf[i]);
	}
	printf("\nSesli harf sayisi=%d",say);
}

int main(){
	
	char karakter[25];
	printf("Bir cumle giriniz.");
	gets(karakter);
	sesliharf(karakter);
	return 0;
}
