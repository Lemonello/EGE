#include"Libraries.h"

string file_name;

void task_1()//��� 17 � 37336
{
	vector<int> numbers;
	int max_sum{}, number{}, count = 0, pos_num = 0;
	//������� ����� ��� ������ ����� �� �����
	file_name = { "G:\\EGE_INFO\\37336.txt" };
	ifstream fin(file_name);
	fin >> number;
	numbers.push_back(number);
	while (fin)
	{
		fin >> number;
		numbers.push_back(number);
		if (numbers[pos_num] % 3 == 0 || numbers[pos_num + 1] % 3 == 0)
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
	cout << count << t << max_sum;
}

void task_2()//��� 17 �37337
{
	int num_count{ 10000 }, max_sum{}, count{ 0 }, d{ 160 }, p{ 7 };
	vector<int>numbers(num_count);
	file_name = { "G:\\EGE_INFO\\37337.txt"};
	ifstream fin(file_name);
	for (int i = 0; i < num_count; i++)
	{
		fin >> numbers[i];
	}

	// ��������� ������� � ����� �����, ��������������� ��������

	for (int i = 0; i < num_count; i++)
	{
		for (int j = i+1; j < num_count; j++)
		{	
			if (((numbers[i] % d) != (numbers[j] % d)) &&
				((numbers[i] % p) == 0 || (numbers[j] % p == 0)))
			{
				count++;
				if (numbers[i] + numbers[j] > max_sum)
				{
					max_sum = numbers[i] + numbers[j];
				}
			}
		}
	}
	cout << count << t << max_sum;
}

void task_3()//37340
{
	int diff{}, count_num{ 10000 }, count{ 0 }, max_sum{ 0 }, p = 31, d = 2;
	vector<int>numbers(count_num);
	file_name = { "G:\\EGE_INFO\\37340.txt" };
	ifstream fin(file_name);
	for (int i = 0; i < count_num; i++) fin >> numbers[i];

	for (int i = 0; i < count_num; i++)
	{
		for (int j = i+1; j < count_num; j++)
		{
			if (((numbers[i] - numbers[j]) % d == 0) &&
				((numbers[i] % p) == 0 || (numbers[j] % p) == 0))
			{
				count++;
				if (numbers[i] + numbers[j] > max_sum)
				{
					max_sum = numbers[i] + numbers[j];
				}
			}
		}
	}
	cout << count << t << max_sum;
}


int main()
{
	
}