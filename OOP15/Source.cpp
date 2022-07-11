#include <iostream>
#include <vector>
#include <array>
#include <string>

//class A{};
//class User {
//	int id;
//	std::string name;
//	User() = delete;
//public:
//	explicit User(int num, std::string name): id(num), name(name) {}
//};

class Autovoz: public Auto {
public:
	Autovoz(){}
	Autovoz(Auto &AutoList){
		_data = new Auto[AutoList.size()];
		for (int i = 0; i < AutoList.size(); i++)
			_data[i] = AutoList[i];
		_size = AutoList.size();
	}

private:
	Auto* _data = nullptr;
	int _size = 0;
};

class Auto {
public:
	Auto() {}
	Auto(int price, int weight): _price(price), _weight(weight) {}
	void setPrice(int price) {
		_price = price;
	}
	int getPrice() {
		return _price;
	}
	void setWeight(int weight) {
		_weight = weight;
	}
	int getWeight() {
		return _weight;
	}

private:
	int _price = 0;
	int _weight = 0;
};

class Gazelle : public Auto {
public:
	Gazelle(){}
	Gazelle(int price, int weight) : Auto(price, weight) {}
	void getAuto(Auto& other) {
		_arr[0] = other;
	}

private:
	int _price = 0;
	int _weight = 0;
	Auto _arr[1];
};

int main() {
	setlocale(LC_ALL, "Russian");
	using namespace std;

	Auto car1(500, 1000);
	Auto car2(1500, 2500);
	Auto car3(1200, 1100);
	Gazelle car4(3000, 5000);
	car4.getAuto(car3);
	vector<Auto> cars(4);
	cars[0] = car1;
	cars[1] = car2;
	cars[2] = car3;
	cars[3] = car4;

	Autovoz CAR(cars);

	/*int a; 
	float f;
	__int16 shor;
	vector<float> coll1;
	array<int, 10> coll2;
	vector<User> coll3;
	coll3.reserve(100'000);
	array<User, 10> coll4;
	for (int i = 0; i < 100'000; i++) {
		coll3.emplace_back(i, "long name for example");
	}
	a = coll3.capacity();
	coll3.shrink_to_fit();
	a = coll3.capacity();

	vector<User> coll5;
	coll5.reserve(100'000);
	for (int i = 0; i < 100'000; i++) {
		coll3.push_back(User(i, "long name for example"));
	}

	int arr[5];
	for (auto ae : arr) {

	}*/



	/*
		Создать образец паттерна компановщик(пакет с пакетами)
		на примере автомобилей для крупного автоцентра.
		При перевозке автомобилей из точки А в точку Б 
		мы считаем что это происходит на автовозе. У авто есть вес и цена.
		При вызове метода Общей стоимости авто должен вернуть стоимость свою
		и всех размещённых на нём авто. Базовый класс композита должен предписывать
		наличие методов: получения общих свойств(стоимтость, вес), добавления авто
		в груз(изъятие авто из груза).
	*/

	return 0;
}