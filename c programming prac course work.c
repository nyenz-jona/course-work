#include <stdio.h>

int main(){


    double quantity;
    double buyingprice;
    double profit;
    double sellingprice;


    printf("Enter quantity of item;");
    scanf("%lf",&quantity);

    printf("what was the buying price per unit?;");
    scanf("%lf",&buyingprice);

    printf("what was the selling price per unit?:");
    scanf("%lf",&sellingprice);

    profit = ( sellingprice - buyingprice) *quantity;


    if(profit<0){
        printf("You made a loss of %0.2lf\n",profit);

        if (profit>0){
            printf("You made a profit of %0.2lf\n,profit);
                
    }



return 0;


}
