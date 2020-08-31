// emrullah çelik -- cpp howework

#include <iostream>
#include "baklava_generator.hpp"
#include <string>

using namespace std;


int main(){

    int dilim_boyutu;
    int kac_dilim;
    char neyli;

 
    baklava_generator yeni_siparis;


    cout <<"Lütfen dilim_boyutu dilim_sayısı ve neyli olacağını giriniz:" << endl;
    cout << " dilim boyutu pozitif tek bir sayı olmalıdır: ";

    cin >> dilim_boyutu;

    cout << "\n dilim sayısı tam kare bir sayı olmalıdır: ";

    cin >> kac_dilim;

    cout << "\n  tek karakter ile neyli olacağını seçiniz : ";

    cin >> neyli;

    // dilim sayısı kare olmalı
    yeni_siparis.kac_dilim(kac_dilim);

    // dilim boyutu tek olmalı
    yeni_siparis.ne_kadar_buyuk(dilim_boyutu);
    yeni_siparis.neyli(neyli);
    yeni_siparis.print_to_screen();




return 0;

}

