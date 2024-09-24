#include <stdio.h> 
#include <string.h> 

// Função para classificar prioridade de requisitos 
void classificar_prioridade(char requisito[], char impacto[], char viabilidade[]) { 
    char prioridade[10]; 

    // Classificação com base no impacto no usuário final 
    if (strcmp(impacto, "alto") == 0) { 
        if (strcmp(viabilidade, "alta") == 0 || strcmp(viabilidade, "média") == 0) { 
            strcpy(prioridade, "Alta"); 
        } else { 
            strcpy(prioridade, "Média"); 
        } 
    } else if (strcmp(impacto, "médio") == 0) { 
        if (strcmp(viabilidade, "alta") == 0 || strcmp(viabilidade, "média") == 0) { 
            strcpy(prioridade, "Média"); 
        } else { 
            strcpy(prioridade, "Baixa"); 
        } 
    } else {  // Impacto baixo 
        if (strcmp(viabilidade, "alta") == 0) { 
            strcpy(prioridade, "Baixa"); 
        } else { 
            strcpy(prioridade, "Baixa"); 
        } 
    } 

    printf("Requisito: %s | Impacto: %s | Viabilidade: %s | Prioridade: %s\n", requisito, 
impacto, viabilidade, prioridade); 
} 

int main() { 
    // Requisitos 
    char requisitos[][50] = { 
        "Integração com assistentes de voz para acessibilidade", 
        "Tela de login com animações", 
        "Sistema de recomendação personalizado", 
        "Notificações push motivacionais" 
    }; 

    // Impactos 
    char impactos[][10] = {"alto", "baixo", "alto", "médio"}; 

    // Viabilidades 
    char viabilidades[][10] = {"média", "alta", "baixa", "alta"}; 

    // Classificar cada requisito 
    for (int i = 0; i < 4; i++) { 
        classificar_prioridade(requisitos[i], impactos[i], viabilidades[i]); 
    } 

    return 0; 
} 