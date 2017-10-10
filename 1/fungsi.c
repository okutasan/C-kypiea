#include "header.h"
//prosedur mencetak array of char(string)
void print_nama(char nama[]){
    int i;
    for(i=0;nama[i]!='\0';i++){
        printf("%c",nama[i]);
    }
}

// fungsi mengembalikan jumlah karakter 
int len_text(char text[]){
    int i=0;
    while(text[i]!='\0'){
        i++;
    }
    return i;
}

// fungsi mengembalikan nilai n dari array 
int max(int arr_num[],int n){
    int i=0;
    int nilai;
    while(i<n){
        nilai=arr_num[i];
        i++;
    }
    return nilai;
}