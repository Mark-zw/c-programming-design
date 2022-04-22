//#include<stdio.h>
//int main()
//{
//
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//    char ch;
//    while ((scanf("%c", &ch)) != EOF)
//    {
//        getchar();//½«\n¶Á×ß
//        switch (ch)
//        {
//        case 'A':
//        case 'a':
//        case 'E':
//        case 'e':
//        case 'I':
//        case 'i':
//        case 'O':
//        case 'o':
//        case 'U':
//        case 'u':
//            cout << "Vowel" << endl;
//            break;
//        default:
//            cout << "Consonant" << endl;
//        }
//    }
//    return 0;
//}

////#include<stdio.h>
//#include<iostream>
//using namespace std;
//int main()
//{
//    double weight, height, IBM;
//    //scanf("%lf%lf",&weight,&height);
//    cin >> weight >> height;
//    IBM = weight / (height * height);
//    if (IBM >= 18.5 && IBM <= 23.9)
//        //printf("Normal\n");
//        cout << "Normal" << endl;
//    else
//        //printf("Abnormal\n");
//        cout << "Abnormal" << endl;
//    return 0;
//}
#include<stdio.h>
int main()
{
    int a, b, c, d, max;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    max = a;
    if (b > max)
        max = b;
    if (c > max)
        max = c;
    if (d > max)
        max = d;
    printf("%d", max);
    return 0;
}