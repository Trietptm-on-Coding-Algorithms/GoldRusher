#include<stdio.h>

int main(int argc, char* argv[]){

    if (argc < 3)
        return 1;

    long int binary1,binary2;
    int i=0,remainder = 0,sum[20];

   binary1 = argv[1];
   binary2 = argv[2];

    while(binary1!=0||binary2!=0){
         sum[i++] =  (binary1 %10 + binary2 %10 + remainder ) % 2;
         remainder = (binary1 %10 + binary2 %10 + remainder ) / 2;
         binary1 = binary1/10;
         binary2 = binary2/10;
    }

    if(remainder!=0)
         sum[i++] = remainder;

    --i;
    printf("Sum of two binary numbers: ");
    while(i>=0)
         printf("%d",sum[i--]);

   return 0;
}
