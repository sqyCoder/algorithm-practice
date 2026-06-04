#include<stdio.h>
int main(){
int n,i=0;
int len;
scanf("%d%d",&len,&n);
int arr[len];
int left=0;
int right=len-1;
int middle=(left+right)/2;
for(i=0;i<len;i++){
arr[i]=i+1;
}
while(n!=arr[middle]&&left<=right){
if(n<arr[middle]){
right=middle-1;
}else if(n>arr[middle]){
left=middle+1;
}
middle=(left+right)/2;
}
if(left<=right)
printf("%d",middle);
else
printf("-1");
return 0;
}
