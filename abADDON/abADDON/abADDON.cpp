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

void file_arr(){
	ofstream fout;
	ifstream fin;
	string str = "";
	fin.open("Set.txt");//сюда нужно будет просто впихнуть имя файла
	if (!fin.is_open()) {
		cout << "Troble!" << '\n';
	}
	else {
		while (!fin.eof()) {
			getline(fin, str);
		}
		cout << str << '\n';
	}
	fin.close();

	pocket[0] = str[0];
	pocket[1] = str[2];
	pocket[2] = str[4];
	pocket[3] = str[6];
	pocket[4] = str[8];

	/*fout.open("ex.txt");//сюда нужно будет просто впихнуть имя файла
	if (!fout.is_open()) {
		cout << "Error!" << '\n';
	}
	else {
		fout << str;
	}
	fout.close();*/
}
int main() {
	rand_arr();
	for (int i = 0; i < 5; i++)
		cout << pocket[i] << " ";
	cout << '\n';
	return 0;
}
