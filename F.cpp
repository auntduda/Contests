    #include <bits/stdc++.h>
    using namespace std;
     
    #define ll long long
    #define vi vector<int>
    #define vii pair<int,int>
     
    struct corredor{
        char nome[40];
        float tempo;
    } corredores[25], temp;
     
    int main(){
        ios::sync_with_stdio(false);
        int n, tempo_temp;
        float temp1, temp2, temp3;
        
        cin >> n;
     
        for (int i = 0; i < 25; i++){
            corredores[i].tempo = 10000;
        }
        
     
        for (int i = 0; i < n; i++){
            scanf("%s", corredores[i].nome);
            cin >> temp1 >> temp2 >> temp3;
            corredores[i].tempo = temp1+temp2+temp3;
            tempos[i] = temp1+temp2+temp3;
        }
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(corredores[j].tempo > corredores[j+1].tempo){
                    temp = corredores[j];
                    corredores[j] = corredores[j+1];
                    corredores[j+1] = temp;
                }
            }
        }
     
        for (int i = 0; i < n ; i++){
            int div;
            div = corredores[i].tempo/60;
            printf("%d. %s - %d:%06.3f\n", i+1, corredores[i].nome, div , corredores[i].tempo - div*60);
        }
        return 0;
    }