//#include <iostream>  
//#include <string>  
//#include <algorithm>  
//using namespace std;
//
//int find_sub_string(string& str1, string &str2) 
//{
//	int number = 0;
//	string temp = str1;
//	while (1)
//	{
//		int index = temp.find(str2);
//		if (index >= 0)
//		{
//			number++;
//			temp = temp.substr(index+1, temp.length());
//		}
//		else
//			break;
//	}
//	return number;
//}
//
//int main()
//{
//	int T;
//	cin >> T;
//	string str1,str2;
//	while (T--)
//	{
//		cin >> str1 >> str2;
//		int res = find_sub_string(str1, str2);
//		cout << res << endl;
//	}
//	return 0;
//}
///*
//Input:
//3
//abcdefg
//bcd
//abcdcdc
//cdc
//aaaaa
//aaa
//
//Output :
//1
//2
//3
//*/