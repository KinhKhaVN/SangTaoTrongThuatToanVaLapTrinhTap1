#include <iostream> 
#include <vector>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int soDao(int x);
int UCLN(int a, int b);
int main(int argc, char** argv) {
	
	//int a, b;
	
	//a = 10;
	//b = 99;
	
	std::vector<int> v;
	v.push_back(10);
	for (int a = 1; a <= 9; ++a)
	{
	    for (int b = 1; b <= a - 1; ++b)
	    {
		if (UCLN(a * 10 + b, b * 10 + a) == 1){
		    v.push_back(a * 10 + b);
		    v.push_back(b * 10 + a);
		}
	    }
	}
	std::cout << "Co " << v.size() << " so than thien co 2 chu so!\n";	
	for (int x : v)
	    std::cout << x << '\n';

	return 0;
}


int soDao(int x)
{
    int y = 0;

    while (x != 0)
    {
	y = y * 10 + (x % 10);
	x /= 10;
    }

    return y;
}

int UCLN(int a, int b)
{
    int c = 0;

    while (b != 0)
    {
	c = a % b;
	a = b;
	b = c;
    }

    return a;	
}
