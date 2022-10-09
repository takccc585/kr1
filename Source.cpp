#include<iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	//1
	/*int hp;
	cin >> hp;
	bool s = hp > 0;
	cout << boolalpha << s;*/
	//2
	/*int temp;
	cin >> temp;
	if (temp>20) {
		cout <<"on" ;
	}
	else {
		cout << "off";
	}*/
	//3
	/*int tempP,tempK,vl;
	cin >> tempP >> tempK >> vl;
	if ((tempP > tempK) and (vl<80)){
		cout << "on";
	}
	else {
		cout << "off";
	}*/
	//4
	/*float y,x;
	cin >> x;
	if (x > 0) {
		y = sqrt(x - 2);
	}
	else if (x==0){
		y = 0;
	}
	else if (x < 0) {
		y = abs(x);
	}
		cout << y;*/
	//5
	/*int pal;
	cin >> pal;
		switch (pal) {
		case 1:cout << "большой" << endl; break;
		case 2:cout << "указательный" << endl; break;
		case 3:cout << "средний" << endl; break;
		case 4:cout << "безымянный" << endl; break;
		case 5:cout << "мизинец" << endl; break;
		default:cout << "ошибка" << endl; break;
	}*/
	//6
	/*int tempK, tempU;
	cin >> tempK >> tempU;
	if (tempK > 20) {
		cout << "включить кондиционер";
	}
	else if ((tempK > tempU) and (tempK < 20)){
		cout << "открыть окно";
	}
	else {
		cout << "на этом наши полномочия все";
	}*/
	return 0;
}
