#include<iostream>

struct Trojuhelnik {
	int a, b, c;
} t;

bool lzeSestrojit(Trojuhelnik* t) {
	return (t->a + t->b > t->c && t->a + t->c > t->b && t->c + t->b > t->a) ? true : false;
}

int main(int agrc, char* argv) {
	int c;

	std::cout << "Trojuhelnik\nKolik chcete nacist trojuhelniku:";
	std::cin >> c;

	Trojuhelnik* ukazatel = new Trojuhelnik[c];

	for (int i = 0; i < c; i++)
	{
		std::cout << "\nTrojuhelnik " << i + 1 << ":\n";
		std::cout << "Zadej stranu a: ";
		std::cin >> (ukazatel + i)->a;
		std::cout << "Zadej stranu b: ";
		std::cin >> (ukazatel + i)->b;
		std::cout << "Zadej stranu c: ";
		std::cin >> (ukazatel + i)->c;

		if (lzeSestrojit(ukazatel + i)) {
			std::cout << "O = " << (ukazatel + i)->a + (ukazatel + i)->b + (ukazatel + i)->c << "\n";
		}
		else {
			std::cout << "Trojuhelnik " << i + 1 << " nelze sestrojit\n";
		}
	}

	delete[](ukazatel);
	return 0;
}