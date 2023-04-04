                            // GOL YORUMLAYICISI //
#include <stdio.h>
#include <string.h>
#include <stdlib.h>  // malloc ve free fonksiyonlar� i�in gerekli olan k�t�phane eklenmi�tir.

// Gol Yorumlay�c� fonksiyonu tan�mlanm��t�r
char* gol_yorumlayici(char* komut) {
char* yorumlanmis = (char*)malloc(sizeof(char) * (strlen(komut) + 1));// Yorumlanm�� string i�in bellekte yer ayr�l�r.
   
 yorumlanmis[0] = '\0';// Yorumlanm�� stringi null karakteriyle ba�lat�r.

    // Karakterleri tek tek kontrol ederek yorumlama.
int i = 0;
while (i < strlen(komut)) {
 if (komut[i] == 'G') {
// 'G' karakteri i�in 'G' stringini yorumlanm�� stringe eklenmi�tir.
 strncat(yorumlanmis, "G", 1);
 i++; // Bir sonraki karaktere ge�mek i�in d�ng� art�r�m deyimi kullan�lm��t�r.
  } else if (komut[i] == '(' && i+1 < strlen(komut) && komut[i+1] == ')') {
 // '()' stringi i�in 'o' stringini yorumlanm�� stringe eklenir.
 strncat(yorumlanmis, "o", 1);
 i += 2; // '(' karakterinden sonra ')' karakterini atlayarak bir sonraki karaktere ge�er.
  } else if (komut[i] == '(' && i+2 < strlen(komut) && komut[i+1] == 'l' && komut[i+2] == ')') {
    // '(l)' stringi i�in 'l' stringini yorumlanm�� stringe ekler.
 strncat(yorumlanmis, "l", 1);
 i += 3; // '(' karakterinden sonra 'l' ve ')' karakterlerini atlayarak bir sonraki karaktere ge�er.
} 
else {
            i++; // Bilinmeyen karakteri atlayarak bir sonraki karaktere ge�er.
	}
 }

    
return yorumlanmis; // Yorumlanm�� stringi d�nd�r�r.
}
int main() {
    // �rnek bir komut stringi tan�mlar
 char* komut = "G()()()()(l)";
 char* yorumlanmis = gol_yorumlayici(komut);  // Yorumlay�c� fonksiyonunu �a��rarak yorumlanm�� stringi al�r.
 printf("%s\n", yorumlanmis); // Yorumlanm�� stringi yazd�r�r.
 free(yorumlanmis); // Bellek i�in ayr�lan yerleri serbest b�rak�r.
    return 0; // Program� normal bir �ekilde sonland�r�r.
}
