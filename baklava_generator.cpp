#include <iostream>
#include "baklava_generator.hpp"
#include <string>
#include <cmath>

using namespace std;

baklava_generator::baklava_generator()
{
    cout << "Istediğiniz ozellikte baklava hazırlanacaktır." << endl;

}

baklava_generator::~baklava_generator()
{
    cout << dilim_sayisi << " dilim sayısında " << dilim_boyutu << "dilim boyutunda baklava hazır." << ana_madde << "baklava maddeli" << endl;

}

// Istenilen baklava ekrana yazdirilir.
void baklava_generator::print_to_screen(){

    int k = sqrt(dilim_sayisi);
    int kac_nokta_ust_sinir = k + 1;
    int kac_nokta = 0;
    int koseden = k*dilim_boyutu + kac_nokta_ust_sinir;

    cout << "koseden: " << koseden << endl;
    int flag = 1;
    int ilk_bosluk_baslangic = ((dilim_boyutu + 1)/2)*k + (dilim_boyutu+1)/2;


    int satir_arasi = (dilim_boyutu + 1)/2;


    for(int i = koseden; i>0; i--){




        if (kac_nokta < kac_nokta_ust_sinir && flag)
        {
            ilk_bosluk_baslangic -=  (dilim_boyutu+1)/2;
            kac_nokta++;
        }
        else if (kac_nokta>0)
        {
            flag = 0;
            kac_nokta--;
            ilk_bosluk_baslangic +=  (dilim_boyutu+1)/2;

        }
        
    
        int f = ilk_bosluk_baslangic;

        for (int j = 1; j <= kac_nokta; j++)
       {

                for(; f>=0; f--){
                    cout << " ";

                }

               cout << ana_madde ;

               for (int bos= 0; bos < dilim_boyutu; bos++)
               {
                   cout << " ";
               }
               
       }

        
       
        for (int h = 0; h < satir_arasi; h++)
        {
         cout << endl;
            
        }
        

         
        
           
        
    }
    
    

}

// dilim sayısını herhangi bir dogal sayının karesi olmalı
void baklava_generator::kac_dilim(int a){
    dilim_sayisi = a;
}


void baklava_generator::ne_kadar_buyuk(int b){
    dilim_boyutu = b;
}

void baklava_generator::neyli(char c){
    ana_madde = c;
}

