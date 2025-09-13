#include <stdio.h>

int main() {
    // =========================
    // Carta 1 (pré-definida)
    // =========================
    char estado1 = 'A';
    char codigo1[4] = "A01";
    char nomeCidade1[50] = "PIAUI ";
    int populacao1 =3384547;
    float area1 = 1521.11;
    float pib1 = 699.28; // em bilhões de reais
    int pontosTuristicos1 = 50;

    // =========================
    // Carta 2 (pré-definida)
    // =========================
    char estado2 = 'B';
    char codigo2[4] = "B02";
    char nomeCidade2[50] = "MARANHÃO";
    int populacao2 = 7018211;
    float area2 = 1200.25;
    float pib2 = 300.50; // em bilhões de reais
    int pontosTuristicos2 = 30;

    // =========================
    // Cálculos derivados
    // =========================
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    float pibPerCapita1 = pib1 * 1000000000 / populacao1;
    float pibPerCapita2 = pib2 * 1000000000 / populacao2;

    // =========================
    // Comparação (População)
    // =========================
    printf("=== Comparacao de Cartas (Atributo: Populacao) ===\n\n");

    printf("Carta 1 - %s (%c): %d habitantes\n", nomeCidade1, estado1, populacao1);
    printf("Carta 2 - %s (%c): %d habitantes\n\n", nomeCidade2, estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}