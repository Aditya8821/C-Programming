#include<stdio.h>
int main(){
	int a[10],b[10],m,n,i,j,flag;
	printf("\nEnter number of elements in set1:- ");
	scanf("%d",&m);
	for(i=0;i<m;i++){
		 printf("\nEnter %d element:- ",i+1);
		scanf("%d",&a[i]);
	}
	printf("\nEnter number of elements in set2:- ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("\nEnter %d element:- ",i+1);
		scanf("%d",&b[i]);
	}
	for(i=0;i<m;i++){
		flag=0;
		for(j=0;j<i;j++){
			if(a[i]==a[j])
			flag=
		}
	}
	int c[m+n];
	printf("\nIntersection of SET1 and SET2:- ");
	for(i=0;i<m+n;i++){
		flag=0;
		for(j=0;j<n;j++){
			if(a[i]==b[j]){
				flag=1;
				break;
			}
		}
		if(flag==1)
		printf("%d ",a[i]);
	}
}
