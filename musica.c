include<stdio.h>

int main(){

    int amigos, musicas, tocando, pref[220000], i, tamanho, trocou=0;

    scanf("%d %d %d", &amigos, &musicas, &tocando);

    for(i = 0; i<amigos*2; i++){
        scanf("%d", &pref[i]);
    }

    tamanho = i;

    i=1

    while{
        if(tocando == pref[i]){
            tocando = pref[i-1];

            trocou++;
        }

        i=(2*i) + 1;

        if(i >= tamanho){
            i = 1;
        }
    }

}