#include <cstdio>
using namespace std;
int main()
{
struct {
    int x, y, z;
} a[200], temp;
int n, m;
int x, y, z;
int Case = 0;

scanf("%d", &n);
while (n != 0 ) {
   m=0;
   for (int k=0; k < n; k++) {
	  scanf("%d %d %d", &x, &y, &z);
	  a[m++] = {x, y, z};  // ??????x,y,z???
	  a[m++] = {x, z, y};
	  a[m++] = {y, x, z};
	  a[m++] = {y, z, x};
	  a[m++] = {z, x, y};
	  a[m++] = {z, y, x};
   }
	for (int i=0; i < m-1; i++)  // bubble sort, x ????
	   for (int j=0; j < m-1; j++) //????,??????
		  if (a[j].x > a[j+1].x) {
			 temp=a[j]; a[j]=a[j+1]; a[j+1]=temp; //swap
		  }

	int height[200]; //?????
	int maxH = 0;
	for (int i=0; i < m; i++) {
		height[i]=a[i].z;   // ???????????
		for (int j=0; j < i; j++) // ?????j
			if ((a[i].x > a[j].x) && (a[i].y > a[j].y)) // i ????j??
                 if (height[i] < height[j] + a[i].z)
					 height[i]=height[j]+a[i].z; // ????
		if (maxH < height[i])
			maxH=height[i];   //??????
	}
	Case++;
    printf("Case %d: maximum height = %d\n", Case, maxH);

    scanf("%d", &n);
}
}


