#include <iostream>
#include <fstream>
using namespace std;
int main()
{
                  	int n, //etap� skai�ius
                                       	t, //laikas
                                       	k,               	//pataikyt� ��vi� skai�ius
                                       	x,               	// atlikt� ��vi� skai�ius
                                       	min=0,       	//bendras minu�i� skai�ius
                                       	b;               	//baudos minu�i� skai�ius

                  	ifstream fd("Duomenys.txt");
                  	fd >> n >> x >> b;

                  	for (int i = 0; i < n; i++)
                  	{
                                       	fd >> t >> k;
                                       	min += t;
                                       	min = min + b * (x - k);
                  	}

                  	ofstream fr("Rezultatai.txt");
                  	fr << min;
}
