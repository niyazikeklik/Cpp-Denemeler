// ConsoleApplication1.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
using namespace std;
#include <string>

int kelime_Sayisi(string kelime)
{
    int count = 0;
    for (int i = 0; i < kelime.length(); i++)
    {

        if (kelime[i] == ' ')
        {
            count++;
        }
    }
    return count + 1;
}
int harf_Sayisi(string cumle) {
    int count = 0, countt = 0;
    for (int i = 0; i < cumle.length(); i++)
    {
        countt++;
        if (cumle[i] == ' ')
        {
            count++;
        }
    }
    return countt - count;


}
int kelime_say(string cumle, string kelime) {
    string kelime_olustur = "";
    int count = 0;

    for (int i = 0; i < cumle.length(); i++)
    {
        if (cumle[i] == ' ')
        {
            kelime_olustur = "";
        }
        else
        {
            kelime_olustur += cumle[i];
            if (kelime_olustur == kelime)
            {
                count++;
            }
        }
    }

    return count;


}
int harf_say(string cumle, char harf) {
    int count = 0;
    for (int i = 0; i < cumle.length(); i++)
    {
        if (cumle[i] == harf)
        {
            count++;
        }

    }
    return count;

}
string harf_cevir(string cumle, char harf, char degis_harf) {

    string olusan_cumle = "";
    for (int i = 0; i < cumle.length(); i++)
    {
        if (cumle[i] == harf)
        {
            olusan_cumle += degis_harf;

        }
        else
        {
            olusan_cumle += cumle[i];
        }
    }
    return olusan_cumle;

}
int secim, secim2;
int main()
{
    setlocale(LC_ALL, "Turkish");
    do
    {
        system("cls");
        secim = 0;
        string cumle;
        cout << "Bir cümle girin: ";
        getline(cin, cumle);
        anasayfa:
        if (secim2==2)
        {
            system("cls");
            cout << "Girilen cümle: "+cumle<<endl;
        }
        cout << "1) Cumlede, " << kelime_Sayisi(cumle) << " kadar kelime vardır." << endl;
        cout << "2) Cumlede, " << harf_Sayisi(cumle) << " kadar harf vardır." << endl;
        cout << "3) Cümlede girilen kelime sayısını bulmak için 1'e" << endl;
        cout << "4) Cümledeki girilen harf sayısını bulmak için 2'e" << endl;
        cout << "5) Cümlede bir harfi başka bir harf ile değiştirmek için 3'e" << endl;
        cout << "6) Yeni bir cümle girmek için 4'e basınız: ";
        cin >> secim;
        if (secim == 1)
        {
            do {
                secim2 = 0;
                system("cls");
                string sozcuk;
                cout << "Sayısı bulunacak kelime: ";
                cin >> sozcuk;
                cout << "Girdiğiniz ''" << sozcuk << "'' kelimesinden " << kelime_say(cumle, sozcuk) << " adet var." << endl;
                cout << "Tekrar için 1'e, anasayfa icin 2'ye basınız: ";
                cin >> secim2;
                if (secim2 == 2)
                {
                    goto anasayfa;
                }
            } while (secim2 == 1);
        }
        else if (secim == 2)
        {
            do {
                secim2 = 0;
                system("cls");
                char harf;
                cout << "Sayısı bulunacak harf: ";
                cin >> harf;
                cout << "Girdiğiniz ''" << harf << "'' harfinden " << harf_say(cumle, harf) << " adet var." << endl;
                cout << "Tekrar için 1'e, anasayfa icin 2'ye basınız: ";
                cin >> secim2;
                if (secim2 == 2)
                {
                    goto anasayfa;
                }
            } while (secim2 == 1);
        }
        else if (secim == 3)
        {
            do
            {
                secim2 = 0;
                system("cls");
                char harf, harff;
                cout << "Silinecek harf: ";
                cin >> harf;
                cout << "Yerine gelecek harf: ";
                cin >> harff;
                cout << "Yeni cümle: " << harf_cevir(cumle, harf, harff) << endl;
                cout << "Tekrar için 1'e, anasayfa icin 2'ye basınız: ";
                cin >> secim2;
                if (secim2 == 2)
                {
                    goto anasayfa;
                }
            } while (secim2 == 1);

        }
        cin.ignore();
    } while (secim == 4);
}

// Programı çalıştır: Ctrl + F5 veya Hata Ayıkla > Hata Ayıklamadan Başlat menüsü
// Programda hata ayıkla: F5 veya Hata Ayıkla > Hata Ayıklamayı Başlat menüsü

// Kullanmaya Başlama İpuçları: 
//   1. Dosyaları eklemek/yönetmek için Çözüm Gezgini penceresini kullanın
//   2. Kaynak denetimine bağlanmak için Takım Gezgini penceresini kullanın
//   3. Derleme çıktısını ve diğer iletileri görmek için Çıktı penceresini kullanın
//   4. Hataları görüntülemek için Hata Listesi penceresini kullanın
//   5. Yeni kod dosyaları oluşturmak için Projeye Git > Yeni Öğe ekle veya varolan kod dosyalarını projeye eklemek için Proje > Var Olan Öğeyi Ekle adımlarını izleyin
//   6. Bu projeyi daha sonra yeniden açmak için Dosya > Aç > Proje'ye gidip .sln uzantılı dosyayı seçin
