#include<stdio.h>
int main()
{
/*	int a[10]={1,2,3,4,5,6,7,8,9,0};
	int v=3;
	int i,n;
	for(i=n=0;i<10;i++){
		if(a[i]!=v)a[n++]=a[i];
	}
	printf("%d\n",n);
	for(i=0;i<n;i++)
	printf("%d",a[i]);
*/
int i,m,n,k;
scanf("%d%d",&m,&n);
int a[m];
for( i=0;i<m;i++){
	a[i]=i+1;
}
for(int j=1;j<m;j++){

if(n<=m){
for(i=k=0;i<m;i++){
	if(i!=n-1)	{a[k++]=a[i];}
}
m--;
}
if (n>m){
	for(i=k=0;i<m;i++){
		if(i!=(n%m-1)) {a[k++]=a[i];}
	}
m--;
}
}
printf("%d",a[0]);
}

