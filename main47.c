                            // GOL YORUMLAYICISI //
#include <stdio.h>
#include <string.h>
#include <stdlib.h>  // malloc ve free fonksiyonlarý için gerekli olan kütüphane eklenmiþtir.

// Gol Yorumlayýcý fonksiyonu tanýmlanmýþtýr
char* gol_yorumlayici(char* komut) {
char* yorumlanmis = (char*)malloc(sizeof(char) * (strlen(komut) + 1));// Yorumlanmýþ string için bellekte yer ayrýlýr.
   
 yorumlanmis[0] = '\0';// Yorumlanmýþ stringi null karakteriyle baþlatýr.

    // Karakterleri tek tek kontrol ederek yorumlama.
int i = 0;
while (i < strlen(komut)) {
 if (komut[i] == 'G') {
// 'G' karakteri için 'G' stringini yorumlanmýþ stringe eklenmiþtir.
 strncat(yorumlanmis, "G", 1);
 i++; // Bir sonraki karaktere geçmek için döngü artýrým deyimi kullanýlmýþtýr.
  } else if (komut[i] == '(' && i+1 < strlen(komut) && komut[i+1] == ')') {
 // '()' stringi için 'o' stringini yorumlanmýþ stringe eklenir.
 strncat(yorumlanmis, "o", 1);
 i += 2; // '(' karakterinden sonra ')' karakterini atlayarak bir sonraki karaktere geçer.
  } else if (komut[i] == '(' && i+2 < strlen(komut) && komut[i+1] == 'l' && komut[i+2] == ')') {
    // '(l)' stringi için 'l' stringini yorumlanmýþ stringe ekler.
 strncat(yorumlanmis, "l", 1);
 i += 3; // '(' karakterinden sonra 'l' ve ')' karakterlerini atlayarak bir sonraki karaktere geçer.
} 
else {
            i++; // Bilinmeyen karakteri atlayarak bir sonraki karaktere geçer.
	}
 }

    
return yorumlanmis; // Yorumlanmýþ stringi döndürür.
}
int main() {
    // Örnek bir komut stringi tanýmlar
 char* komut = "G()()()()(l)";
 char* yorumlanmis = gol_yorumlayici(komut);  // Yorumlayýcý fonksiyonunu çaðýrarak yorumlanmýþ stringi alýr.
 printf("%s\n", yorumlanmis); // Yorumlanmýþ stringi yazdýrýr.
 free(yorumlanmis); // Bellek için ayrýlan yerleri serbest býrakýr.
    return 0; // Programý normal bir þekilde sonlandýrýr.
}
