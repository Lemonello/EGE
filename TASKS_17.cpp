#include"Libraries.h"

string file_name;

bool is_three(int number);

void task_1()//??? 17 ? 37336
{
	vector<int> numbers;
	int max_sum{}, number{}, count = 0, pos_num = 0;
	//??????? ????? ??? ?????? ????? ?? ?????
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

void task_2()//??? 17 ?37337
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
	// ????????? ??????? ? ????? ?????, ??????????????? ????????

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

void task_8()//39764
{
	int count_nums{}, count_three{ 0 }, max_sum{0}, number{};
	vector<double>nums;
	file_name = { "G:\\progr\\ROAD_TO_EGE\\EGE_INFO\\39764.txt" };
	ifstream fin(file_name);
	while (fin)
	{
		fin >> number;
		nums.push_back(number);
	}
	fin.close();

	count_nums = nums.size();

	for (int i = 0; i < count_nums - 2; i++)
	{
		if (nums[i]==(sqrt(pow(nums[i+1],2)+pow(nums[i+2],2)))||
			nums[i+1] == (sqrt(pow(nums[i], 2) + pow(nums[i + 2], 2)))||
			nums[i+2] == (sqrt(pow(nums[i + 1], 2) + pow(nums[i], 2))))
		{
			count_three++;

			if (max_sum < (nums[i] + nums[i + 1] + nums[i + 2]))
			{
				max_sum = nums[i] + nums[i + 1] + nums[i + 2];
			}
		}
	}
	if (count_three == 0)
	{
		cout << 0 << t << 0;
		exit(NULL);
	}

	cout << count_three <<t<< max_sum;
}

void task_9()//40733
{
	int pairs{ 0 }, d{ 3 }, max_sum{}, number{}, count{}, count_av{ 0 };
	double average{}, max_all{ 0.0 };
	vector<int>nums;
	file_name = { "G:\\progr\\ROAD_TO_EGE\\EGE_INFO\\40733.txt" };
	ifstream fin(file_name);
	while (fin)
	{
		fin >> number;
		nums.push_back(number);
		if (number % 2 == 0)
		{
			max_all += number;
			count_av++;
		}
	}
	fin.close();

	count = nums.size();
	average = max_all / count_av;

	for (int i = 0; i < count-1; i++)
	{
		if (((((nums[i] % d) == 0) || ((nums[i + 1] % d) == 0))) &&
			((nums[i] < average) || (nums[i + 1] < average)))
		{
			pairs++;

			if (max_sum < (nums[i] + nums[i + 1])) max_sum = nums[i] + nums[i + 1];
		}
	}

	cout << pairs << t << max_sum;
}

void task_10()//47221
{
	int pairs{ 0 }, max_el{}, max_sum{}, number{}, count{};
	vector<int>nums;
	file_name = { "G:\\progr\\ROAD_TO_EGE\\EGE_INFO\\47221.txt" };
	ifstream fin(file_name);
	
	while (fin)
	{
		fin >> number;
		nums.push_back(number);
		if (is_three(number)&&(max_el<number))
		{
			max_el = number;
		}
	}
	fin.close();
	count = nums.size();

	for (int i = 0; i < count - 1; i++)
	{
		if (((is_three(nums[i])&&!(is_three(nums[i+1]))|| 
			(is_three(nums[i+1]) && !(is_three(nums[i])))) &&
			((nums[i]*nums[i])+nums[i+1]*nums[i+1])>(max_el*max_el)))
		{
			pairs++;

			if (max_sum < (nums[i] * nums[i] + nums[i + 1] * nums[i + 1]))
			{
				max_sum = (nums[i] * nums[i] + nums[i + 1] * nums[i + 1]);
			}
		}
	}

	cout << pairs << t << max_sum;
}

bool is_three(int number)
{
	string s_number = std::to_string(number), s_check = std::to_string(3);
	if (s_number.back() == '3')
	{
		return true;
	}
	return false;
}


int main()
{
	
}