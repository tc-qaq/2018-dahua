//#include <stdio.h>
//
//int deal(int arr[], int N)
//{
//	int sum = 0;
//	int max = arr[0];
//	int temp[100];
//	int ti = 0;
//	temp[ti++] = arr[0];
//	for (int i = 1; i < N+1; i++)
//	{
//		if (max <= arr[i] && i < N)
//		{
//			max = arr[i];
//			temp[ti++] = arr[i];
//		}
//		else
//		{
//			int min = 101;
//			int len = ti;
//			for (int j = 0; j < len; j++)
//				min = min < temp[j] ? min : temp[j];
//			//cout << endl;
//			sum += max - min;
//			ti = 0;
//			max = 0;	
//			if (i < N)
//				i -= 1;
//		}
//	}
//	printf("%d\n", sum);
//	
//}
//
//int main()
//{
//	int T, N;
//	int v[100];
//	scanf("%d %d", &T, &N);
//	while (T--)
//	{	
//		for (int i = 0; i < N; i++)
//			scanf("%d", &v[i]);
//		deal(v, N);
//	}
//	return 0;
//}
///*
//Input:
//2
//5
//1 9 2 3 8
//9 8 3 2 1
//
//Output:
//14
//0
//*/