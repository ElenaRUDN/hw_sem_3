#include <iostream>;
#include <vector>;
#include <algorithm>;
#include <map>;
using namespace std;

void standart(vector<string>& names, vector<int>& marks) {
    names = { "Марк", "Лена", "Дима", "Миша", "Фил", "Диана", "Маша", "Соня", "Настя", "Алёна" };
    marks = { 75, 83, 91, 90, 95, 84, 88, 89, 77, 99 };
}

void random(vector<string>& names, vector<int>& marks, int razm) {
    for (int i = 0; i < razm; ++i) {
        string name;
        cout << "Введите имя" << endl;
        cin >> name;
        names.push_back(name);
        marks.push_back(rand() % 101);
    }
}

void vvod(vector<string>& names, vector<int>& marks) {
    int razm;
    cout << "Введите количество студентов: ";
    cin >> razm;
    cout << "Введите имена студентов и их баллы:\n";
    for (int i = 0; i < razm; ++i) {
        string name;
        int mark;
        cout << "Имя: " << endl;
        cin >> name;
        cout << "Балл:  " << endl;
        cin >> mark;
        names.push_back(name);
        marks.push_back(mark);
    }
}

void vec(const vector<string>& names, const vector<int>& marks) {
    cout << "Студенты и их оценки:\n";
    for (const auto& name : names) {
        cout << name << " ";
    }
    cout << endl;
    for (const auto& mark : marks) {
        cout << mark << " ";
    }
    cout << endl;
}

void iter(const vector<string>& names, const vector<int>& marks) {
    cout << "Студенты и их оценки :\n";
    for (auto it = names.begin(); it != names.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    for (auto it = marks.begin(); it != marks.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
}

void ind(const vector<string>& names, const vector<int>& marks) {
    cout << "Студенты и их оценки:\n";
    for (int i = 0; i < names.size(); ++i) {
        cout << names[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < marks.size(); ++i) {
        cout << marks[i] << " ";
    }
    cout << endl;
}

double srednee(const vector<int>& marks) {
    int sum = 0;
    for (int mark : marks) {
        sum += mark;
    }
    return static_cast<double>(sum) / marks.size();
}

int main() {
    vector<string> names;
    vector<int> marks;
    setlocale(LC_ALL, "Russian");

    int choice;
    cout << "Выберите то, что вам нужно:\n";
    cout << "1. Стандартные значения\n";
    cout << "2. Рандомные значения\n";
    cout << "3. Пользовательский ввод\n";
    cin >> choice;

    switch (choice) {
    case 1:
        standart(names, marks);
        break;
    case 2:
        int razm;
        cout << "Enter sample razm: ";
        cin >> razm;
        random(names, marks, razm);
        break;
    case 3:
        vvod(names, marks);
        break;
    default:
        cout << "Ошибка\n";
        return 0;
    }

    vec(names, marks);

    double average = srednee(marks);
    cout << "Средний балл: " << average << endl;

    return 0;
}