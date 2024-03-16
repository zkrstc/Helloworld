//
//
//
//
//#include<iostream>
//#include<algorithm>
//using namespace std;
//void QuickSort(int array[], int low, int high) {
//    int i = low;
//    int j = high;
//    if(i >= j) {
//        return;
//    }
//
//    int temp = array[low];
//    while(i != j) {
//        while(array[j] >= temp && i < j) {
//            j--;
//        }
//        swap(array[j],array[i]);
//	while(array[i] <= temp && i < j) {
//            i++;
//        }
//        swap(array[i],array[j]);
//        if(i==j)
//            array[i]=temp;
//    }
//
//    //将基准temp放于自己的位置，（第i个位置
//    QuickSort(array, low, i - 1);
//    QuickSort(array, i + 1, high);
//}
//int main()
//{
//int array[4]={6,5,4,3};
//QuickSort(array,0,4);
//cout<<array[0]<<array[1]<<array[2]<<array[3];
//}
#include<stdio.h>
//#include<stdlib.h>
//#include<iostream>
//using namespace std;
//typedef struct node
//{
//    int data;
//    struct node* left;
//    struct node* right;
//}Node;
//
//Node* insert(Node* tree,int value)
//{
//    Node* node=(Node*)malloc(sizeof(Node));
//    node->data=value;
//    node->left=node->right=nullptr;
//    if(tree==NULL)
//    {
//        tree=node;
//    }
//    else
//    {
//        if(value<tree->data)
//            tree->left=insert(tree->left,value);
//        else
//            tree->right=insert(tree->right,value);
//    }
//    return tree;
//}
//
//void centerprint(Node* node)
//{
//    if(node!=NULL)
//    {
//        centerprint(node->left);
//        printf("%d ",node->data);
//        centerprint(node->right);
//    }
//}
//
//int main()
//{
//    Node* a=NULL;
//    int  tmp;
//a=insert(a,3);
//a=insert(a,0);
//cout<<a->data;
//cout<<a->left->data;
//}
#include<iostream>
#include<cstring>
#include<queue>
using namespace std;
const int N=110;
typedef pair<int,int> PII;
int map[N][N],mark[N][N];
int dx[4]={-1,0,1,0},dy[4]={0,1,0,-1},n,m,ans;
void bfs()
{
    queue<PII>q;
    memset(mark,-1,sizeof(mark));
    mark[0][0]=0;
    q.push({0,0});
    while(!q.empty())
    {
        PII top=q.front();
    for(int i = 0;i<4;i++){
        int nex=top.first+dx[i];
        int ney=top.second+dy[i];
        if(nex>=0&&ney>=0&&mark[nex][ney]==-1&&map[nex][ney]!=1&&nex<n&&ney<m)
        {
            mark[nex][ney]=mark[top.first][top.second]+1;
            q.push({nex,ney});
        }
    }
    q.pop();
    }
    cout<<mark[n-1][m-1];
}
int main()
{
cin>>n>>m;
for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&map[i][j]);
        }
    }
bfs();
}
