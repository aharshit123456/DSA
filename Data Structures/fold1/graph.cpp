#include <iostream>
#define MAX_SIZE 11011

using namespace std;

/*
struct Edge
{
    char *startVertex;
    char *endVertex;
};
*/

const int N = 1e3 + 10;
int graph[N][N];

int main()
{

    /*
        struct Edge EdgeList[MAX_SIZE];
        char VertexList[MAX_SIZE];
    */

    char VertexList[MAX_SIZE];
    printf("Enter number of elements in the graph: ");
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%c", VertexList[i]);
    }
}