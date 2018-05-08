//#include <iostream>  
//#include <string>  
//using namespace std;
//
//void find_sps_in_h264(string arr[], int N)
//{
//	string* res = new string[N];
//	string* temps = new string[N];
//	int len = 0;
//	int sflag = 1;
//	for (int i = 0, j = 0; i < N; i++)
//	{
//		if (sflag % 2 == 0)
//		{
//			if (((arr[i] == "00" && arr[i + 1] == "00" && arr[i + 2] == "01")))
//			{
//				i += 2;
//				for (int k = 0; k < j; ++k)
//					res[len + k] = temps[k];
//				len += j;
//				j = 0;
//
//				for (int i = 0; i < len - 1; i++)
//				{
//					if (res[i][0] == '0')
//						cout << res[i][1] << " ";
//					else
//						cout << res[i] << " ";
//				}
//				if (res[len - 1][0] == '0')
//					cout << res[len - 1][1] << endl;
//				else
//					cout << res[len - 1] << endl;
//				len = 0;
//
//				continue;
//			}
//			if (((arr[i] == "03" && arr[i - 1] == "00" && arr[i - 2] == "00")))
//				continue;
//			temps[j++] = arr[i];
//		}
//		if ((sflag % 2) && ((arr[i] == "00" && arr[i + 1] == "00" && arr[i + 2] == "01")))
//		{
//			sflag += 1;
//			i += 2;
//		}
//	}
//
//}
//
//
//int main()
//{
//	int T, N;
//	cin >> T;
//	string str;
//	while (T--)
//	{
//		cin >> N;
//		string arr[50];
//		for (int i = 0; i < N; i++)
//		{
//			cin >> arr[i];
//		}
//		find_sps_in_h264(arr, N);
//	}
//	return 0;
//}
//
///*
//"int find_sps_in_h264(unsigned char[],int N)
//input:
//1
//23
//0 0 01 67 42 c0 16 d0 80 0 0 03 0 80 0 0f 0 0 01 68 ce 3c 80
//output:
//67 42 c0 16 d0 80 0 0 0 80 0 0f"
//
//*/