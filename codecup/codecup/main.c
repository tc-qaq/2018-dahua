//#include <stdio.h>
//
//
//int find_max_sum_without_adjacents(int vec[], int N)
//{
//	if (N == 2)		return  vec[0] > vec[1] ? vec[0] : vec[1];
//	if (N == 3)		return (vec[0] + vec[2]) > vec[1]? (vec[0] + vec[2]) : vec[1];
//
//	int max_temp[500];
//	max_temp[0] = vec[0];
//	max_temp[1] = vec[1];
//	max_temp[2] = (vec[0] + vec[2]) > vec[1] ? (vec[0] + vec[2]) : vec[1];
//	int temp = max_temp[0] > max_temp[1] ? max_temp[0] : max_temp[1];
//	int result = temp > max_temp[2] ? temp : max_temp[2];
//	for (int i = 3; i < N; i++)
//	{
//		max_temp[i] = vec[i] + (max_temp[i - 2] > max_temp[i - 3] ? max_temp[i - 2] : max_temp[i - 3]);
//		result = result > max_temp[i] ? result : max_temp[i];
//	}
//	return result;
//}
//
//int main()
//{
//	int T, N;
//	int arr[500];
//	scanf("%d", &T);//cin >> T;
//	for (int t = 0; t < T; t++)
//	{
//		scanf("%d", &N);//cin>> N;
//		for(int i=0;i<N;i++)
//			scanf("%d", &arr[i]);//cin >> arr[i];
//		int res = find_max_sum_without_adjacents(arr, N);
//		printf("%d\n", res);//cout<<res;
//	}
//
//	return 0;
//}
//
///*Input:
//2
//6
//5 4 10 100 10 5
//4
//3 2 7 10
//
//Output :
//	110
//	13
//*/