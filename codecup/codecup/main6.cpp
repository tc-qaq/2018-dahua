//#include <iostream>  
//#include <stdio.h>
//#include <iomanip>  
//#include <string>  
//#include<sstream>
//#include <vector>  
//#include <map>
//#include <algorithm>  
//using namespace std;
//
//int main()
//{
//	int T,N;
//	cin >> T;
//	string str;
//	while (T--)
//	{
//		cin >> str;
//		map<char, int> map_str;
//		for (int i = 0; i<str.length(); i++)
//			map_str[str[i]] = -1;
//		int pre = -1, Max = 0;
//		for (int i = 0; i<str.length(); i++) {
//			pre = max(pre, map_str[str[i]]);
//			Max = max(Max, i - pre);
//			map_str[str[i]] = i;
//		}
//		cout << Max << endl;
//
//	}
//	return 0;
//}
///*
//Input:
//2
//abcabcdabc
//bbbb
//
//Output:
//4
//1
//
//*/