#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <cstdlib> // for rand() and srand()
#include <ctime> // for time()
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void Print(std::vector<int> v);

int main(int argc, char** argv) {

    const int n = 10;
    std::vector<int> A(n);
    srand(time(NULL));
    generate(A.begin(), A.end(), [] () {
	    return rand() % 100;
	    });

   Print(A); 
   
   int sum = 0;

   sum = std::accumulate(A.begin(),A.end(), 0);
   
   std::cout << "TONG CUA MANG: " << sum << '\n';
   if (sum & 1){
	std::cout << "KHONG CO CACH CHIA MANG!\n";
    }else{
	int leftSum = 0;
	int rightSum = sum / 2;
	std::vector<int> leftArray;

	for (int x : A)
	{
	    leftSum += x;
	    leftArray.push_back(x);
	    if (leftSum == rightSum)
		break;
	}

	std::vector<int> rightArray;
	for (int i = leftArray.size() - 1; i < A.size(); ++i)
	    rightArray.push_back(A[i]);

	std::cout << "MANG BEN TRAI: \n";
	std::cout << "TONG MANG BEN TRAI: " << leftSum << '\n';
	Print(leftArray);

	std::cout << "MANG BEN PHAI: \n";
	std::cout << "TONG MANG BEN PHAI: " << rightSum << '\n';
	Print(rightArray);
    }

    return 0;
}

void Print(std::vector<int> v)
{
    for (int x : v)
	std::cout << x << " ";
    std::cout << '\n';
}
