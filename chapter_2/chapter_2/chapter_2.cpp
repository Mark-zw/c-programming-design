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

////2.��������10������Ҫ���������������
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

////3.��3����a,b,cҪ�󰴴�С˳����������
//#include<iostream>
//using namespace std;
//void Swap(int& x, int& y);
//int main()
//{
//	int a, b, c;
//	cin >> a >> b >> c;
//	if (a < b)
//		Swap(a, b);
//	if (a < c)
//		Swap(a, c);
//	if (b < c)
//		Swap(b, c);
//	cout << a << " " << b << " " << c << endl;
//	return 0;
//}
//void Swap(int& x, int& y)
//{
//	int temp = x;
//	x = y;
//	y = temp;
//}

////4��1+2...+100
//#include<iostream>
//using namespace std;
//int Sn(size_t& n)
//{
//	int i = 1;
//	int sum = 0;
//	while (i <= n)
//	{
//		sum += i;
//		++i;
//	}
//	return sum;
//}
//int main()
//{
//	size_t n;//��ǰn��ĺ�
//	cin >> n;
//	size_t sum = Sn(n);
//	cout << sum << endl;
//	return 0;
//}

////5.�ж�һ����n�ܷ�ͬʱ��3��5����
//#include<iostream>
//using namespace std;
//bool Divided(int& num, int& x, int& y)
//{
//	if (num % x == 0 && num % y == 0)
//		return true;
//	else
//		return false;
//}
//int main()
//{
//	int x, y, num;//�ж�num�ܷ�x��y����
//	cin >> num >> x >> y;
//	bool ret = Divided(num, x, y);
//	if (ret)
//		cout << num << " can be divided by " << x << " and " << y << endl;
//	else
//		cout << num << " can not be divided by " << x << " and " << y << endl;
//	return 0;
//}

////6.��100~200֮����������
//#include<iostream>
//using namespace std;
//bool IsPrime(size_t& n)
//{
//	int j;
//	for (j = 2; j <= sqrt(n); ++j)
//	{
//		if (n % j == 0)
//			break;
//	}
//	if (j > sqrt(n))
//		return true;
//	else
//		return false;
//}
//int main()
//{
//	size_t x, y;//��[x,y]֮����������
//	cin >> x >> y;
//	size_t i = x;
//	while (i <= y)
//	{
//		if (IsPrime(i))
//			cout << i << " ";
//		++i;
//	}
//	return 0;
//}

////7.��������m��n�����Լ��
//#include<iostream>
//using namespace std;
//void Swap(int& x, int& y)
//{
//	int temp = x;
//	x = y;
//	y = temp;
//}
//int Divided(int m, int n)
//{
//	int rem = m % n;
//	while (rem)
//	{
//		m = n;
//		n = rem;
//		rem = m % n;
//	}
//	return n;
//}
//int main()
//{
//	int m, n, r;//��m��n��r�����������Լ��
//	cin >> m >> n >> r;
//	//�Ƚ�m��n��r�������Ĵ�С����֤rΪ������������m��n����С��Լ��
//	if (r < m)
//		Swap(r, m);
//	if (r < n)
//		Swap(r, n);
//	int ret = Divided(m, n);
//	ret = Divided(ret, r);
//	cout << m << "," << n << "," << r << " greatest common divider is " << ret << "." << endl;
//	return 0;
//}

////����-��������m��n����С������
//#include<iostream>
//using namespace std;
//int Divided(int m, int n)
//{
//	int rem = m % n;
//	while (rem)
//	{
//		m = n;
//		n = rem;
//		rem = m % n;
//	}
//	return n;
//}
//int main()
//{
//	int m, n;
//	cin >> m >> n;
//	int max = Divided(m, n);
//	int min = (m * n) / max;
//	cout << min << endl;
//	return 0;
//}

////8.�󷽳�ʽax^2+bx+c=0�ĸ�
//#include<iostream>
//using namespace std;
//int main()
//{
//	float a, b, c, delta, root1, root2;
//	cin >> a >> b >> c;
//	delta = b * b - 4 * a * c;
//	if (delta > 0)
//	{
//		root1 = (-b + sqrt(delta) )/ (2 * a);
//		root2 = (-b - sqrt(delta) )/ (2 * a);
//		cout << "root1 = " << root1 << ",root2 = " << root2 << "." << endl;
//	}
//	else if (delta == 0)
//	{
//		root1 = root2 = (-b) / (2 * a);
//		cout << "root1 = root2 = " << root1 <<" ." << endl;
//	}
//	else
//		cout << "No root." << endl;
//	return 0;
//}