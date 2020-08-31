#ifndef BAKLAVA_GENERATOR
#define BAKLAVA_GENERATOR
#include <string>


//class signature
class baklava_generator  
{
	private:
		char ana_madde;
		int dilim_sayisi;
		int dilim_boyutu;


	public:
		baklava_generator();
		~baklava_generator();
		void print_to_screen();
		void kac_dilim(int a);
		void ne_kadar_buyuk(int b);
		void neyli(char c);

};


#endif