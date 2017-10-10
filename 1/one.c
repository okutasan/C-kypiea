#include <stdio.h>
#include <string.h>

// Deklarasi fungsi 
void print_identitas();
void print_jumlah(int num1, int num2);
float hitung(int num1, int num2, char operator);

// main fungsi 
int main(){
    print_identitas();
    print_jumlah(2,8);

    float hasil = hitung(10,5,'+');
    printf("Hasil = %2.2f\n",hasil);
    hasil = hitung(10,5,'-');
    printf("Hasil = %2.2f\n",hasil);
    hasil = hitung(10,5,'*');
    printf("Hasil = %2.2f\n",hasil);
    hasil = hitung(10,5,'/');
    printf("Hasil = %2.2f\n",hasil);
}

// prosedur cetak identitas 
void print_identitas(){
    printf("=======================\n");
    printf("Nama : Sakata Gintoki\n");
    printf("NIM  : A11.1994.0967\n");
    printf("Alamat : Distrik Kabuki\n");
    printf("=======================\n");
}

void print_jumlah(int num1,int num2){
    int hasil;
    hasil = num1 + num2;
    printf("%d + %d = %d\n",num1,num2,hasil);
}

float hitung(int num1, int num2, char operator){
    int hasil;
    if(operator=='+'){
        hasil=num1+num2;
    }
        else if(operator=='-'){
            hasil=num1-num2;
        }
            else if(operator=='*'){
                hasil=num1*num2;
            } 
                else if(operator=='/'){
                    hasil=num1/num2;
                }
    return hasil;
}