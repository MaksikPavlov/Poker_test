#include<iostream>
#include<string>
#include<fstream>
#include<ctime>
using namespace std;

int pocket[5];

//функция для рандомайзера без привязки к файлу
void rand_arr() {
	srand(time(0));
	for (int i = 0; i < 5; i++) {
		pocket[i] = rand() % 13 + 1;
	};
}
int main() {
	ofstream fout;
	ifstream fin;

	/*fout.open("ex.txt");
	if (!fout.is_open()) {
		cout << "Error!" << '\n';
	}
	else {
		string stroka;
		cout << "Input stroka: ";
		cin >> stroka;
		fout << stroka;
		}
	fout.close();*/

	//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	//
	//для каждого отдельного примера в функциях bool заменить название файла!
	//
	//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

	string str = "";
	fin.open("ex.txt");
	if (!fin.is_open()) {
		cout << "Troble!" << '\n';
	}
	else {
		while (!fin.eof()) {
			getline(fin, str);
		}
		cout << str << '\n';

		string probel = " ";
		string controlstr = ",.:;";
		for (int i = 0; i < str.length(); i++)
			for (int j = 0; j < 4; j++) {
				if (str.at(i) == controlstr.at(j)) {
					str.insert(i + 1, probel);
					i++;
				};
			};
	}
	fin.close();

	fout.open("ex.txt");
	if (!fout.is_open()) {
		cout << "Error!" << '\n';
	}
	else {
		fout << str;
	}
	fout.close();
	return 0;
}
