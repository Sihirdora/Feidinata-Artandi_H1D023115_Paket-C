#include <iostream>
using namespace std;
#define MAXQUEUE 3

typedef struct{
int count;
int front;
int rear;
int item[MAXQUEUE];

} QUEUE;

QUEUE antrean;

void inisialisasi(QUEUE *Q){
Q->count=0;
Q->front=0;
Q->rear=0;
}

int isEmpty(QUEUE *Q){
int hasil=0;
if (Q->count==0){
hasil=1;
}
return hasil;
}

int isFull(QUEUE *Q){
int hasil=0;
if (Q->count==MAXQUEUE){
hasil=1;
}

return hasil;
}

void insert(QUEUE *Q, int value){
    if(Q->count==MAXQUEUE){
        cout<<"Sudah penuh";
    }else{
        Q->item[Q->rear]=value;
        Q->rear=(Q->rear+1)%MAXQUEUE;
        cout<<"Masukkan "<<value<<endl;
        ++(Q->count);
    }
}

void hapus(QUEUE *Q, int *item){
    if(Q->count==0){
        cout<<"Kosong";
    }else{
        *item=Q->item[Q->front];
        Q->front=(Q->front+1)%MAXQUEUE;
        cout<<"Menghapus "<<*item<<" dari antrean"<<endl;
        --(Q->count);
    }
}
int main(){
int a;
inisialisasi(&antrean);
insert(&antrean,17);
cout<<"Isi antrean: 17"<<endl;
insert(&antrean,45);
cout<<"Isi antrean: 17 45"<<endl;
insert(&antrean,77);
cout<<"Isi antrean: 17 45 77"<<endl;
hapus(&antrean,&a);
insert(&antrean,15);
cout<<"Isi antrean: 45 77 15"<<endl;
}