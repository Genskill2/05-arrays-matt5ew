/* Enter your solutions in this file */
#include <stdio.h>
int max(int array[], int n){
  int max1;
  max1=array[0];
  for(int i=1; i<n; i++){
    if(array[i]>max1){
      max1=array[i];}}
  return max1;
}

int min(int array[], int n){
  int min1;
  min1=array[0];
  for(int i=1; i<n; i++){
    if(array[i]<min1){
      min1=array[i];}}
  return min1;
}

float average(int array[], int n){
  int i;
  int sum=0;
  for(i=0; i<n; i++){
    sum+=array[i];}
  float average=((float)sum/(float)n);
  return average;
 }

int mode(int array[], int n){
  int i, j;
  int count=0;
  int count_max=0;
  int elem;
  for(i=0; i<n; i++){
    for(j=0; j<n; j++){
      if(array[i]==array[j]){
        count++;}
      if(count>count_max){
        elem=array[i];}
      }
    }
  return elem;
}
int factors(int x, int y[])
{
	int temp=x;
	int count=0;
	do
	{	//printf("here");
		for(int i=2;i<=temp;i++)
		{
			if(temp%i==0)
			{
				int cnfac=0;
				for(int j=2;j<=i/2;j++)
				{
					if(j%i==0)
					{
						cnfac++;
						//printf("cnfac:%d\t",cnfac);
					}
				}
				if(cnfac==0)
				{
					count++;
					y[count-1]=i;
					temp/=i;
					//printf("count:%d\ttemp:%d\n",count,temp);
					break;
				}
				else continue;
			}
		}
	}while(temp>1);
	/*for(int i=0;i<count;i++)
		printf("%d\t",y[i]);	*/		
return count;		
}
        
