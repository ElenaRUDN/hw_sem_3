/*strlen - C - считает количество символов в строке - Length() в С++
* strcpy - C и С++ - копирует строку
* strсmp - С и C++ - сравнивает две строки
* strcat - C и С++ - объединяет две строки. На С++ можно использовать также "+"
* 
* 
*/

#include <string>
#include <iostream>
//using namespace std;
int lena;

int main() {
	std::string stroka;
	char help;
    std::cout << "Write text : " << std::endl;
	std::getline(std::cin, stroka);
	std::cout << stroka << std::endl;
	lena = stroka.length();
	for (int i = 0; i < lena; ++i) {
		for (int j = 0; j < lena - 1; ++j) {
			if (stroka[j] > stroka[j + 1]) {
				help = stroka[j];
				stroka[j] = stroka[j + 1];
				stroka[j + 1] = help;
			}
		}
	}
	for (int i = 0; i < lena; i++) {
		if (isalpha(stroka[i]) == false) {
			stroka.erase(i, 2);
			lena = lena - 2;
			std::cout << stroka << std::endl;
		}
	}
	std::cout << "We made this: " << stroka << std::endl;
	return 0;
}
