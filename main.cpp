#include <iostream>
#include <fstream>
using namespace std;
int main()
{
                  	int n, //etapø skaièius
                                       	t, //laikas
                                       	k,               	//pataikytø ðûviø skaièius
                                       	x,               	// atliktø ðûviø skaièius
                                       	min=0,       	//bendras minuèiø skaièius
                                       	b;               	//baudos minuèiø skaièius

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
