#include"Libraries.h"

string file_name;

void task_1()//Тип 17 № 37336
{
	vector<int> numbers;
	int max_sum{}, number{}, count = 0, pos_num = 0;
	//Создаем поток для чтения чисел из файла
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
	fin.close();
	cout << count << t << max_sum;
}

void task_2()//Тип 17 №37337
{
	int num_count{ 10000 }, max_sum{}, count{ 0 }, d{ 160 }, p{ 7 };
	vector<int>numbers(num_count);
	file_name = { "G:\\EGE_INFO\\37337.txt"};
	ifstream fin(file_name);
	for (int i = 0; i < num_count; i++)
	{
		fin >> numbers[i];
	}
	fin.close();
	// Переборка вектора и вывод чисел, соответствующих условиям

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
	fin.close();
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

void task_4()// 37341 
{
	int count_num{ 10000 }, count{ 0 }, max_sum{};
	vector<int>nums(count_num);
	file_name={ "G:\\EGE_INFO\\37341.txt" };

	ifstream fin(file_name);
	
	for (int i = 0; i < count_num; i++) fin >> nums[i];

	for (int i = 0; i < count_num; i++)
	{
		for (int j=i+1;j<count_num;j++)
		{
			if ((nums[i] - nums[j]) % 2 == 0 &&
				(nums[i] % 19 == 0 || nums[j] % 19 == 0))
			{
				count++;
				if (nums[i] + nums[j] >max_sum) max_sum = nums[i] + nums[j];
			}
		}
	}
	cout << count << t << max_sum;
}

void task_5() //37344
{
	int count_nums{ 10000 }, count{ 0 }, max_sum{};
	vector<int>nums(count_nums);
	file_name = { "G:\\EGE_INFO\\37344.txt" };
	ifstream fin(file_name);
	for (int i = 0; i < count_nums;i++) fin >> nums[i];
	fin.close();
	for (int i = 0; i < count_nums; i++)
	{
		for (int j = i + 1; j < count_nums; j++)
		{
			if (((nums[i] * nums[j]) % 10) == 0)
			{
				count++;
				if ((nums[i] + nums[j]) > max_sum) max_sum = nums[i] + nums[j];
			}
		}
	}
	cout << count << t << max_sum;
}

void task_6() //37370
{
	int count_num{ 10000 }, max_diff{}, count{ 0 };
	vector<int>nums(count_num);
	file_name = { "G:\\EGE_INFO\\37370.txt" };
	ifstream fin(file_name);
	for (int i = 0; i < count_num; i++) fin >> nums[i];
	fin.close();

	for (int i = 0; i < count_num; i++)
	{
		for (int j = i + 1; j < count_num; j++)
		{
			if ((nums[i] - nums[j]) % 60 == 0 && ((nums[i] % 15)== 0 || (nums[j] % 15) == 0))
			{
				count++;
				if (max_diff<(nums[i]-nums[j])) max_diff=nums[i]-nums[j];
			}
		}
	}
	cout << count << t << max_diff;
}

void task_7() //39246
{
	int count_vec{}, count{ 0 }, max_sum{}, number{};
	vector<int>nums;
	file_name = { "G:\\EGE_INFO\\39246.txt" };
	ifstream fin(file_name);
	while (fin)
	{
		fin >> number;
		nums.push_back(number);
	}
	fin.close();
	count_vec = nums.size();
	for (int i = 0; i < count_vec-1; i++)
	{
		if ((nums[i] % 5 == 0 || nums[i + 1] % 5 == 0) && ((nums[i] + nums[i + 1]) % 7 == 0))
		{
			count++;
			if (max_sum < (nums[i] + nums[i + 1]))
			{
				max_sum = nums[i] + nums[i + 1];
			}
		}
	}
	cout << count << t << max_sum;
}


int main()
{
	
}