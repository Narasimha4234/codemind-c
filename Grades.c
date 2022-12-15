\n#include <stdio.h>
 int main()
{
    int bio,che,com,phy,max; 
    float Total, Per;
    scanf("%d%d%d%d%d",&bio,&che,&com,&phy,&max);
    Total=bio+che+com+phy+max;
    Per=(Total/500)*100;
    if(Per >= 90)
    {
    	printf("Grade A");
	}
	else if(Per >= 80)
    {
    	printf("Grade B");
	}
	else if(Per >= 70)
    {
    	printf("Grade C");
	}
	else if(Per >= 60)
    {
    	printf("Grade D");
	}
}	
	

