#include<stdio.h>
int main()
{
    int units;
    scanf("%d",&units);
    if(units<=199)
    {
        printf("Units Consumed: %d
",units);
        printf("Cost per Unit: 1.20
");
        printf("Bill: %.2f
",units*1.20);
        printf("Surcharge: 0.00
");
        printf("Total Amount: %.2f
",units*1.20);
    }
        else if(units>=200&&units<400)
    {
        float bill=units*1.40;
        if(bill>400)
        {
            float surcharge=0.15*bill;
            float ta=bill+surcharge;
        printf("Units Consumed: %d
",units);
        printf("Cost per Unit: 1.40
");
        printf("Bill: %.2f
",bill);
        printf("Surcharge: %.2f
",surcharge);
        printf("Total Amount: %.2f
",ta);
        }
        else
        {
        printf("Units Consumed: %d
",units);
        printf("Cost per Unit: 1.40
");
        printf("Bill: %.2f
",bill);
        printf("Surcharge: 0.00
");
        printf("Total Amount: %.2f
",bill);
        }
    }
     else if(units>=400&&units<600)
    {
        float bill=units*1.60;
        if(bill>400)
        {
            float surcharge=0.15*bill;
            float ta=bill+surcharge;
        printf("Units Consumed: %d
",units);
        printf("Cost per Unit: 1.60
");
        printf("Bill: %.2f
",bill);
        printf("Surcharge: %.2f
",surcharge);
        printf("Total Amount: %.2f
",ta);
        }
    }
     else if(units>=600&&units<800)
    {
        float bill=units*1.80;
            float surcharge=0.15*bill;
       float ta=bill+surcharge;
        printf("Units Consumed: %d
",units);
        printf("Cost per Unit: 1.80
");
        printf("Bill: %.2f
",bill);
        printf("Surcharge: %.2f
",surcharge);
        printf("Total Amount: %.2f
",ta);
    }
     else if(units<=800)
    {
        float bill=units*2.00;
       
            float surcharge=0.15*bill;
            float ta=bill+surcharge;
        printf("Units Consumed: %d
",units);
        printf("Cost per Unit: 2.00
");
        printf("Bill: %.2f
",bill);
        printf("Surcharge: %.2f
",surcharge);
        printf("Total Amount: %.2f
",ta);
    }
}