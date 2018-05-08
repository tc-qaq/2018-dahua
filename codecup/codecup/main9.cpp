//#include <iostream>  
//#include <stdio.h>
//#include <iomanip>  
//#include <string>  
//#include<sstream>
//#include <vector>  
//#include <queue>
//#include <algorithm>  
//using namespace std;
//
//struct BiTNode {
//	int data;
//	struct BiTNode *lchild, *rchild;
//};
//static int s = -1;
//void create_tree(BiTNode *t,string str)
//{
//	int len = str.length();
//	s++;
//	if (s >= len)
//		return;
//	if (str[s] == '#')
//	{
//		t->lchild = NULL;
//		t->rchild = NULL;
//	}
//	else
//	{
//		t->data = (int)str[s] - 48;
//		BiTNode *lchild = new BiTNode();
//		BiTNode *rchild = new BiTNode();
//		t->lchild = lchild;
//		t->rchild = rchild;
//		create_tree(t->lchild,str);
//		create_tree(t->rchild,str);
//		
//	}
//	
//}
//
//void RightUpNode(BiTNode *root) 
//{
//	queue<BiTNode*> q1, q2;
//	BiTNode *tmp;
//	q1.push(root);
//	vector<int> res;
//	while (!(q1.empty() && q2.empty())) 
//	{
//		while (!q1.empty()) {
//			tmp = q1.front();
//			q1.pop();
//			if (tmp->lchild != NULL) 
//				q2.push(tmp->lchild);			
//			if (tmp->rchild != NULL)
//				q2.push(tmp->rchild);
//			if (q1.empty())
//				res.push_back(tmp->data);
//		}
//		while (!q2.empty()) 
//		{
//			tmp = q2.front();
//			q2.pop();
//			if (tmp->lchild != NULL)
//				q1.push(tmp->lchild);
//			if (tmp->rchild != NULL)
//				q1.push(tmp->rchild);
//			if (q2.empty()) 
//				res.push_back(tmp->data); 
//		}
//	}
//	int len = res.size();
//	for (int i = 0; i < len-1; i++)
//		cout << res[i];
//	cout << endl;
//}
//
//int main()
//{
//	int T;
//	string str;
//	cin >> T;
//	while (T--)
//	{
//		cin >> str;
//		BiTNode *root = new BiTNode();
//		create_tree(root,str);
//		RightUpNode(root);
//	}
//	return 0;
//}
///*
//Input:
//1
//524###36##8##
//
//Output:
//538
//*/