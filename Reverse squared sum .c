#include<stdio.h>
int main() {
	//code
	int t;
	scanf("%d",&t);
	while(t--){
	    int n,sum=0,c=0;
	    scanf("%d",&n);
	    int arr[n];
	    for(int i=0;i<n;i++){
	        scanf("%d",&arr[i]);
	    }
	    for(int i=n-1;i>=0;i--){
	        if(c==0){
	            sum+=arr[i]*arr[i];
	            c=1;
	        }
	        else if(c==1){
	            sum-=arr[i]*arr[i];
	            c=0;
	        }
	    }
	    printf("%d\n",sum);
	}
	return 0;
}