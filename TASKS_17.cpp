#include"Libraries.h"

void task_1()//Тип 17 № 37336
{	
	vector<int> numbers;
	string file_name{ "G:\\ege.txt" };
	int max_sum{}, number{}, count = 0, pos_num = 0;
	//Создаем поток для чтения чисел из файла

	ifstream fin(file_name);
	fin >> number;
	numbers.push_back(number);
	while (fin)
	{	
		fin >> number;
		numbers.push_back(number);
		if (numbers[pos_num] % 3 == 0 || numbers[pos_num+1] % 3 == 0)
		{
			count++;
		}
		//Set max sum
		if ((numbers[pos_num] + numbers[pos_num + 1]) > max_sum)
		{
			max_sum = numbers[pos_num] + numbers[pos_num + 1];
		}
		pos_num++;
	}
	cout << count << "\t" << max_sum;
}

int main()
{
	task_1();
}