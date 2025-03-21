#include "queue.h"

//sint nomorantrian = 0;

Node* Createqueue(int data){
    return createNode(data);
}

void enqueue(queue *q, Node *x){
    insertLast(&(*q), x);
}

void dequeue(queue *q){
    deleteAwal(&(*q));
}

void ambilantrian(queue *q, int nomorantrian){
    //nomorantrian =+ 1;
    Node *NewNode = Createqueue(nomorantrian);
    enqueue(q, NewNode);
    cetakantrian(q, nomorantrian);
}

void prosesantrian(queue *q, int nomorantrian){
    dequeue(q);
    cetakantrian(q, nomorantrian);
}

void cetakantrian(queue *q, int nomorantrian){
    printList(q);
    printf("\n");
}

bool exitsystem(queue *q, queue *e){
    deleteAll(q);
    deleteAll(e);
    return false;
}

void printmenu(){
    printf("--------------------\n");
    printf("|                  |\n");
    printf("|1. ambil antrian  |\n");
    printf("|2. proses antrian |\n");
    printf("|3. cek antrian    |\n");
    printf("|4. exit system    |\n");
    printf("|                  |\n");
    printf("--------------------\n");
}

int length (queue *q){
    int count = 0;
    Node *temp = q->head;
    while (temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}