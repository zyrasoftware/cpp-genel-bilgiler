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



Doğum Yılı Kontrolü:

Kullanıcıdan doğum yılı, belirli bir formatta (örn. 3.12.2023) alınır. Bu tarih, nokta karakteri kullanılarak ayrılır.
Ay değeri 1 ile 12 arasında olmalıdır. Kontrol, string::find fonksiyonu ve ardından stoi fonksiyonu kullanılarak gerçekleştirilir.


Dosyaya Yazma:

Kullanıcının girdiği bilgiler, "hesabim.txt" adlı bir dosyaya yazılır. Dosya açma ve yazma işlemleri ofstream sınıfı kullanılarak gerçekleştirilir.
Eğer dosya başarıyla açılırsa, kullanıcının bilgileri dosyaya yazılır ve bir mesajla işlemin başarıyla tamamlandığı bildirilir. Aksi takdirde, dosya açma hatası mesajı verilir.


![image](https://github.com/Emirkksl/cpp-genel-bilgiler/assets/151434900/ee5cbe76-501e-46a7-b35e-658a7da6e9b7)





# C++ Dilinde Temel Konular

## #include: Kütüphane Tanımlayıcısı
- C++ dilinde `#include` ön işlemci direktifi, belirli bir kütüphaneyi projenize eklemenizi sağlar. Örneğin, `#include <iostream>` ifadesi, C++'ın standart giriş/çıkış kütüphanesini ekler.


```cpp
#include <iostream>

int main() {
    // İşlemler
    return 0;
}
```

## Veri Türleri

C++ dilinde kullanılan temel veri türleri şunlardır:

`int`: Tamsayıları temsil eder.
`float` ve `double`: Ondalık sayıları temsil eder.
`char`: Karakterleri temsil eder.
`bool`: Mantıksal değerleri temsil eder.

```cpp
int sayi = 42;
float ondalikSayi = 3.14;
char karakter = 'A';
bool dogruMu = true;
```

## Fonksiyonlar

C++ dilinde fonksiyonlar, belirli bir görevi yerine getiren kod bloklarıdır.

```cpp
#include <iostream>

// Fonksiyon tanımı
void selamla() {
    std::cout << "Merhaba, Dünya!" << std::endl;
}

int main() {
    // Fonksiyon çağrısı
    selamla();
    return 0;
}
```

## Sınıflar ve Nesneler

C++ dilinde sınıflar ve nesneler, nesne yönelimli programlamanın temelini oluşturur. Sınıflar, veri ve fonksiyonları bir araya getirir.

```cpp
class Ogrenci {
public:
    // Veri elemanları
    std::string isim;
    int yas;

    // Üye fonksiyonlar
    void bilgileriYazdir() {
        std::cout << "İsim: " << isim << ", Yaş: " << yas << std::endl;
    }
};

int main() {
    // Nesne oluşturma
    Ogrenci ogrenci1;
    ogrenci1.isim = "Ahmet";
    ogrenci1.yas = 20;

    // Üye fonksiyon çağrısı
    ogrenci1.bilgileriYazdir();

    return 0;
}
```


