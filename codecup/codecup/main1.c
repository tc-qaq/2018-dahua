//#include <stdio.h> 
//void  inverse(int a[],int N,int k)
//{
//	int res[100];
//	int cnt = N;
//	int ri = 0;
//	for (int i = 0; i < cnt; i++)
//	{
//		if (i + k < cnt) 
//		{
//			int j = i + k-1;
//			for (; j >= i; j--)
//				res[ri++] = a[j];
//			i += k-1;
//		}
//		else 
//		{
//			int j = cnt - 1;
//			for (; j >= i; j--)
//				res[ri++] = a[j];
//			i = cnt - 1;
//		}
//	}
//	int len = N;
//	for (int i = 0; i < len - 1; i++)
//		printf("%d ", res[i]);
//	printf("%d\n", res[len - 1]);
//}
//
//int main()
//{
//	int T, N,k;
//	int arr[100];
//	scanf("%d", &T);
//	for (int t = 0; t < T; t++)
//	{
//		scanf("%d", &N);
//		for (int i = 0; i < N; i++)
//			scanf("%d", &arr[i]);
//		scanf("%d", &k);
//		inverse(arr, N,k);
//		
//	}
//	return 0;
//}
//
///*
//Input:
//1
//8
//1 2 2 4 5 6 7 8
//4
//
//Output :
//	4 2 2 1 8 7 6 5
//*/