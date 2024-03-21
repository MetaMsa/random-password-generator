#include <iostream.h>

struct password{
	 int sayi[255];
	 char harf[255];
	 char ozelkarakter[255];

	 int uzunlukkar,uzunlukrakam,uzunlukozelkar;

	 int nu,kar,ozelkar,rakam;

	password(int no)
	{
	 cout<<"hosgeldiniz "<<no<<" numarali kullanici sirasiyla kac rakam kac karakter kac ozel karakter istediginizi giriniz"<<endl;

	 cin>>rakam>>kar>>ozelkar;

	 srand(time(0));

	 if(kar>0)
	 {
	  for(int i=0;i<kar;i++)
	  {
	   harfgen(i);
	  }
	 }

	 if(ozelkar>0)
	 {
	  for(int i=0;i<ozelkar;i++)
	  {
	   ozelgen(i);
	  }
	 }

	 if(rakam>0)
	 {
	  for(int i=0;i<rakam;i++)
	  {
	   sayigen(i);
	  }
	 }

	 uzunlukkar=kar;
	 uzunlukrakam=rakam;
	 uzunlukozelkar=ozelkar;
	 nu=no;
	}

	sayigen(int i)
	{
	 sayi[i]=rand()%10;
	}

	harfgen(int i)
	{
	 int x=rand()%123;
	 if(x<97) x=97;
	 harf[i]=char(x);
	}

	ozelgen(int i)
	{
	 int x=rand()%48;
	 if(x<33) x=33;
	 ozelkarakter[i]=char(x);
	}

	~password()
	{
	 cout<<nu<<" numarali kullanicinin "<<uzunlukkar+uzunlukozelkar+uzunlukrakam<<" haneli sifreniz: ";
	 for(int i=0;i<uzunlukrakam;i++) cout<<sayi[i];
	 for(int i=0;i<uzunlukkar;i++) cout<<harf[i];
	 for(int i=0;i<uzunlukozelkar;i++) cout<<ozelkarakter[i];
	}
};

main()
{
 int kar,ozelkar,rakam,no;

 while(1)
 {
 cout<<endl<<"kullanici numarani gir"<<endl;

 cin>>no;

 cout<<"oturum aciliyor lutfen bekliyiniz"<<endl;

 for(int i=0;i<3;i++){
  cout<<"*";
  for(int i=0;i<1000000000;i++);
 }

 system("CLS");

 {
 password user(no);
 }
 }
}
