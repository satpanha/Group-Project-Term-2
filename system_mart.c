#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<stdbool.h>
// declar size of arr
int main(){
    //declar file
    //simple data type
    int i,j,key,n=0,index,code_sr,tmp_code,tmp_stock,no=1;//n number of produch
    int code[50],stock[50],wrong;
    char name[50][45],pwd[25],pass[5]="1234",name_sr[45],temp_name[45];
    float prize[50],tmp_prize,total_money=0;
    bool check = false;
    //customer data
    int qty[35],type_pdu=0,total_cus=0,slod_pro=0;
    float total,cost[35],prize_cus[35];
    char name_cus[35][45];
    // all data product 
    strcpy(name[0],"Coca");strcpy(name[1],"Sting");strcpy(name[2],"Milk");strcpy(name[3],"MaMa");strcpy(name[4],"ICE-Late");strcpy(name[5],"Milk-tea");strcpy(name[6],"Choloate");strcpy(name[7],"Orange");
    code[0]=1001; code[1]=1002; code[2]=1003; code[3]=1004; code[4]=1005; code[5]=1006; code[6]=1007; code[7]=1008;
    stock[0]=100;stock[1]=300;stock[2]=40;stock[3]=250;stock[4]=30;stock[5]=70;stock[6]=120;stock[7]=30;
    prize[0]=2000;prize[1]=2500;prize[2]=8000;prize[3]=2300;prize[4]=4000;prize[5]=3500;prize[6]=1500;prize[7]=5000;
    n=8;
    //
    void ed(){
        printf("\n\t");
            for(i=1;i<=15;i++){
                Sleep(130);
                printf(".");
            }
    }
    //out put data product
    void header(){
    	printf("\t======================Product========================\n");
        printf("\t%s\t%9s %10s %10s %10s\n","No","Name","Code","Prize","Stock");
    }
    void out_data(){
        printf("\tNo %d : %10s %10d %10.2f %10d\n",no,name[index],code[index],prize[index],stock[index]);        
        no++;
    }
    void in_put(){
        n++;
        puts("\t================Input Data================\n");
        printf("\tInput Product Name  : ");scanf("%s",&name[n-1]);
        code_in:
        printf("\tInput Product Code  : ");scanf("%d",&code[n-1]);
        //check id
            check=false;
            for(j=0;j<n;j++){
                    for(i=0;i<n;i++){
                        if((i==j)){
                            continue;
                        }else{
                            if(code[j]==code[i]){
                                check=true;
                            break;
                        }
                    }
                }
            }
            if(check==true){
                    printf("\tFalse\n");
                    printf("\tCode has been used..!\n");
                    printf("\tPlease input Again\n");
                    Sleep(2000);
                    goto code_in;
            }
        printf("\tInput Product Stock : ");scanf("%d",&stock[n-1]);
        printf("\tInput Product Prize : ");scanf("%f",&prize[n-1]);
    }
    //search data by name
    void search_by_name(){
        check=false;
        printf("\t================Search================\n");
        printf("\tInput Name : ");fflush(stdin);gets(name_sr);
            for(i=0;i<n;i++){
                if(strcmpi(name_sr,name[i])==0){
                    index=i;
                    check =true;
                    printf("\t Search found.....!\n");
                    header();
                    out_data();
                }
            }
            if(check==false){
                printf("\tSearch not Found....!\n");
            }
    }
    //search_by_code
    void search_by_code(){
        printf("\t================Search================\n");
        printf("\tInput Code : ");scanf("%d",&code_sr);
            for(i=0;i<n;i++){
                if(code_sr==code[i]){
                    index=i;
                    check =true;
                    printf("\t Search found.....!\n");
                    header();
                    out_data();
                }
            }
            if(check==false){
                printf("\tSearch not Found....!\n");
            }  
    }
    //find index data
    void inovoce_cus(){
        printf("\tInput Code : ");scanf("%d",&code_sr);
            for(i=0;i<n;i++){
                if(code_sr==code[i]){
                    index=i;
                    check =true;
                    strcpy(name_cus[type_pdu],name[index]);
                    prize_cus[type_pdu]=prize[index];
                    printf("\t%d : %s\n",code_sr,name[index]);
                    printf("\tInter Quantity\n");
                    printf("\t");scanf("%d",&qty[type_pdu]);
                    stock[index]-=qty[type_pdu];
                    cost[type_pdu]=qty[type_pdu]*prize[index];
                    total+=cost[type_pdu];
                    type_pdu+=1;
                    slod_pro+=qty[index];
                    break;
                }
            }
            if(check==false){
                printf("\tSearch not Found....!\n");
            }
    }
    //detelte data 
    void del(){
        search_by_code();
        printf("\n\t================Delete================\n");
        printf("\t1. Delete\n");
        printf("\t0. Home\n");
        printf("\t");scanf("%d",&key);
            switch(key){
                case 1:
                    for(i=index;i<n;i++){
                        code[i]=code[i+1];
                        prize[i]=prize[i+1];
                        stock[i]=stock[i+1];
                        strcpy(name[i],name[i+1]);
                    }
                    ed();
                    printf("\tDelete Success..!\n");
                    n--;
                    break;
                default:
                    printf("\tDelete unsucces...!\n");
                    break;
            }
    }
    //process update
    void pro_update(){
        up_proc:
        printf("\t================Update================\n");
        printf("\t1. Update Name\n");
        printf("\t2. Update Code\n");
        printf("\t4. Update Prize\n");
        printf("\t3. Update Stock\n");
        printf("\t0. Home\n");
        printf("\t");scanf("%d",&key);
        switch(key){
            case 1:
                printf("\tEnter New Name : ");
                scanf("%s",&name[index]);
                printf("\t");ed();
                printf("\tUpdate successful\n");
                system("cls");
                header();
                out_data();
                Sleep(1500);
                goto up_proc;
                break;
            case 2:
                printf("\tEnter New Code : ");
                scanf("%d",&code[index]);
                printf("\t");ed();
                printf("\tUpdate successful\n");
                system("cls");
                header();
                out_data();
                Sleep(1500);
                goto up_proc;
                break;
            case 3:
                printf("\tEnter New Stock : ");
                printf("\t");scanf("%d",&stock[index]);
                printf("\t");ed();
                printf("\tUpdate successful\n");
                system("cls");
                header();
                out_data();
                Sleep(1500);
                goto up_proc;
                break;
            case 4:
                printf("\tEnter New Prize : ");
                scanf("%f",&prize[index]);
                printf("\t");ed();
                printf("\tUpdate successful\n");
                system("cls");
                header();
                out_data();
                Sleep(1500);
                goto up_proc;
                break;
            default:
                break;
        }
    }
    //Update interface
    void upd_data(){
        printf("\t================Update================\n");
        printf("\t1. search by Name\n");
        printf("\t2. search by Code\n");
        printf("\t0. Home\n");
        printf("\t");scanf("%d",&key);
            switch(key){
                case 1:
                    search_by_name();
                    pro_update();
                    break;
                case 2:
                    search_by_code();
                    pro_update();
                    break;
                default:
                    break;
            }
    }
    void acc(){
        printf("\n\t================Account================\n");
        printf("\tTotal Money        = %f \n",total_money);
        printf("\tTotal Customer     = %d \n",total_cus);
        printf("\tSold out product   = %d \n",slod_pro);
    }
    //end program interface
    //Interface Start Program
    start:
    system("cls");
    printf("\t================Mart================\n");
    printf("\t1. Login as admin\n");
    printf("\t2. Login as Cashir\n");
    printf("\t0. Exit\n");
    printf("\t");scanf("%d",&key);
    switch(key){
        //admin interface program
        case 1:
            wrong=3;
            login:
            system("cls");
            printf("\t==========Login==========\n");
            printf("\tEnter Password : ");scanf("%s",&pwd);
            if(strcmp(pwd,pass)==0){
                printf("\n\tLogin succesful......\n");
                    admin:
                    system("cls");
                    printf("\t==========Admin==========\n");
                    printf("\t1. Input  Data\n");
                    printf("\t2. Search Data\n");
                    printf("\t3. Update Data\n");
                    printf("\t4. Delete Data\n");
                    printf("\t5. Check balance\n");
                    printf("\t6. Check All product\n");
                    printf("\t0. Home\n");
                    printf("\t");scanf("%d",&key);
                        switch(key){
                            case 1:
                            //input data
                                input:
                                system("cls");
                                in_put();
                                printf("\t1. Input again \n");
                                printf("\t0. Home\n");
                                printf("\t");scanf("%d",&key);
                                    if(key==1){
                                        goto input;
                                    }else{
                                        goto admin;
                                    }
                                break;
                            case 2:
                                //saerch data
                                search:
                                system("cls");
                                printf("\t================Search================\n");
                                printf("\t1. Search by Name\n");
                                printf("\t2. Search by Code\n");
                                printf("\t0. Home\n");
                                printf("\t");scanf("%d",&key);
                                    switch(key){
                                        case 1:
                                            system("cls");
                                            search_by_name();
                                                //searcg aga
                                                printf("\t1. search again\n");
                                                printf("\t0. Home");
                                                printf("\t");scanf("%d",&key);
                                                    switch(key){
                                                        case 1:
                                                            goto search;
                                                            break;
                                                        default:
                                                            goto admin;
                                                            break;
                                                    }
                                            break;
                                        case 2:
                                            system("cls");
                                            search_by_code();
                                                printf("\t1. search again\n");
                                                printf("\t0. Home");
                                                printf("\t");scanf("%d",&key);
                                                    switch(key){
                                                        case 1:
                                                            goto search;
                                                            break;
                                                        default:
                                                            goto admin;
                                                            break;
                                                    }
                                            break;
                                        default:
                                            goto admin;
                                            break;
                                    }
                                printf("\t1. Search Again \n");
                                printf("\t0. Home\n");
                                printf("\t");scanf("%d",&key);
                                    if(key==1){
                                        goto search;
                                    }else{
                                        goto admin;
                                    }
                                break;
                            case 3:
                                update:
                                system("cls");
                                upd_data();
                                system("cls");
                                printf("\t================Update================\n");
                                printf("\t1. Update Again \n");
                                printf("\t0. Home\n");
                                printf("\t");scanf("%d",&key);
                                    if(key==1){
                                        goto update;
                                    }else{
                                        goto admin;
                                    }
                            break;
                            case 4:
                                delete:
                                system("cls");
                                del();
                                printf("\t1. Delete Again \n");
                                printf("\t0. Home\n");
                                printf("\t");scanf("%d",&key);
                                    if(key==1){
                                        goto delete;
                                    }else{
                                        goto admin;
                                    }
                                break;
                            case 5:
                                system("cls");
                                acc();
                                    printf("\tPress any key to home\n");
                                    getch();
                                    goto admin;
                                break;
                            case 6:
                                system("cls");
                                header();
                                no=1;
                                index=0;
                                for(i=0;i<n;i++){
                                    index=i;
                                    out_data();
                                }
                                printf("\tPress any key for home\n");
                                getch();
                                goto admin;
                                break;
                            default:
                                ed();
                                printf(" Logout......!\n");
                                Sleep(1000);
                                goto start;
                                break;
                        }                    
            }else{
                wrong-=1;
                if(wrong>0){
                    printf("\tWrong Passowrd \n");
                    Sleep(1000);
                    printf("\tEnter Password Again\n");
                }
                if(wrong<=0){
                    printf("\tYou are incorrect Many time...!\t");
                    Sleep(1500);
                    goto start;
                }
                goto login;
            }
            break;
            //cashir 
        case 2:
            cashir:
            system("cls");
            printf("\t================Cashir================\n");
            printf("\t1. Check information Product\n");
            printf("\t2. Inovoce\n");
            printf("\t3. Check Balance\n");
            printf("\t4. Check All product\n");
            printf("\t0. Home\n");
            printf("\t");scanf("%d",&key);
                switch(key){
                    case 1:
                        check:
                        system("cls");
                        printf("\t================Check Data================\n");
                        printf("\t1. search By Name \n");
                        printf("\t2. search by code\n");
                        printf("\t0. Home\n");
                        printf("\t");scanf("%d",&key);
                            switch(key){
                                case 1:
                                    system("cls");
                                    search_by_name();
                                    printf("\t1. Check again\n");
                                    printf("\t0. Home");
                                    scanf("%d",&key);
                                        switch(key){
                                            case 1:
                                                goto check;
                                                break;
                                            default:
                                                goto cashir;
                                                break;
                                        }
                                    break;
                                case 2:
                                    system("cls");
                                    search_by_code();
                                    printf("\t1. Check again\n");
                                    printf("\t0. Home");
                                    printf("\t");scanf("%d",&key);
                                        switch(key){
                                            case 1:
                                                goto check;
                                                break;
                                            default:
                                                goto cashir;
                                                break;
                                            }
                                    break;
                                default:
                                    goto cashir;
                                    break;
                            }
                        break;
                    case 2:
                        system("cls");
                        type_pdu=0;
                        total=0;
                        printf("\n\t================Inovoice================\n");
                        do{
                            inovoce_cus();
                            printf("\t1. Enter Again\n");
                            printf("\t0. Stop\n");
                            printf("\t");scanf("%d",&key);
                        }while(key!=0);
                            system("cls");
                            printf("\n\t==========================Inovoice==========================\n");
                            for(i=0;i<type_pdu;i++){
                                printf("\t Name : %s  \tPrize %.2f\tQuantity : %d\tcost: %.2f \n",name_cus[i],prize_cus[i],qty[i],cost[i]);
                                    }
                            printf("\t============================Payment %.2f \n",total);
                            getch();
                            total_cus+=1;
                            total_money+=total;
                            goto cashir;
                            break;                 
                    case 3:
                        system("cls");
                        acc();
                        printf("\tPress any key to back Home\n");
                            getch();
                            goto cashir;
                            break;
                        break; 
                    case 4:
                        system("cls");
                        header();
                        no=1;index=0;
                        for(i=0;i<n;i++){
                        index=i;
                        out_data();
                        }
                        printf("\tPress any key for home\n");
                        getch();
                        goto cashir;
                            
                            
                    break;                                     
                    default:
                        ed();
                        printf("Logout Cashir");
                        goto start;
                }
            break;
        default:
            system("cls");
            ed();
            printf("\tThnak You ........!");
            Sleep(1000);
            break;
    }
}
