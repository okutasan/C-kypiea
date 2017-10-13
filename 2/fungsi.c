#include "header.h"

// fungsi cek tahun kabisat 
int is_kabisat(int year){
    if(year%4==0){
        return 1;
    } 
        else if(year%100==0){
            return 1;
        }
            else if(year%400==0){
                return 1;
            }
    else{
        return 0;
    }
}

//menghitung jumlah vokal suatu text 
int hitung_vokal(char text[]){
    int i=0;
    int vokal=0;
    while(text[i]!='\0'){
        if(text[i]=='A' ||text[i]=='I'||text[i]=='U' ||text[i]=='E'||text[i]=='O' ||text[i]=='a'||text[i]=='i' ||text[i]=='u'||text[i]=='e' ||text[i]=='o'){
            vokal++;
        } 
        i++;
    }
    return vokal;
}

int check_prime(int num){
    int i=1;
    int faktor=0;
    while(i<=num){
        if(num%i==0){
            faktor++;
        }
        i++;
    }

    if(faktor==2){
        return 1;
    }else{
        return 0;
    }
}