#include <stdio.h>
#define MAX 30
typedef struct edge
{
    int u, v, w;
} edge;
typedef struct listedge
{
    edge data[MAX];
    int n;
} listedge;
listedge elist;
int G[MAX][MAX], n;
listedge spanlist;
void kruskalalgo();
int find(int belongs[], int vertexno);
void union1(int belongs[], int c1, int c2);
void sort();
void print();
3 void main()
{
    int i, j, totcost;
    printf("\nEnter number of vertices:");
    scanf("%d", &n);
    printf("\nEnter the adjacency matrix:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &G[i][j]);
    kruskalalgo();
    print();
}
void kruskalalgo()
{
    int belongs[MAX], i, j, cno1, cno2;
    elist.n = 0;
    for (i = 1; i < n; i++)
        for (j = 0; j < i; j++)
        {
            if (G[i][j] != 0)
            {
                elist.data[elist.n].u = i;
                elist.data[elist.n].v = j;
                elist.data[elist.n].w = G[i][j];
                elist.n++;

                4
            }
        }
    sort();
    for (i = 0; i < n; i++)
        belongs[i] = i;
    spanlist.n = 0;
    for (i = 0; i < elist.n; i++)
    {
        cno1 = find(belongs, elist.data[i].u);
        cno2 = find(belongs, elist.data[i].v);
        if (cno1 != cno2)
        {
            spanlist.data[spanlist.n] = elist.data[i];
            spanlist.n = spanlist.n + 1;
            union1(belongs, cno1, cno2);
        }
    }
}
int find(int belongs[], int vertexno)
{
    return (belongs[vertexno]);
}
void union1(int belongs[], int c1, int c2)
{

    5 int i;
    for (i = 0; i < n; i++)
        if (belongs[i] == c2)
            belongs[i] = c1;
}
void sort()
{
    int i, j;
    edge temp;
    for (i = 1; i < elist.n; i++)
        for (j = 0; j < elist.n - 1; j++)
            if (elist.data[j].w > elist.data[j + 1].w)
            {
                temp = elist.data[j];
                elist.data[j] = elist.data[j + 1];
                elist.data[j + 1] = temp;
            }
}
void print()
{
    int i, cost = 0;
    for (i = 0; i < spanlist.n; i++)
    {
        printf("\n%d\t%d\t%d", spanlist.data[i].u, spanlist.data[i].v, spanlist.data[i].w);
        cost = cost + spanlist.data[i].w;

        6
    }
    printf("\n\nCost of the minimum spanning tree=%d", cost);
}