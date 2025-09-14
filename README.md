#include <stdio.h>
#include <string.h>

int main() {

    /*
    ================================================================
    |                SUPER TRUNFO - NÍVEL MESTRE!                  |
    ================================================================
    
    E finalmente chegamos no último dos três níveis do projeto 
    do mini jogo Super Trunfo em C. 🎴

    Assim como nos dois níveis anteriores, o usuário poderá inserir 
    dados da cidade escolhida: nome, PIB, população, área, etc.

    A grande novidade é a **função de duelo** ⚔️:
    - O código soma todos os atributos da cidade.
    - Quem tiver o maior valor total vence!
    - Mas atenção! Na densidade populacional, quem tiver o **menor valor**,
      recebe mais pontos!
    */

    printf("Bem-vindo ao SUPER TRUNFO - NÍVEL FINAL!\n\n");

    // Vamos iniciar o jogo
    for(int i = 3; i > 0; i--) {
        printf("Iniciando em %d...\n", i);
    }

    printf("\nDuelo iniciado! Que vença a melhor cidade!\n\n");

    // Função para finalizar
    endGame();

    return 0;
}

void endGame() {
    printf("\n================ FIM DO PROJETO ================\n");
    printf("Os códigos dos três níveis estão disponíveis para\n");
    printf("quem quiser testar. Seu feedback ajuda muito!\n\n");
    contatos();
}

void contatos() {
    char gmail[] = "modolodev@gmail.com";
    char linkedin[] = "Miguel Modolo";

    printf("Entre em contato comigo:\n");
    printf("Gmail: %s\n", gmail);
    printf("LinkedIn: %s\n", linkedin);
}

retun = 0;