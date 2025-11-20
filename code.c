#include<stdio.h>
#include<string.h>
struct date{
    int dt;
    int mt;
    int yr;
};
struct patient{
    int id;
    char name[20];
    struct date ad;
    struct date dis;
    double bill;
};
int main(){
    int i, num;
    struct patient hos[3];
    hos[0].id=24536;
    strcpy(hos[0].name,"Dev");
    hos[0].ad.dt=12;
    hos[0].ad.mt=10;
    hos[0].ad.yr=2025;
    hos[0].dis.dt=16;
    hos[0].dis.mt=11;
    hos[0].dis.yr=2025;
    hos[0].bill=256780.5;
    
    hos[1].id=37570;
    strcpy(hos[1].name,"Kedar");
    hos[1].ad.dt=6;
    hos[1].ad.mt=4;
    hos[1].ad.yr=2023;
    hos[1].dis.dt=15;
    hos[1].dis.mt=4;
    hos[1].dis.yr=2023;
     hos[1].bill=30000;
    
    hos[2].id=65798;
    strcpy(hos[2].name,"Rahul");
    hos[2].ad.dt=18;
    hos[2].ad.mt=5;
    hos[2].ad.yr=2019;
    hos[2].dis.dt=2;
    hos[2].dis.mt=7;
    hos[2].dis.yr=2019;
     hos[2].bill=45223.7;
     
     printf("\t\t\t\tPatient Details\n\n");
     printf("Enter Patient ID: ");
     scanf("%d",&num);
      for(i=0;i<3;i++){
     if(num==hos[i].id){
             printf("\n\nID\t\t\t\t\t: %d\nName\t\t\t\t: %s\nDate of Admiting\t: %d/%d/%d\nDate of Discharge\t: %d/%d/%d\nBill\t\t\t\t: %lf (₹)",hos[i].id,hos[i].name,hos[i].ad.dt,hos[i].ad.mt,hos[i].ad.yr,hos[i].dis.dt,hos[i].dis.mt,hos[i].dis.yr,hos[i].bill);
         }
           
     }
       if(num!=hos[0].id && num!=hos[1].id && num!=hos[2].id){
           printf("\nID not found!");  
       }
     return 0;
     }
