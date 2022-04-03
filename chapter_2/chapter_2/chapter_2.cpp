//#include<iostream>
//using namespace std;
//int main()
//{
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int i = 1, mul = 1;
//	while (i < 6)
//	{
//		mul *= i++;
//	}
//	cout << mul << endl;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int year;
//	cout << "please input a integer between 2000 and 2500 \n";
//	cin >> year;
//	if (year >= 2000 && year <= 2500)
//	{
//		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//			cout << year << " is leap year." << endl;
//		else
//			cout << year << " isn't leap year." << endl;
//	}
//	else
//		cout << "Stupid! wrong integer" << endl;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//void Swap(int& x, int& y)
//{
//	int temp = x;
//	x = y;
//	y = temp;
//}
//int main()
//{
//	int a = 1; int b = 0;
//	cout << "Before Swap:" << endl;
//	cout << "a = " << a << ", b = " << b << endl;
//	Swap(a, b);
//	cout << "After Swap:" << endl;
//	cout << "a = " << a  << ", b = " << b << endl;
//	return 0;
//}

////1.依次输入10个数，要求输出其中最大的数
//#include<iostream>
//using namespace std;
//int main()
//{
//	int arr[10];
//	int i = 0, max;
//	while (i < 10)
//	{
//		cin >> arr[i];
//		if (i == 0)
//			max = arr[i];
//		if (arr[i] > max)
//			max = arr[i];
//		i++;
//	}
//	cout << "max is " << max << endl;
//	return 0;
//}
