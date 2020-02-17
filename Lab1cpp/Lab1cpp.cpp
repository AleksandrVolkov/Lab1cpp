using namespace std;
#include <iostream>

bool contain(const char ch, const char* strCharSet)
{
	bool flag = false;
	for (*strCharSet; *strCharSet; strCharSet++)
		if (ch == *strCharSet)
			flag = true;

	return flag;
}

int myStrspn(const char* str, const char* strCharSet) {
	int count = 0;

	for (*str; *str; str++)
		if (contain(*str, strCharSet))
			count++;
		else
			return count;

	return count;
}


int main()
{
	//Возвращает целочисленное значение, указывающее длину подстроки 
	//в str, которая полностью состоит из символов в strCharSet . 
	//Если str начинается с символа не в strCharSet, функция возвращает 0.

	setlocale(LC_ALL, "Russian");

	char strtext[] = "iiiiiiii1ittt123teeee1eeiiiiiil2ilйгод";
	char strCharSet[] = "123intel";

	int num = strspn(strtext, strCharSet);
	cout << "Количество найденных элементов системным методом: "
		<< num << "\n";

	int num1 = myStrspn(strtext, strCharSet);

	cout << "Количество найденных элементов моим методом: "
		<< num1 << "\n";

	char j;
	cin >> j;

}
