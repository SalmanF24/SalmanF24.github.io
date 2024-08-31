#include <iostream>
#include <conio.h>
#include <fstream.h>

main(){
	ifstream filetext;
	
	filetext.open("contohfile.txt");
	
	filetext<< "ini contoh teks pada file contohfile.txt";
	filetext<<endl;
	filetext<<"Yang ini baris ke 2";
	filetext.close();
	
	cout<<"file contohfile.txt sudah disimpan";
	
	getch();
}