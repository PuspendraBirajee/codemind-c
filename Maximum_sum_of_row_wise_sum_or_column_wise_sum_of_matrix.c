# include<stdio.h>
int main()
{ 
    int r,c,max1=0,max2=0; 
    scanf("%d%d",&r,&c); 
    int a[r][c]; 
    for(int i=0; i<r; i++) 
    { 
        for(int j=0; j<c; j++)
        { 
        scanf("%d",&a[i][j]);
            } 
    } 
    for(int i=0; i<r; i++) 
    { 
        int sum=0; 
        for(int j=0; j<c; j++)
        { 
            sum=sum+a[i][j];
            } 
            if(sum>max1)
            { 
                max1=sum;
            } 
        
    } 
    for(int i=0; i<c; i++)
    { 
        int sum=0;
        for(int j=0; j<r; j++)
        {
            sum=sum+a[j][i]; 
            
        }
        if(sum>max2) 
        { 
            max2=sum;
            }
            }
            if(max1<max2) 
            { 
                max1=max2;
                } 
              printf("%d",max1);  
}