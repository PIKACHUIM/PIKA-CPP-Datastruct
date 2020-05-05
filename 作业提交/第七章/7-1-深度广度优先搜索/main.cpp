#include "pics.cpp"
#include <iostream>
using namespace std;

int main(void)
{
	pics<int>test(1);
	test.adds(2);
	test.next[1]->adds(3);
	test.adds(4);
	test.next[2]->adds(5);
	test.next[2]->next[1]->adds(6);
	test.next[2]->adds(7);
	test.next[2]->next[2]->adds(8);
	test.next[2]->next[2]->next[1]->adds(9);
	test.next[1]->adds(test.next[2]->next[1]);
	test.next[1]->next[1]->adds(test.next[2]->next[1]->next[1]);
	test.next[2]->next[1]->adds(test.next[2]->next[2]->next[1]);
	test.next[2]->next[1]->next[1]->adds(test.next[2]->next[2]->next[1]->next[1]);
	cout << "-----------------\n原始图：\n-----------------\n";
	cout << "    1 - 2 - 3\n    |   |   |\n    4 - 5 - 6\n    |   |   |\n    7 - 8 - 9\n";
	cout <<   "-----------------\n深度优先：\n"; test.show(0, 1);
	cout << "\n-----------------\n广度优先：\n"; test.show(1, 2);
	cout << "\n-----------------\n";
}