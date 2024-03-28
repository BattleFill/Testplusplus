#include <iostream>
#include <string>
using namespace std;
class Avtomobil {
private:
    string marka;
    string model;
    int year;
    string color;
    double probeg;
public:
    Avtomobil(string marka, string model, int year, string color, double probeg)
        : marka(marka), model(model), year(year), color(color), probeg(probeg) {}
    void Info() {
        cout << "Марка: " << marka << endl;
        cout << "Модель: " << model << endl;
        cout << "Год выпуска: " << year << endl;
        cout << "Цвет: " << color << endl;
        cout << "Пробег: " << probeg << " км" << endl;
    }
    void probegplus(double distance) {
        if (distance >= 0) {
            probeg += distance;
            cout << "Пробег увеличен на " << distance << " км." << endl;
        }
        else {
            cout << "Ошибка: расстояние не может быть отрицательным." << endl;
        }
    }
};
int main() {
    setlocale(LC_ALL, "RUS");
    Avtomobil moyAvtomobil("Tesla", "Model S", 2020, "Розовый", 0);
    moyAvtomobil.Info();
    moyAvtomobil.probegplus(100);
    moyAvtomobil.Info();
    moyAvtomobil.probegplus(-1);
    moyAvtomobil.Info();
    return 0;
}