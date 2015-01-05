#include <cstdlib>
#include <cstdio>
#include <ctime>
#include <iostream>
using namespace std;

int rzutk(int n)
{
	int k;
    srand( time( NULL ) );
    k=rand() % n+1;
    return k;
}



int main()
{
	cout<<rzutk(6)<<endl;
	

}
