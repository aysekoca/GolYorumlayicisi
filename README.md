# GolYorumlayicisi

# PROJEDE KULLANILAN ALGORİTMALAR VE AMAÇLARI
Bu kod, "G", "()" ve "(l)" karakterlerinden oluşan bir komut dizisini yorumlamak için bir algoritma sağlar. Bu algoritma, özellikle futbol skorlarını kodlamak ve yorumlamak için kullanılabilir. Bu kodlama, belirli bir formatta ve belirli bir sırayla "G", "()" ve "(l)" karakterlerinin kullanılması yoluyla gerçekleştirilir.
Algoritma, kullanıcının girdiği komut dizisini adım adım işler. Her karakter, "G", "()" ve "(l)" karakterlerinden biri olabilir. Algoritma, karakterleri tek tek kontrol eder ve yorumlar. Eğer karakter "G" ise, yorumlanmış stringe "G" karakteri eklenir. Eğer karakter "()" ise, yorumlanmış stringe "o" karakteri eklenir. Eğer karakter "(l)" ise, yorumlanmış stringe "l" karakteri eklenir.
Yorumlanmış string, adım adım birleştirilerek sonuç olarak yorumlanmış bir skor elde edilir. Bu skor, daha sonra başka amaçlar için kullanılabilir. Örneğin, bu skor verileri kaydedilebilir veya gösterilebilir.

Bu algoritma, belirli bir formatta komutların işlenmesi gereken birçok durumda kullanılabilir. Özellikle, benzer şekilde kodlanmış verilerin yorumlanması gereken oyun, spor veya diğer etkinliklerde kullanılabilir.

**1. strlen()** : Bir stringin uzunluğunu bulmak için kullanılır. Bu fonksiyon, bir stringin kaç karakter içerdiğini belirler.

**2. malloc()** : Bellekte belirli bir boyutta yer ayırmak için kullanılır. Bu fonksiyon, belirli bir boyutta bellek bloğu ayırır ve bu bloğun başlangıç adresini döndürür.

**3. strncat()** : İki stringi birleştirmek için kullanılır. Bu fonksiyon, birincil stringin sonuna ikincil stringi ekler.

**4. free()**: malloc() gibi bellek yönetimi için kullanılır. Bu fonksiyon, önceden malloc() ile ayrılmış bellek bloğunu serbest bırakır.

Bu algoritmalar, gol_ yorumlayici() fonksiyonunun çalışması için kullanılır.
gol_yorumlayici() fonksiyonu, bir string komutunu alır ve belirli bir sırayla "G", "()" ve/veya "(l)" harflerinden oluşan bu komutu yorumlayarak, sonuç olarak yorumlanmış bir string döndürür. Fonksiyon, her karakteri tek tek kontrol ederek, belirli karakterlerin varlığına bağlı olarak yorumlama yapar. Yorumlama işlemi sırasında, strncat() fonksiyonu kullanılarak yorumlanmış string, adım adım birleştirilir. Sonuç olarak, yorumlanmış string, yorumlayici() fonksiyonundan döndürülür.
main() fonksiyonu ise, örnek bir komut stringi tanımlar ve yorumlayici() fonksiyonunu çağırarak yorumlanmış stringi alır. Sonrasında, yorumlanmış stringi ekrana yazdırır ve bellek için ayrılan yerleri serbest bırakır.

Bu algoritma, özellikle belirli bir formata sahip komutları işlemek için kullanılabilir. Örneğin, bu algoritma, belirli bir oyunun skorunu kaydetmek için kullanılabilir. Oyun skoru, "G", "()" ve "(l)" karakterlerinden oluşan bir komut olarak kodlanabilir ve bu komut, yorumlayıcı fonksiyonu kullanılarak yorumlanabilir.

# KOD NASIL KULLANILIR , NASIL TEST EDİLİR?
1.Kaynak kodunu bir metin düzenleyicide açın ve "golyorumlayici.c" adıyla kaydedin.

2.Terminali açın ve kaynak kodunun bulunduğu dizine gidin.

3.Aşağıdaki komutu kullanarak kaynak kodunu derleyin:
       gcc -o golyorumlayici golyorumlayici.c   :Bu komut, "golyorumlayici.c" dosyasını derleyerek "golyorumlayici" adında bir çalıştırılabilir dosya oluşturur.
4.Derleme işlemi tamamlandıktan sonra, aşağıdaki komutu kullanarak programı çalıştırın: ./golyorumlayici

Program, "G()()()()(l)" komutunu yorumlayacak ve sonucu ekrana yazdıracaktır.
Eğer başka bir komutu yorumlamak isterseniz, "komut" değişkenine istediğiniz komutu atayarak programı yeniden derleyebilir ve çalıştırabilirsiniz. Örneğin:
char* komut = "GGG()(l)GG(GG)";
char* yorumlanmis = yorumlayici(komut);
printf("%s\n", yorumlanmis);
Bu kod bloğu, "GGG()(l)GG(GG)" komutunu yorumlayacak ve sonucu ekrana yazdıracaktır.
