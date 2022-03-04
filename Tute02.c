#include <stdio.h>

int main() {
  
int travellkm;
int additionalkm;
int totalamount;
int additonalamopuint;
int ftamount;



printf("Travel Distance : ");
scanf("%d",&travellkm);

if(travellkm>30){
   additonalamopuint = (travellkm-30)*40;
   ftamount = 30* 50; 
totalamount = additonalamopuint+ ftamount;
}

else {
   totalamount = travellkm * 50; 

}

printf("Total Amount is: %d",totalamount);


  return 0;
}