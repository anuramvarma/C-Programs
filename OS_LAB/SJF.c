#include<stdio.h>
int main(){
	int p[20],bt[20],wt[20],tat[20];
	int i,j,n,temp;
	float wtavg, tatavg;
	printf("\nEnter the number of Jobs :: ");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		p[i]=i;
		printf("Enter Burst Time of Job-%d : ", i);
		scanf("%d", &bt[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(bt[i]>bt[j])
			{
				temp=bt[i];
				bt[i]=bt[j];
				bt[j]=temp;
				temp=p[i];
				p[i]=p[j];
				p[j]=temp;
			}
		}
	}
        wt[0] = wtavg = 0;
        tat[0] = tatavg = bt[0];
	
		for(i=1;i<n;i++)
	{
       	wt[i] = wt[i-1] +bt[i-1];
		tat[i] = tat[i-1] +bt[i];
		wtavg = wtavg + wt[i];
		tatavg = tatavg + tat[i];
     	}
	printf("\n\t PROCESS \tBURST_TIME \t WAITING_TIME\t TURN_AROUND TIME\n");
        for(i=0;i<n;i++)
		printf("\n\t P%d \t\t %d \t\t %d \t\t %d", p[i], bt[i], wt[i], tat[i]);
		printf("\nAverage Waiting Time : %f",wtavg/n);
	printf("\nAverage Turnaround Time : %f",tatavg/n);
}
