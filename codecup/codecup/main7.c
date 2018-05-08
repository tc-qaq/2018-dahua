//#include <stdio.h>
//int main()
//{
//	int T, M;
//	scanf("%d", &T);
//	while (T--)
//	{
//		scanf("%d", &M);
//		int sum = 0;
//		for (int i = 1; i < M; i++)
//		{
//			int sum1 = 0;
//			int temp = i;
//			while (temp > 0)
//			{
//				sum1 += temp % 10;
//				temp /= 10;
//			}
//			temp = i;
//			while (temp > 0)
//			{
//				sum1 -= temp % 2;
//				temp /= 2;
//			}
//			if (!sum1)
//				sum++;
//		}
//		printf("%d\n", sum);
//	}
//	return 0;
//}
///*
//Input:
//2
//100
//300
//
//Output:
//3
//11
//*/