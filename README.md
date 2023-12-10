# cpp-genel-bilgiler
Bu C++ programı, kullanıcıdan kişisel bilgileri alarak bir dosyaya kaydetmeyi amaçlayan basit bir hesap oluşturma uygulamasını temsil eder


Kullanıcı Bilgileri Girişi:

Kullanıcıdan isim, soyisim, şifre, yaş ve doğum yılı gibi bilgiler alınır.
İsim ve soyisim, sadece harf içermelidir. Giriş yapılan bilgiler, isalpha fonksiyonu kullanılarak kontrol edilir. Hatalı bir giriş durumunda program, bir hata mesajı verir ve çalışmayı sonlandırır.

Şifre Kontrolü:

Şifre en az 5 karakterden oluşmalıdır. Bu kontrol, bir while döngüsü içinde gerçekleştirilir. Kullanıcıya şifresini tekrar girmesi istenir ve uzunluğu 5'ten küçük ise tekrar giriş yapması istenir.


Şifre Onaylama:

Kullanıcıdan şifreyi doğrulamak için tekrar giriş yapması istenir. Giriş doğru olana kadar bu işlem tekrarlanır.
Doğum Yılı Kontrolü:

Kullanıcıdan doğum yılı, belirli bir formatta (örn. 3.12.2023) alınır. Bu tarih, nokta karakteri kullanılarak ayrılır.
Ay değeri 1 ile 12 arasında olmalıdır. Kontrol, string::find fonksiyonu ve ardından stoi fonksiyonu kullanılarak gerçekleştirilir.
Dosyaya Yazma:

Kullanıcının girdiği bilgiler, "hesabim.txt" adlı bir dosyaya yazılır. Dosya açma ve yazma işlemleri ofstream sınıfı kullanılarak gerçekleştirilir.
Eğer dosya başarıyla açılırsa, kullanıcının bilgileri dosyaya yazılır ve bir mesajla işlemin başarıyla tamamlandığı bildirilir. Aksi takdirde, dosya açma hatası mesajı verilir.

Doğum Yılı Kontrolü:

Kullanıcıdan doğum yılı, belirli bir formatta (örn. 3.12.2023) alınır. Bu tarih, nokta karakteri kullanılarak ayrılır.
Ay değeri 1 ile 12 arasında olmalıdır. Kontrol, string::find fonksiyonu ve ardından stoi fonksiyonu kullanılarak gerçekleştirilir.


Dosyaya Yazma:

Kullanıcının girdiği bilgiler, "hesabim.txt" adlı bir dosyaya yazılır. Dosya açma ve yazma işlemleri ofstream sınıfı kullanılarak gerçekleştirilir.
Eğer dosya başarıyla açılırsa, kullanıcının bilgileri dosyaya yazılır ve bir mesajla işlemin başarıyla tamamlandığı bildirilir. Aksi takdirde, dosya açma hatası mesajı verilir.
