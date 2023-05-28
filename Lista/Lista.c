#include <stdlib.h>
#include <time.h>
#include <stdio.h>

#include "Lista.h"

List *create_list(int capacity){
        List *out =  malloc (sizeof(List));
        out ->quantity = capacity;
        out ->vec = malloc(capacity * sizeof(int));

        return out;
}

void destroy_list(List **lista){
    List *vec_ref = *lista;

    free(vec_ref ->vec);
    free(vec_ref);
    *lista = NULL;
}

void insert_numbersnio(List *listavazia){
    int *lista = listavazia -> vec;
    srand(time(NULL));
    
    for(int i = 0; i < listavazia -> quantity; i++)
        *(lista + i) = (rand() % 200);
}

void insert_numbersio(List *listavazia){
    int *lista = listavazia -> vec;
    srand(time(NULL));
    
    for(int i = 0; i < listavazia -> quantity; i++)
        *(lista + i) = (rand() % 200);
    int k;
    for(int j =0; j < listavazia -> quantity - 1; j++){
        for(int i = 0; i < listavazia -> quantity - 1; i++){
            if(*(lista + i) > *(lista + i + 1)){
                k = *(lista + i + 1);
                *(lista + i + 1) = *(lista + i);
                *(lista + i) = k;
        }
        }
    }
}

void print_list_iterative(List *lista){
    int *imprimir = lista -> vec;
    printf("\nElementos da Lista:");
    for(int i =0; i < lista -> quantity; i++)
        printf("\nO Valor na posicao %d = %d.",i+1, *(imprimir + i));
}

void sequencial_search(List *lista, int number){
    int a = 0;
    for (int i =0; i < lista ->quantity; i++){
        if(lista ->vec[i] == number){
            printf("\nBUSCA SEQUENCIAl: Valor %d encontrado na posicao %d.", number, i+1);
            a = 1;
        }
    }
    if (a == 0)
    printf("\nBUSCA SEQUENCIAl: Valor %d nao encontrado.", number);
}

void sequencial_search_ordened(List *lista, int number){
    int a = 0;
    for (int i =0; i < lista ->quantity; i++){ 
        if(lista ->vec[i] >= number){
            a = 1;
            if(lista -> vec[i] == number)
                printf("\nBUSCA SEQUENCIAl ORDENADA: Valor %d encontrado na posicao %d.", number, i+1);
            else
                printf("\nBUSCA SEQUENCIAl ORDENADA: Valor %d nao encontrado.", number);
        }
    }
    if (a == 0)
    printf("\nBUSCA SEQUENCIAl ORDENADA: Valor %d nao encontrado.", number);
}

void binary_search_iterative(List *lista, int number){
    int first = 0, last = (lista->quantity) -1, half = -1, a;
    while(first <= last){
        half = first + (last - first)/2;
        if (number == lista ->vec[half]){
            a = 1;
            printf("\nBUSCA BINARIA ITERATIVA: Valor %d encontrado na posicao %d.", number, half+1);
        }
        else if (number > lista -> vec[half]){
            first = half + 1;
        }
        else{
            last = half - 1;
        }
    }
    if (a == 0)
    printf("\nBUSCA BINARIA ITERATIVA: Valor %d nao encontrado.", number);
}

void binary_search_recursive(List *lista, int number, int first, int last){
    int half = (first+last)/ 2, a;
    if (number == lista -> vec[half]){
        printf("\nBUSCA BINARIA RECURSIVA: Valor %d encontrado na posicao %d.", number, half + 1);
        return;
    }
    if (first > last){
        printf("\nBUSCA BINARIA RECURSIVA: Valor %d nao encontrado.", number);
        return;
    }
    if (number < lista -> vec[half]){
        binary_search_recursive(lista, number, first, half -1);
    }else{
        binary_search_recursive(lista, number, half + 1, last);
    }
}

void print_list_recursive(List *lista, int first, int last){
    if(first <= last){
        printf("\nO Valor na posicao %d = %d.",first + 1, lista -> vec[first]);
        print_list_recursive(lista, first + 1, last);
    }
}

void search_biggest_number_iterative(List *lista){
    int maior = lista->vec[0];
    for(int i = 1; i < lista->quantity; i++){
        if (lista->vec[i] > maior)
            maior = lista->vec[i];
    }
    printf("\nO maior elemento da Lista eh %d.", maior);
}

void search_biggest_number_recursive(List *lista, int size, int maior){
    if (size == lista -> quantity - 1){
        printf("\nO maior elemento da Lista eh %d.", lista -> vec[maior]);
        return;
    }
    else{
    if(lista -> vec[size + 1] > lista -> vec[maior])
        search_biggest_number_recursive(lista, size + 1, size +1);
    else{
        search_biggest_number_recursive(lista, size + 1, maior);
    }
}
}

void search_lowest_number_iterative(List *lista){
    int menor = lista->vec[0];
    for(int i =0; i < lista->quantity; i++){
        if (lista->vec[i] < menor)
            menor = lista->vec[i];
    }
    printf("\nO menor elemento da Lista eh %d.", menor);
}

void search_lowest_number_recursive(List *lista, int size, int menor){
    if (size == lista -> quantity - 1){
        printf("\nO menor elemento da Lista eh %d.", lista -> vec[menor]);
        return;
    }
    else{
    if(lista -> vec[size + 1] < lista -> vec[menor])
        search_biggest_number_recursive(lista, size + 1, size +1);
    else{
        search_biggest_number_recursive(lista, size + 1, menor);
    }
}
}

int sum_all_numbers_iterative(List *lista){
    int sum = 0;
    for (int i =0; i < lista -> quantity; i++){
        sum += lista -> vec[i];
    }
    return sum;
};

int sum_all_numbers_recursive(List *lista, int size){
    if (size == lista -> quantity)
        return 0;
    else
        return lista ->vec[size] + sum_all_numbers_recursive(lista, size + 1);
};

int product_all_numbers_iterative(List *lista){
    int product = lista -> vec[0];
    for (int i = 1; i< lista -> quantity; i++){
        product = product * lista -> vec[i];
    }
    return product;
}

int product_all_numbers_recursive(List *lista, int size){
    if (size == lista -> quantity)
        return 1;
    else
        return lista -> vec[size] * product_all_numbers_recursive(lista, size + 1);
};