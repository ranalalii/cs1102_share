#include "my_header.h"

int max(int a, int b) { 
if(a > b) return a; else  return b; 
}

int knapSack(int w, int weight[], int value[], int n)
{

	if (n == 0 || w == 0)
		return 0;

	if (weight[n - 1] > w)
		return knapSack(w, weight, value, n - 1);
	else
		return max(
			value[n - 1]
				+ knapSack(w - weight[n - 1],
						weight, value, n - 1),
			knapSack(w, weight, value, n - 1));
}
