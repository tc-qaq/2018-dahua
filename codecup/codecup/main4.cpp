//#include <iostream>  
//#include <iomanip>  
//#include <string>  
//#include <vector>  
//#include <queue>
//#include <cstring>
//#include <memory>
//#include <algorithm>  
//using namespace std;
//
//// 记录城堡间路上金币信息的结构体
//// 从城堡castle_from到城堡castle_to的路上有coins个金币
//struct road {
//	int castle_from;
//	int castle_to;
//	int coins;
//	bool operator < (const road & b) const {
//		return coins > b.coins;
//	}
//};
//const int maxn = 50;
//int fa[maxn], vis[maxn];
//int find(int x) {
//	return x == fa[x] ? fa[x] : fa[x] = find(fa[x]);
//}
//// 计算最多能获取到的金币个数
//// 参数：roads         路径和金币信息数组
//// 参数：roads_count   roads数量
//// 参数：castles_count 城堡个数
//// 返回值：获取到的金币个数
//int max_coin( road roads[], int roads_count, int castles_count)
//{
//	
//	memset(vis, 0, sizeof vis);
//	sort(roads, roads + roads_count);
//	for (int i = 0; i <= castles_count; ++i)	fa[i] = i;
//	int cnt = castles_count;
//	for (int i = 0; i < roads_count; ++i)
//	{
//		int xx = find(roads[i].castle_from);
//		int yy = find(roads[i].castle_to);
//		if (xx != yy) 
//		{
//			vis[i] = 1;
//			fa[yy] = xx;
//			--cnt;
//		}
//		if (cnt == 1)	break;
//	}
//	int Max = -1;
//	int sum = 0;
//	for (int i = 0; i < roads_count; ++i) {
//		if (vis[i])continue;
//		Max = max(Max, roads[i].coins);
//		sum += roads[i].coins;
//	}
//	int res = 0;
//	for (int i = 0; i < roads_count; i++) 
//	{
//		res += roads[i].coins;
//	}
//	res -= (sum );
//	return res;
//}
//
//
//int main()
//{
//	int T,N,M;
//	cin >> T;
//	string str1, str2;
//	while (T--)
//	{
//		cin >> N >> M;
//		road r[30];
//		for (int i = 0; i < M; i++)
//			cin >> r[i].castle_from >> r[i].castle_to >> r[i].coins;
//		cout << max_coin(r, M, N) << endl;
//	}
//	return 0;
//}
///*
//Input:
//1
//7
//9
//0 1 10 
//0 2 6 
//0 3 5 
//1 3 15 
//2 3 4 
//1 4 3 
//3 5 3 
//4 6 9 
//5 6 7
//
//Output:
//50
//*/