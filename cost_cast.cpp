#include <iostream>
using namespace std;

int main(void)
{
	int a1 = 65;
	const int* b1 = &a1;
	char* c1 = (char *)(const_cast <int *>(b1));
	cout << c1;
	*c1 = *c1+1;
	cout << c1;
	return 0;
}
