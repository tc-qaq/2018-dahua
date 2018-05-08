//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//const int MAXNODE = 30;
//struct HTNode{
//	int weight;
//	int parent;
//	int lchild, rchild;
//};
//int min_temp(HTNode* HT, int k)
//{
//	int i = 0;
//	int min;
//	int min_weight;
//	while (HT[i].parent != -1)	i++;
//	min_weight = HT[i].weight;
//	min = i;
//	for (; i<k; i++)
//	{
//		if (HT[i].weight<min_weight && HT[i].parent == -1)
//		{
//			min_weight = HT[i].weight;
//			min = i;
//		}
//	}
//	HT[min].parent = 1;
//	return min;
//}
//void select_minium(HTNode* HT, int k, int &min1, int &min2)
//{
//	min1 = min_temp(HT, k);
//	min2 = min_temp(HT, k);
//}
//HTNode* create_HuffmanTree(int wet[], int n)
//{
//	int total = 2 * n - 1;
//	HTNode* HT = (HTNode*)malloc(total * sizeof(HTNode));
//	int i;
//	for (i = 0; i<n; i++)
//	{
//		HT[i].parent = -1;
//		HT[i].lchild = -1;
//		HT[i].rchild = -1;
//		HT[i].weight = *wet;
//		wet++;
//	}
//	for (; i<total; i++)
//	{
//		HT[i].parent = -1;
//		HT[i].lchild = -1;
//		HT[i].rchild = -1;
//		HT[i].weight = 0;
//	}
//	int min1, min2;
//	for (i = n; i<total; i++)
//	{
//		select_minium(HT, i, min1, min2);
//		HT[min1].parent = i;
//		HT[min2].parent = i;
//		HT[i].lchild = min1;
//		HT[i].rchild = min2;
//		HT[i].weight = HT[min1].weight + HT[min2].weight;
//	}
//	return HT;
//}
//
//void HuffmanCoding(HTNode* HT, char** &HC, int n)
//{	
//	HC = (char**)malloc(n * sizeof(char *));
//	char *code = (char *)malloc(n * sizeof(char));
//	code[n - 1] = '\0';
//	int i;
//	for (i = 0; i<n; i++)
//	{
//		int current = i;
//		int father = HT[i].parent;
//		int start = n - 1;
//		while (father != -1)
//		{
//			if (HT[father].lchild == current)
//				code[--start] = '0';
//			else
//				code[--start] = '1';
//			current = father;
//			father = HT[father].parent;
//		}
//		HC[i] = (char *)malloc((n - start) * sizeof(char));
//		for (int j = 0; j < n ; j++)
//			HC[i][j] = code[j+start];
//		/*HC[i] = (char *)malloc((n - start) * sizeof(char));
//		strcpy(HC[i], code + start);
//		cout << HC[i] << endl;*/
//	}
//}
//
//void str_encoding(const std::string& raw_str, std::string& encoded_str)
//{
//	int cnt[26] = { 0 };
//	int len = raw_str.length();
//	for (int i = 0; i < len; i++)
//		cnt[(int)raw_str[i] - 65] ++;
//
//	int num = 0;
//	vector<char> chars;
//	vector<int> charn;
//	for (int i = 0; i < 26; i++)
//	{
//		if (cnt[i] != 0)
//		{
//			chars.push_back(char(i + 65));
//			charn.push_back(cnt[i]);
//			num++;
//		}
//	}
//	int tempn;
//	char tempc;
//	for (int i = 0; i < num; ++i)
//	{
//		for (int j = 0; j < num - i - 1; ++j)
//		{
//			if (charn[j]<charn[j + 1])
//			{
//				tempn = charn[j + 1];
//				tempc = chars[j + 1];
//				charn[j + 1] = charn[j];
//				chars[j + 1] = chars[j];
//				charn[j] = tempn;
//				chars[j] = tempc;
//			}
//		}
//	}
//	string sortS = "";
//	for (int i = 0; i < num; ++i)
//		sortS += chars[i];
//	const int n = num;
//	HTNode *HT;
//	int wet[26];
//	for (int i = 0; i < n; i++)
//		wet[i] = i + 1;
//	HT = create_HuffmanTree(wet, n);
//	char** HC;
//	HuffmanCoding(HT, HC, n);
//	//for (int i = 0; i < n; i++)
//	//	cout << HC[i] << endl;
//	int index = 0;
//	for (int i = 0; i < len; ++i)
//	{
//		index = num - sortS.find(raw_str[i]) - 1;
//		cout << HC[index];
//	}
//}
//
//int main()
//{
//	int T;
//	string raw_str, encoded_str;
//	cin >> T;
//	while (T--)
//	{
//		cin >> raw_str;
//		str_encoding(raw_str, encoded_str);
//		cout << endl;
//	}
//	return 0;
//}
//
///*
//Input:
//1
//MBCEMAMCBA
//
//Output :
//11000110101110110110010
//*/
//
