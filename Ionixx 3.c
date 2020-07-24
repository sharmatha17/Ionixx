#include<stdio.h>
#define INF 99999999999999999   
#define N 4 
int minCost(int cost[][n], int s, int d) 
{ 
	int i;
    // If source is same as destination or destination is next to source 
    if (s == d || s+1 == d) 
      return cost[s][d];   
    // Initialize min cost as direct ticket from source 's' to destination 'd'. 
    int min = cost[s][d];   
    // Try every intermediate vertex to find minimum 
    for(i = s+1; i<d; i++) 
    { 
        int c = minCost(cost, s, i) + 
                minCost(cost, i, d); 
        if (c < min) 
           min = c; 
    } 
    return min; 
}  
// This function returns the smallest possible cost to reach station N-1 from station 0. 
//This function mainly uses minCost(). 
int minC(int cost[][n]) 
{ 
    return minCost(cost, 0, n-1); 
}  
// Driver program to test above function 
int main() 
{ 
    int cost[n][n] = { {0, 50,75, 150}, 
                      {INF, 0, 100,INF}, 
                      {INF, INF, 0, 50}, 
                      {INF, INF, INF, 0} 
                    }; 
    printf("The minimum cost IS :%d",minC(cost)); 
    int cost1[n][n] = { {0, 100,150,150}, 
                      {INF,0,50,INF}, 
                      {INF,INF, 0,100}, 
                      {INF, INF, INF, 0} 
                    }; 
    printf("The minimum distance IS :%d",minC(cost1));
    return 0; 
}
