//#include <stdio.h>
//#include <math.h>
//#define _CRT_SECURE_NO_WARNINGS
//
///*
//Nacrtati strukturni dijagram toka algoritma i na programskom jeziku C napisati program
//koji odreðuje i prikazuje sve proste brojeve manje od N.
//Celobrojni parametar N unosi korisnik.
//Ukoliko se pri izvršavanju programa za N unese vrednost 100, šta æe program prikazati na izlazu? 
//*/
//
//void pocetnicki();
//
//int da_li_je_prost(int i);
//void optimalno();
//
//void main()
//{
//	pocetnicki();
//	optimalno();
//}
//
//void pocetnicki()
//{
//	int i, j, N, i_jeste_prost;
//
//	printf("Unesite N: ");
//	scanf("%d", &N);
//
//	for (i = 2; i < N; i++)
//	{
//		i_jeste_prost = 1; // true
//		j = 2; // prvi broj kojim mozemo da probamo deljenje
//
//		// pokusacemo sa svakim brojem od j = 2 do j = i - 1 da nadjemo j koje deli i bez ostatka
//		// petlja se vrti sve dok nismo nasli nijedan broj (ostalo je i_jeste_prost na 1, jer nismo usli u telo if-a),
//		// ili nismo premasili i (da je j == i, ili j > i)
//		while(j < i && i_jeste_prost)
//		{
//			if (i % j == 0) // ostatak pri deljenju i sa j je nula
//			{
//				i_jeste_prost = 0;
//			}
//
//			j++;
//		}
//
//		if (i_jeste_prost)
//		{
//			printf("Prost broj: %d\n", i);
//		}
//	}
//
//	return 0;
//}
//
//// povratna vrednost funckije => 1 - true
//// povratna vrednost funkcije => 0 - false
//int da_li_je_prost(int i)
//{
//	int j;
//	double sqrt_i;
//
//	if (i < 2)
//	{
//		return 0; // 2 je prvi prost broj, sve manje nije
//	}
//
//	if (i == 2 || i == 3)
//	{
//		return 1; // 2 i 3 su prosti
//	}
//	
//	if (i % 2 == 0 || i % 3 == 0)
//	{
//		return 0; // i je deljiv sa 2 ili sa 3
//	}
//
//	sqrt_i = sqrt(i);
//	j = 5;
//
//	// ispitali smo da li 2, 3 i 4 (kao %2) dele i, prvi sledeci je 5 (j = 5)
//	// idemo sve dok je j manje od kvadratnog korena i (j <= sqrt_i)
//	// preskacemo 6 brojeva, jer bi npr znamo da 6 (%2 ili %3), 7 (%(j + 2)), 8 (%2), 9(%3), 10(%2) ne dele i
//	for (j = 5; j <= sqrt_i; j += 6)
//	{
//		// ispitujemo da li (j)5 ili (j + 2)5 + 2 dele i
//		if (i % j == 0 || i % (j + 2) == 0)
//		{
//			return 0; // j ili j + 2 dele i bez ostatka
//		}
//	}
//
//	return 1; // nismo uspeli da nadjemo j koje deli i, pa je broj prost
//}
//
//void optimalno()
//{
//	int i, N;
//
//	printf("Unesite N: ");
//	scanf("%d", &N);
//
//	for (i = 2; i < N; i++)
//	{
//		if (da_li_je_prost(i))
//		{
//			printf("Prost broj: %d\n", i);
//		}
//	}
//}