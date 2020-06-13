#include<stdio.h>
#include<conio.h>
int main()
{
	int card1[4][4],card2[4][4],card3[4][4],card4[4][4],card5[4][4];
	int k,choice,x,r,bday=0;
	int arr[5]={16,8,4,2,1};
	int i,j,i2,j2,i3,j3,j4,i4,i5,j5;
	card1[0][0]=16;
	card1[0][1]=17;
	card1[0][2]=18;
	card1[0][3]=19;
	card1[1][0]=20;
	card1[1][1]=21;
	card1[1][2]=22;
	card1[1][3]=23;
	card1[2][0]=24;
	card1[2][1]=25;
	card1[2][2]=26;
	card1[2][3]=27;
	card1[3][0]=28;
	card1[3][1]=29;
	card1[3][2]=30;
	card1[3][3]=31;
	printf("\nCARD 1\n");
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=3;j++)
		{
			printf(" %d ",card1[i][j]);
		}
	printf("\n");
	}
	
	
	card2[0][0]=8;
	card2[0][1]=9;
	card2[0][2]=10;
	card2[0][3]=11;
	card2[1][0]=12;
	card2[1][1]=13;
	card2[1][2]=14;
	card2[1][3]=15;
	card2[2][0]=24;
	card2[2][1]=25;
	card2[2][2]=26;
	card2[2][3]=27;
	card2[3][0]=28;
	card2[3][1]=29;
	card2[3][2]=30;
	card2[3][3]=31;
	printf("\nCARD 2\n");
	for(i2=0;i2<=3;i2++)
	{
		for(j2=0;j2<=3;j2++)
		{
			printf(" %d ",card2[i2][j2]);
		}
	printf("\n");
	}
	
	card3[0][0]=4;
	card3[0][1]=5;
	card3[0][2]=6;
	card3[0][3]=7;
	card3[1][0]=12;
	card3[1][1]=13;
	card3[1][2]=14;
	card3[1][3]=15;
	card3[2][0]=20;
	card3[2][1]=21;
	card3[2][2]=22;
	card3[2][3]=23;
	card3[3][0]=28;
	card3[3][1]=29;
	card3[3][2]=30;
	card3[3][3]=31;
	printf("\nCARD 3\n");
	for(i3=0;i3<=3;i3++)
	{
		for(j3=0;j3<=3;j3++)
		{
			printf(" %d ",card3[i3][j3]);
		}
	printf("\n");
	}
	
	card4[0][0]=2;
	card4[0][1]=3;
	card4[0][2]=6;
	card4[0][3]=7;
	card4[1][0]=10;
	card4[1][1]=11;
	card4[1][2]=14;
	card4[1][3]=15;
	card4[2][0]=18;
	card4[2][1]=19;
	card4[2][2]=22;
	card4[2][3]=23;
	card4[3][0]=26;
	card4[3][1]=27;
	card4[3][2]=30;
	card4[3][3]=31;
	printf("\nCARD 4\n");
	for(i4=0;i4<=3;i4++)
	{
		for(j4=0;j4<=3;j4++)
		{
			printf(" %d ",card4[i4][j4]);
		}
	printf("\n");
	}
	
	
	card5[0][0]=1;
	card5[0][1]=3;
	card5[0][2]=5;
	card5[0][3]=7;
	card5[1][0]=9;
	card5[1][1]=11;
	card5[1][2]=13;
	card5[1][3]=15;
	card5[2][0]=17;
	card5[2][1]=19;
	card5[2][2]=21;
	card5[2][3]=23;
	card5[3][0]=25;
	card5[3][1]=27;
	card5[3][2]=29;
	card5[3][3]=31;
	printf("\nCARD 5\n");
	for(i5=0;i5<=3;i5++)
	{
		for(j5=0;j5<=3;j5++)
		{
			printf(" %d ",card5[i5][j5]);
		}
	printf("\n");
	}
	printf("\nENTER TOTAL NUMBER OF CARDS CONTAINING YOUR BIRTH DATE.");
	
	scanf("%d",&choice);
	if(choice>=1 && choice<=5)
	{
		
		printf("\nENTER THE CARD NUMBERS CONTAINING YOUR BIRTH DATE:-");
		scanf("%d",&x);
		while(x!=0)
		{
			r=x%10;
			if(r==1)
			{
				bday=bday+arr[0];
			}
			else if(r==2)
			{
				bday=bday+arr[1];
			}
			else if(r==3)
			{
				bday=bday+arr[2];
			}
			else if(r==4)
			{
				bday=bday+arr[3];
			}
			else if(r==5)
			{
				bday=bday+arr[4];
			}
			else
			printf("\n\nINVALID ENTRY!!!");
			//printf("Numbers = %d",bday);
			x=x/10;
		}
	printf("\n\nYOUR BIRTH DATE IS %d OF ANY MONTH.\nENJOY YOUR BIRTH DATE.THANK YOU!!!",bday);
	}
	else
	{
		printf("\nSORRY THERE ARE ONLY FIVE CARDS");
	}
}
