/*把200以内的所有素数存放到一堆数组中并输出*/
#include "stdio.h"
void main()
 {
    //定义变量和数组
	int i,m,j,k;
	int a[200];
	k=0;
	for(m=199; m>1; m--) 
    {
		for(i=2; i <m; i++) 
        {
			if(m%i==0) 
            break;
		}
		if(i>=m)
        //把素数放进数组a中
			a[k++]=m;
	}
	for(j=k-1; j>=0; j--)
    {
        printf("%d ",a[j]);
    }
}