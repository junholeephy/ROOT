#include<iostream>
#include<time.h>
#include <cstdlib>
using namespace std;

int main()
{
	int m_nNum[]={1,4,5,14,17,20,26,27,34,37,40};


	int nDust,nSour,nTemp;
	srand(int(time(NULL)));
	for(int i=0;i<100;i++)
	{
		nDust = rand()%11;
		nSour = rand()%11;

		nTemp = m_nNum[nDust];
		m_nNum[nDust] = m_nNum[nSour];
		m_nNum[nSour] = nTemp;
	}


	for(int i=0; i<6; i++) {
	cout << m_nNum[i] << endl;
	}


	return 0;
}

