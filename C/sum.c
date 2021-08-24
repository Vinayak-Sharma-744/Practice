  //To print sum of n numbers using arrays

  #include <stdio.h>
 //int add(int,int);
 int main(){
      int sum=0,arr[10],i,c=1;
      printf("Enter the value ");
      //scanf("%d",&n);
      for( i=1;i<10;i++)
     scanf("%d",&arr[i]);
     for(i=1;i<10;i++){
       sum+=arr[i];
       ++c;
      }
      printf("sum is %d with digits %d",sum,c);
     //add(sm,arr[10]);
      
  }
// int add(int sum,int a[10]){
 //  int i;
  // printf("Enter the value ");
   //scanf("%d",&sum);
   //for(i=1;i<=10;i++){
     //  scanf("%d",&a[i]);
      // sum=sum+a[i];
   //}
   //printf("%d",sum);
     // return sum;






 
 
