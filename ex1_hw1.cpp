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


int main() {
	std::string stroka, stroka1;
	char help;
	int kolvo = 0;
	int lena, lena1;
    std::cout << "Write text : " << std::endl;
	std::getline(std::cin, stroka);
	std::cout << stroka << std::endl;
	lena = stroka.length();
	for (int i = 0; i < lena; i++) {
		if (isalpha(stroka[i]) or isdigit(stroka[i])) {
			stroka1 += stroka[i];
		}
	}
	lena1 = stroka1.length();
	for (int i = 0; i < lena1; ++i) {
		for (int j = 0; j < lena1 - 1; ++j) {
			if (stroka1[j] > stroka1[j + 1]) {
				help = stroka1[j];
				stroka1[j] = stroka1[j + 1];
				stroka1[j + 1] = help;
			}
		}
	}
	std::cout << "We made this: " << stroka1 << std::endl;
	return 0;
}
