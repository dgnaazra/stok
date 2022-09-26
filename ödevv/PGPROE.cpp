

#include <iostream>
#include<fstream>
#include<string>
#include<locale.h>

using namespace std;

int main(int arge, char* argv[])

{
	

		setlocale(LC_ALL, "TR");
		//urun.txt dosyasında yer alacaklar 

		string urunKodu;
		string urunAdi;
		string uretici;
		int teminSuresi;
		string uretimTarihi;
		long fiyat;
		double fiyatOzel;
		float kdvOrani;
		int stokAdedi;
		//cari.txt dosyasında yer alacaklar
		string firmaNo;
		string firmaAdi;
		string firmaTelefon;
		string firmaSorumlusu;
		string musterikategorisi;
		string adres;
		//sipariş.txt dosyasında yer alacaklar

		string siparisTarihi;
		double siparisTutari;
		string siparisListesiDosyasi;
		int urunAdedi;
		string siparisiAlan;
		//sipariş listesi dosyasında ter alacaklar

		int secim;
		int x = 1, y = 2, z = 3, t = 4;
		do
		{
			cout << "yapmak istediğiniz işlemi seçiniz" << endl;
			cout << "1-ürün işlemleri" << endl;
			cout << "2-müşteri dosyası işlemleri" << endl;
			cout << "3-sipariş işlemleri" << endl;
			cout << "4-programdan çıkış" << endl;
			cin >> secim;
			if (secim != x && secim != y && secim != z && secim != t)
				cout << "tekrar seçim yapınız" << endl;
		} while (secim != x && secim != y && secim != z && secim != t);
		char tercih = 'evet';
		char cevap = 'e';
		//aşağıdaki kod bloklarında ürünle ilgili olan işlemleri yaptım
		string secenek;
		string a, b, c, d, e;
		a = "a";
		b = "b";
		c = "c";
		d = "d";
		e = "e";
		//	do {

		if (secim == x) {
			cout << "aşağıdaki seçeneklerden birini seçiniz " << endl;
			cout << "a-ürün ekleme " << endl << "b-ürün arama" << endl << "c-ürün listeleme" << endl << "d-ürün düzeltme" << endl << "e-ürün silme" << endl;
			cin >> secenek;
		}
		if (secim == x && secenek == a)
		{
			do {
				ofstream YazmaDosyasi;
				YazmaDosyasi.open("urun.txt");

				cout << "ürün kodu :" << endl;
				cin >> urunKodu;
				cout << "ürün adı :" << endl;
				cin >> urunAdi;
				cout << "üretici :" << endl;
				cin >> uretici;
				cout << "temin süresi :" << endl;
				cin >> teminSuresi;
				cout << "üretim tarihi :" << endl;
				cin >> uretimTarihi;
				cout << "fiyat genel müşteriler için :" << endl;
				cin >> fiyat;
				cout << "fiyat iyi müşteriler için :" << endl;
				cin >> fiyatOzel;
				cout << "kdv oranı :" << endl;
				cin >> kdvOrani;
				cout << "stok adedi :" << endl;
				cin >> stokAdedi;

				YazmaDosyasi << urunKodu << endl << urunAdi << endl << teminSuresi << endl << uretimTarihi
					<< endl << fiyat << endl << fiyatOzel << endl << kdvOrani << endl << stokAdedi;

				cout << "ürün ekleme  bilgileri girildi" << endl;
				cout << "ürün eklemeye devam etmek istiyor musunuz? (e/h)" << endl;
				cin >> cevap;
			} while (cevap == 'e');
		}


		if (secim == x && secenek == b)
		{
			string urunkodu;
			cout << "ürün kodunu giriniz";
			cin >> urunkodu;
			ifstream OkumaDosyasi;
			OkumaDosyasi.open("urun.txt");
			while (!OkumaDosyasi.eof())

				OkumaDosyasi >> urunKodu >> urunAdi >> teminSuresi >> uretimTarihi >> fiyat >> fiyatOzel >> kdvOrani >> stokAdedi;
			if (urunKodu == urunkodu)
			{
				cout << "ürün bilgileri" << endl;
				cout << "ürün kodu :" << urunKodu << endl;
				cout << "ürün adı :" << urunAdi << endl;
				cout << "üreticisi" << uretici << endl;
				cout << "temin süresi :" << teminSuresi << endl;
				cout << "üretim tarihi :" << uretimTarihi << endl;
				cout << "genel müşteriler için fiyat :" << fiyat << endl;
				cout << "özel müşteriler için fiyat :" << fiyatOzel << endl;
				cout << "kdv oranı :" << kdvOrani << endl;
				cout << "stok adedi :" << stokAdedi << endl;
			}
			OkumaDosyasi.close();
		}
		if (secim == x && secenek == d)
		{
			string duzeltilecekurun;
			cout << "düzeltilecek ürünün kodunu giriniz : ";
			cin >> duzeltilecekurun;
			ifstream OkumaDosyasi("urun.txt");
			ofstream YazmaDosyasi("urun.tmp");
			while (!OkumaDosyasi.eof())
			{
				OkumaDosyasi >> urunKodu >> urunAdi >> teminSuresi >> uretimTarihi >> fiyat >> fiyatOzel >> kdvOrani >> stokAdedi;
				if (duzeltilecekurun == urunKodu)
				{
					cout << " dosyadaki kayıt ";
					cout << "ürün bilgileri" << endl;
					cout << "ürün kodu :" << urunKodu << endl;
					cout << "ürün adı :" << urunAdi << endl;
					cout << "üreticisi" << uretici << endl;
					cout << "temin süresi :" << teminSuresi << endl;
					cout << "üretim tarihi :" << uretimTarihi << endl;
					cout << "genel müşteriler için fiyat :" << fiyat << endl;
					cout << "özel müşteriler için fiyat :" << fiyatOzel << endl;
					cout << "kdv oranı :" << kdvOrani << endl;
					cout << "stok adedi :" << stokAdedi << endl;
					cout << endl;
					cout << "yeni bilgileri giriniz";
					cout << endl;
					cout << "ürün kodu :" << endl;
					cin >> urunKodu;
					cout << "ürün adı :" << endl;
					cin >> urunAdi;
					cout << "üretici :" << endl;
					cin >> uretici;
					cout << "temin süresi :" << endl;
					cin >> teminSuresi;
					cout << "üretim tarihi :" << endl;
					cin >> uretimTarihi;
					cout << "fiyat genel müşteriler için :" << endl;
					cin >> fiyat;
					cout << "fiyat iyi müşteriler için :" << endl;
					cin >> fiyatOzel;
					cout << "kdv oranı :" << endl;
					cin >> kdvOrani;
					cout << "stok adedi :" << endl;
					cin >> stokAdedi;

					YazmaDosyasi << urunKodu << endl << urunAdi << endl << teminSuresi << endl << uretimTarihi
						<< endl << fiyat << endl << fiyatOzel << endl << kdvOrani << endl << stokAdedi;
				}
				else
				{
					YazmaDosyasi << urunKodu << endl << urunAdi << endl << teminSuresi << endl << uretimTarihi
						<< endl << fiyat << endl << fiyatOzel << endl << kdvOrani << endl << stokAdedi;
				}
			}
			YazmaDosyasi.close();
			OkumaDosyasi.close();
			remove("urun.txt");
			rename("urun.tmp", "urun.txt");
		}

		if (secim == 1 && secenek == e)
		{
			string arananurun;
			cout << "silinecek ürünün kodu: "; cin >> arananurun;
			ifstream OkumaDosyasi("urun.txt");
			ofstream YazmaDosyasi("urun.tmp");
			while (!OkumaDosyasi.eof())
			{
				OkumaDosyasi >> urunKodu >> urunAdi >> teminSuresi >> uretimTarihi >> fiyat >> fiyatOzel >> kdvOrani >> stokAdedi;
				if (arananurun == urunKodu) {
					//silinecek ürün gösterilecek fakat yedek dosyaya kayıt edilmeyecek
					cout << "dosyadaki bilgiler" << endl;
					cout << "ürün bilgileri" << endl;
					cout << "ürün kodu :" << urunKodu << endl;
					cout << "ürün adı :" << urunAdi << endl;
					cout << "üreticisi" << uretici << endl;
					cout << "temin süresi :" << teminSuresi << endl;
					cout << "üretim tarihi :" << uretimTarihi << endl;
					cout << "genel müşteriler için fiyat :" << fiyat << endl;
					cout << "özel müşteriler için fiyat :" << fiyatOzel << endl;
					cout << "kdv oranı :" << kdvOrani << endl;
					cout << "stok adedi :" << stokAdedi << endl;

				}
				else
				{
					//silinmeyecek ürünü yedek dosyaya kaydetme

					YazmaDosyasi << urunKodu << endl << urunAdi << endl << teminSuresi << endl << uretimTarihi
						<< endl << fiyat << endl << fiyatOzel << endl << kdvOrani << endl << stokAdedi;

				}
			}
			YazmaDosyasi.close();
			OkumaDosyasi.close();
			//asıl ürün dosyayı silme
			remove("urun.txt");
			//yedek dosyayı asıl dosya olarak değiştirme
			rename("urun.tmp", "urun.txt");

		}
		//müşteri ile ilgili işlemler aşağıdaki kod bloklarında bulunmaktadır
		string f, g, h, i;
		f = "f";
		g = "g";
		h = "h";
		i = "i";

		if (secim == y) {
			cout << "aşağıdaki seçeneklerden birini seçiniz " << endl;
			cout << "f-müşteri ekleme " << endl << "g-müşteri arama" << endl << "h-müşteri düzeltme" << endl << "i-müşteri silme" << endl;
			cin >> secenek;
		}



		if (secim == y && secenek == f)
		{

			do {
				ofstream DosyaYazma;
				DosyaYazma.open("cari.txt");

				cout << "firma no :" << endl;
				cin >> firmaNo;
				cout << "firma adı :" << endl;
				cin >> firmaAdi;
				cout << "firma telefon :" << endl;
				cin >> firmaTelefon;
				cout << "firma sorumlusu :" << endl;
				cin >> firmaSorumlusu;
				cout << "müşteri kategorisi(genel/özel) :" << endl;
				cin >> musterikategorisi;
				cout << "adres :" << endl;
				cin >> adres;


				DosyaYazma << firmaNo << endl << firmaAdi << endl << firmaTelefon << endl << firmaSorumlusu
					<< endl << musterikategorisi << endl << adres << endl;

				cout << "müşteri bilgileri girildi" << endl;
				cout << "müşteri eklemeye devam etmek istiyor musunuz? (e/h)" << endl;
				cin >> cevap;
			} while (cevap == 'e');
		}
		if (secim == 2 && secenek == g)
		{
			string firmano;
			cout << "firma numarasını giriniz" << endl;
			cin >> firmano;
			ifstream DosyaOkuma;
			DosyaOkuma.open("cari.txt");
			while (!DosyaOkuma.eof())

				DosyaOkuma >> firmaNo >> firmaAdi >> firmaTelefon >> firmaSorumlusu >> musterikategorisi >> adres;
			if (firmaNo == firmano)
			{
				cout << "müşteri bilgileri" << endl;
				cout << "firma numarası :" << firmaNo << endl;
				cout << "firma adı :" << firmaAdi << endl;
				cout << "firmanın telefonu :" << firmaTelefon << endl;
				cout << "firmanın sorumlusu :" << firmaSorumlusu << endl;
				cout << "müşteri kategorisi :" << musterikategorisi << endl;
				cout << "adres :" << adres << endl;

			}
			DosyaOkuma.close();

		}
		if (secim == y && secenek == h)
		{
			string duzeltilecekmusteri;
			cout << "düzeltilecek firma numarasını giriniz : ";
			cin >> duzeltilecekmusteri;
			ifstream DosyaOkuma("cari.txt");
			ofstream DosyaYazma("cari.tmp");
			while (!DosyaOkuma.eof())
			{
				DosyaOkuma >> firmaNo >> firmaAdi >> firmaTelefon >> firmaSorumlusu >> musterikategorisi >> adres;
				if (duzeltilecekmusteri == firmaNo)
				{
					cout << "dosydaki kayıt";
					cout << "müşteri bilgileri" << endl;
					cout << "firma numarası :" << firmaNo << endl;
					cout << "firma adı :" << firmaAdi << endl;
					cout << "firmanın telefonu :" << firmaTelefon << endl;
					cout << "firmanın sorumlusu :" << firmaSorumlusu << endl;
					cout << "müşteri kategorisi :" << musterikategorisi << endl;
					cout << "adres :" << adres << endl;
					cout << endl;
					cout << "yeni bilgileri giriniz";
					cout << endl;
					cout << "firma no :" << endl;
					cin >> firmaNo;
					cout << "firma adı :" << endl;
					cin >> firmaAdi;
					cout << "firma telefon :" << endl;
					cin >> firmaTelefon;
					cout << "firma sorumlusu :" << endl;
					cin >> firmaSorumlusu;
					cout << "müşteri kategorisi(genel/özel) :" << endl;
					cin >> musterikategorisi;
					cout << "adres :" << endl;
					cin >> adres;


					DosyaYazma << firmaNo << endl << firmaAdi << endl << firmaTelefon << endl << firmaSorumlusu
						<< endl << musterikategorisi << endl << adres << endl;

				}
				else
				{

					DosyaYazma << firmaNo << endl << firmaAdi << endl << firmaTelefon << endl << firmaSorumlusu
						<< endl << musterikategorisi << endl << adres << endl;

				}
			}
			DosyaYazma.close();
			DosyaOkuma.close();
			remove("cari.txt");
			rename("cari.tmp", "cari.txt");
		}
		if (secim == 2 && secenek == i)
		{
			string arananmusteri;
			cout << "silinecek müşterinin firma numarası: "; cin >> arananmusteri;
			ifstream DosyaOkuma("cari.txt");
			ofstream DosyaYazma("cari.tmp");
			while (!DosyaOkuma.eof())
			{
				DosyaOkuma >> firmaNo >> firmaAdi >> firmaTelefon >> firmaSorumlusu >> musterikategorisi >> adres;
				if (arananmusteri == firmaNo) {
					//silinecek ürün gösterilecek fakat yedek dosyaya kayıt edilmeyecek
					cout << "dosyadaki bilgiler" << endl;
					cout << "müşteri bilgileri" << endl;
					cout << "firma numarası :" << firmaNo << endl;
					cout << "firma adı :" << firmaAdi << endl;
					cout << "firma telefon :" << firmaTelefon << endl;
					cout << "firma sorumlusu :" << firmaSorumlusu << endl;
					cout << "müşteri kategorisi (genel/özel) :" << musterikategorisi << endl;
					cout << "adres :" << adres << endl;

				}
				else
				{
					//silinmeyecek ürünü yedek dosyaya kaydetme

					DosyaYazma << firmaNo << endl << firmaAdi << endl << firmaTelefon << endl << firmaSorumlusu
						<< endl << musterikategorisi << endl << adres << endl;

				}
			}
			DosyaYazma.close();
			DosyaOkuma.close();
			//asıl ürün dosyayı silme
			remove("cari.txt");
			//yedek dosyayı asıl dosya olarak değiştirme
			rename("cari.tmp", "cari.txt");

		}
		string j, k, l, m, n;
		j = "j";
		k = "k";
		l = "l";
		m = "m";
		n = "n";
		if (secim == z) {
			cout << "aşağıdaki seçeneklerden birini seçiniz " << endl;
			cout << "j-sipariş oluştur " << endl << "k-sipariş ara" << endl << "l-sipariş düzeltme" << endl << "m-sipariş raporlama" << endl<<"n-sipariş silme";
			cin >> secenek;
		}
		if (secim == z && secenek == j)
		{
			do {
				ofstream DosyaYaz;
				DosyaYaz.open("siparis.txt");

				cout << "firma numarası :" << endl;
				cin >> firmaNo;
				cout << "sipariş tarihi :" << endl;
				cin >> siparisTarihi;
				cout << "sipariş tutarı :" << endl;
				cin >> siparisTutari;

				cout << "sipariş listesi dosyası :" << endl;
				ofstream SiparisListesiDosyasiYaz;
				SiparisListesiDosyasiYaz.open("SLD.txt");
				cout << "ürün kodu : ";
				cin >> urunKodu;
				cout << "ürün adedi : ";
				cin >> urunAdedi;
				
				SiparisListesiDosyasiYaz.close();
				cout << "siparişi alan :" << endl;
				cin >> siparisiAlan;
				

				DosyaYaz << firmaNo << endl << siparisTarihi << endl << siparisTutari << endl << siparisListesiDosyasi
					<< endl << siparisiAlan << endl ;

				cout << "sipariş oluşturma bilgileri girildi" << endl;
				cout << "sipariş oluşturmaya devam etmek istiyor musunuz? (e/h)" << endl;
				cin >> cevap;
			} while (cevap == 'e');
		}


		if (secim == z && secenek == k)
		{
			int siparistutarı;
			cout << "siparişinizin tutarını giriniz";
			cin >> siparistutarı;
			ifstream DosyaOku;
			DosyaOku.open("siparis.txt");
			while (!DosyaOku.eof())

				DosyaOku >> firmaNo >> siparisTarihi >> siparisTutari >> siparisListesiDosyasi
				>>  siparisiAlan ;
			if (siparisTutari == siparistutarı)
			{
				cout << "sipariş bilgileri" << endl;
				cout << "firma numarası :" << firmaNo << endl;
				cout << "sipariş tarihi :" << siparisTarihi << endl;
				cout << "sipariş tutarı :" << siparisTutari << endl;
				cout << "sipariş listesi dosyası :" <<  endl;
				ifstream SiparisListesiDosyasiOku;
				SiparisListesiDosyasiOku.open("SLD.txt");
				SiparisListesiDosyasiOku >> urunKodu >> urunAdedi ;
				cout << "ürün kodu :" << urunKodu << endl;
				cout << "ürün adedi :" << urunAdedi << endl;
				SiparisListesiDosyasiOku.close();

				cout << "siparişi alan :" << siparisiAlan << endl;
				
			}
			DosyaOku.close();
			
		}
		if (secim == z && secenek == l)
		{
			int duzeltileceksiparis;
			cout << "düzeltilecek siparişin tarihi giriniz : ";
			cin >> duzeltileceksiparis;
			ifstream DosyaOku("siparis.txt");
			ofstream DosyaYaz("siparis.tmp");
			while (!DosyaOku.eof())
			{
				
				DosyaOku >> firmaNo  >> siparisTarihi >>  siparisTutari  >> siparisListesiDosyasi
					>>  siparisiAlan ;
				if (duzeltileceksiparis == siparisTutari)
				{
					cout << "firma numarası :" << firmaNo << endl;
					cout << "sipariş tarihi :" << siparisTarihi << endl;
					cout << "sipariş tutarı :" << siparisTutari << endl;
					cout << "sipariş listesi dosyası :" << endl;
					ifstream SiparisListesiDosyasiOku;
					SiparisListesiDosyasiOku.open("SLD.txt");
					SiparisListesiDosyasiOku >> urunKodu >>  urunAdedi ;
					cout << "ürün kodu :" << urunKodu << endl;
					cout << "ürün adedi :" << urunAdedi << endl;
					SiparisListesiDosyasiOku.close();

					cout << "siparişi alan :" << siparisiAlan << endl;

					cout << endl;
					cout << "yeni bilgileri giriniz";
					cout << endl;
					
					cout << "firma numarası :" << endl;
					cin >> firmaNo;
					cout << "sipariş tarihi :" << endl;
					cin >> siparisTarihi;
					cout << "sipariş tutarı :" << endl;
					cin >> siparisTutari;

					cout << "sipariş listesi dosyası :" << endl;
					ofstream SiparisListesiDosyasiYaz;
					SiparisListesiDosyasiYaz.open("SLD.txt");
					cout << "ürün kodu : ";
					cin >> urunKodu;
					cout << "ürün adedi : ";
					cin >> urunAdedi;
					SiparisListesiDosyasiYaz.close();

					cout << "siparişi alan :" << endl;
					cin >> siparisiAlan;

					DosyaYaz << firmaNo << endl << siparisTarihi << endl << siparisTutari << endl << siparisListesiDosyasi
						<< endl << siparisiAlan << endl;
				}
				else
				{
					DosyaYaz << firmaNo << endl << siparisTarihi << endl << siparisTutari << endl << siparisListesiDosyasi
						<< endl << siparisiAlan << endl;
				}
			}
			remove("siparis.txt");
			rename("siparis.tmp", "siparis.txt");

			DosyaOku >> firmaNo >> siparisTarihi >> siparisTutari >> siparisListesiDosyasi >> siparisiAlan;
			DosyaYaz.close();

			DosyaOku.close();
			
		}
		if (secim == z && secenek == m)
		{
			ifstream DosyaOku("siparis.txt");
			do
			{
				DosyaOku >> firmaNo >> siparisTarihi >> siparisTutari >> siparisiAlan;
				cout << "Firma no:" << firmaNo << endl;
				cout << "Sipariş Tarihi:" << siparisTarihi << endl;
				cout << "Sipariş Tutarı:" << siparisTutari << endl;
				cout << "Siparişi Alan:" << siparisiAlan << endl;


			} while (DosyaOku.eof());
			DosyaOku.close();
		}
		if (secim == z && secenek == n)
		{
			string aranansiparis;
			cout << "silinecek sipariş tarihi: "; cin >> aranansiparis;
			ifstream DosyaOku("siparis.txt");
			ofstream DosyaYaz("siparis.tmp");
			while (!DosyaOku.eof())
			{
				
				if (aranansiparis == siparisTarihi) {
					//silinecek sipariş gösterilecek fakat yedek dosyaya kayıt edilmeyecek
					cout << "dosyadaki bilgiler" << endl;

					cout << "firma numarası :" << firmaNo << endl;
					cout << "sipariş tarihi :" << siparisTarihi << endl;
					cout << "sipariş tutarı :" << siparisTutari << endl;
					cout << "sipariş listesi dosyası :" << endl;
					ifstream SiparisListesiDosyasiOku;
					SiparisListesiDosyasiOku.open("SLD.txt");
					SiparisListesiDosyasiOku >> urunKodu  >> urunAdedi ;
					cout << "ürün kodu :" << urunKodu << endl;
					cout << "ürün adedi :" << urunAdedi << endl;
					SiparisListesiDosyasiOku.close();

					cout << "siparişi alan :" << siparisiAlan << endl;

				}
				else
				{
					//silinmeyecek siparişi yedek dosyaya kaydetme

					DosyaYaz << firmaNo << endl << siparisTarihi << endl << siparisTutari << endl << siparisListesiDosyasi
						<< endl << siparisiAlan << endl;
				}
			}
			DosyaYaz.close();
			DosyaOku.close();
			//asıl sipariş dosyasını silme
			remove("siparis.txt");
			//yedek dosyayı asıl dosya olarak değiştirme
			rename("siparis.tmp", "siparis.txt");

		}
		
}
