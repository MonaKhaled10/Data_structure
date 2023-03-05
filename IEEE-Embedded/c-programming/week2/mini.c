
#include <stdio.h>
#include <stdlib.h>

int main()
{
int shipping,order;
int no_ofitems;
int item;
float price,final_shipping,total,total_fee;
printf(" 1-Sugar:5$,2-Tea:3$ ,3-Water:1$,4-Rice;15$,5-pasta:4$,6-oil:20$,7-Bread:1$\n");
printf("Enter the item you want :\n");
scanf("%d",&item);
printf(" What is the number of items:\n");
scanf("%d",&no_ofitems);
if(no_ofitems>=2){
printf("Enter the price of your item:\n");
scanf("%f",&price);
printf("Do you want overnight shipping ? 1.yes/2.No \n");
scanf("%d",&shipping);
printf("Do you want to continue order or finish ? 1.yes 2.No\n");
    scanf("%d",&order);
    if(order ==1){
        printf(" 1-Sugar:5$,2-Tea:3$ ,3-Water:1$,4-Rice;15$,5-pasta:4$,6-oil:20$,7-Bread:1$\n");
printf("Enter the item you want :\n");
scanf("%d",&item);
printf(" What is the number of items:\n");
scanf("%d",&no_ofitems);
if(no_ofitems>=2){
printf("Enter the price of your item:\n");
scanf("%f",&price);
printf("Do you want overnight shipping ? 1.yes/2.No \n");
scanf("%d",&shipping);
printf("Do you want to continue order or finish ? 1.yes 2.No");
    }}
    else{

 if((shipping == 1)&&(price>10)){
    final_shipping=3+5;
    total=final_shipping+price;


 }
 else if((shipping == 1)&&(price<10))
 {
    final_shipping=2+5;
    total=final_shipping+price;
    }
    else if((shipping == 2)&&(price>10))
        {
    final_shipping=3+5;
    total=final_shipping+price;

    }
    else {
         final_shipping=2+5;
    total=final_shipping+price;
            }

if(no_ofitems>5){
    total_fee=(total*20/100);
}
else {
        total_fee=total;

}
    }
    printf("Price :%f \n Shipping :%f \n Total before discount :%f\n Total after discount :%f ",price ,final_shipping,total,total_fee);}
    else {
        printf("minimum for one order is 2");
    }



    return 0;

}

