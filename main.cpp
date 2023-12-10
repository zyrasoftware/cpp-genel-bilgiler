#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string name, userName;
    int userPass, userAge;
    string userDate;
    setlocale(LC_ALL, "Turkish");
    cout << "Merhaba, Lütfen İsminizi Girin: ";
    cin >> name;

    for (char c : name) {
        if (!isalpha(static_cast<unsigned char>(c))) {
            cerr << "Hata: İsim sadece harflerden oluşmalıdır." << endl;
            return 1;
        }
    }

    cout << name << " Lütfen Soy İsminizi Girin: ";
    cin >> userName;

    for (char c : userName) {
        if (!isalpha(static_cast<unsigned char>(c))) {
            cerr << "Hata: Soy İsim sadece harflerden oluşmalıdır." << endl;
            return 1;
        }
    }

    cout << name << " " << userName << " Lütfen Hesap Şifrenizi Girin: ";
    cin >> userPass;

    while (to_string(userPass).length() < 5) {
        cout << userName << " Şifreniz en az 5 karakter Olmalıdır. Tekrar Giriniz: ";
        cin >> userPass;
    }

    cout << "Başarıyla Şifrenizi Girdiniz" << endl;

    int input;
    do {
        cout << "Şifrenizi Doğrulamak İçin Tekrar Girin: ";
        cin >> input;
    } while (input != userPass);

    cout << "Başarıyla Onaylandı" << endl;

    cout << userName << " Lütfen Yaşınızı Girin: ";
    cin >> userAge;

  
    cout << "Hesabınızı olası bir durumda kurtarmak için lütfen doğum yılınızı yazın (örn. 3.12.2023): ";
    cin >> userDate;

    size_t pos = userDate.find('.');
    if (pos != string::npos) {
        string monthStr = userDate.substr(pos + 1);
        int month = stoi(monthStr);

        if (month < 1 || month > 12) {
            cerr << "Hata: Geçersiz ay değeri. Lütfen doğru bir ay girin (1-12)." << endl;
            return 1;
        }
    }
    else {
        cerr << "Hata: Doğru bir tarih formatı kullanın (örn. 3.12.2023)." << endl;
        return 1;
    }

    cout << "Doğum Yılınız: " << userDate << endl;


    ofstream dosya("hesabim.txt");
    if (dosya.is_open()) {
 
        dosya << "İsim: " << name << "\n";
        dosya << "Soy İsim: " << userName << "\n";
        dosya << "Şifre: " << userPass << "\n";
        dosya << "Yaş: " << userAge << "\n";
        dosya << "Doğum Yılı: " << userDate << "\n";

      
        dosya.close();
        cout << "\nBilgiler 'hesabim.txt' dosyasına yazıldı." << endl;
    }
    else {
        cerr << "Dosya açma hatası!" << endl;
        return 1;
    }

    return 0;
}
