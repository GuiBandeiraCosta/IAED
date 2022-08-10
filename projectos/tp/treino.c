#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int conta_consecutivos(const int vec[], int vec_size){
    int i;
    int contador;
    contador = 0;
    for(i= 0; i <(vec_size-1);i++){
        if(vec[i]< vec[i+1]){
            contador += 1;
        }
    }
    return contador;
}
int main(){
}
int mais_divisores(const int vec[], int vec_size){
    int max,max_divisores = 0;
    int i,j;
    int temp = 0;
    for(i = 0; i < vec_size;i++){
        for(j = 0; j < vec_size;j++){
            if(vec[i] % vec[j] == 0){
                temp += 1;
            }
        }
        if(temp > max_divisores){
            max = vec[i];
            max_divisores = temp;
        }
    }
    return max;
}

char * intercala(const char * a, const char * b){
    int tamanho,i,j,tamanho_nova;
    tamanho =0;j = 0;tamanho_nova = tamanho*2 + 1;
    while(a[tamanho] != '\0'){tamanho += 1;}
    
    char nova[tamanho *2 + 1];
    for(i = 0; i < (tamanho_nova - 1); i += 2){
        nova[i] = a[j];
        nova[i + 1] = b[j];
        j += 1;
    }
    return nova;
    
}

typedef struct s_node {
    int v;
    struct s_node *next;
} node;



node * multiplica(const node * h1, const node * h2){
    node *nova = malloc(sizeof(struct s_node));
    while(h1 != NULL && h2 != NULL){
        if(h1 == NULL && h2 != NULL){
            nova->v = h2->v;
            h2 = h2->next;
        }
        else if(h1 != NULL && h2 == NULL){
            nova->v = h1->v;
            h1 = h1->next;
        }
        else{
            nova->v = h1->v * h2->v;
            h1 = h1->next;
            h2 =  h2->next;
        }
        nova = nova->next;
    }
    return nova;
    
}

