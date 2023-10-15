//Run rate 1
#include<stdio.h>
    int main(int argc, char const *argv[])
{
    int t,r1,r2,b,ball_played,i;
    
    double current_rr,asking_rr;
        
        scanf("%d",&t);
        
        for ( i = 0; i < t; i++)
        {
    
           scanf("%d %d %d",&r1, &r2, &b);
                
                ball_played= 300 - b;
                
                current_rr= (r2*1.0 / ball_played) * 6;
               
               if (r1<r2)
           {
            asking_rr=0.00;
           }
               else
               {
                 asking_rr=((r1-r2+1)*1.0 / b) * 6;
               }
                    printf("%0.2lf %0.2lf\n",current_rr,asking_rr);
            

        }

    return 0;
}
