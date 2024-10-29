/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   litecode.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: killian <killian@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 09:23:52 by killian           #+#    #+#             */
/*   Updated: 2024/10/29 09:23:56 by killian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>   // Inclusion de `unistd.h` en premier pour `write`
#include <string.h>
#include <stdlib.h>

// Déclaration de la fonction uniqueMorserepresentations
int uniqueMorserepresentations(char** words, int wordsSize);

// Fonction print_number pour afficher un nombre sans printf
void print_number(int n) {
    if (n >= 10) {
        print_number(n / 10);
    }
    char c = (n % 10) + '0';
    write(1, &c, 1);
}

int main() {
    // Tableau de mots à tester
    char* words[] = {"gin", "zen", "gig", "msg"};
    int wordsSize = 4;

    // Appel de la fonction pour obtenir le nombre de transformations uniques
    int uniqueCount = uniqueMorserepresentations(words, wordsSize);

    // Affichage du résultat
    print_number(uniqueCount);
    write(1, "\n", 1);  // Nouvelle ligne pour que le résultat soit lisible

    return 0;
}

// Fonction uniqueMorserepresentations pour compter les transformations uniques
int uniqueMorserepresentations(char** words, int wordsSize) {
    const char *morse[] = {
        ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---",
        "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-",
        "..-", "...-", ".--", "-..-", "-.--", "--.."
    };

    // Tableau pour stocker les transformations uniques
    char* transformations[wordsSize];
    int uniqueCount = 0; // Compteur pour les transformations uniques

    // Transforme chaque mot en une séquence Morse
    for (int i = 0; i < wordsSize; i++) {
        char chaine[150];
        chaine[0] = '\0';

        // Construction de la transformation Morse pour chaque lettre
        for (int j = 0; words[i][j] != '\0'; j++) {
            int index = words[i][j] - 'a';
            strcat(chaine, morse[index]);
        }

        // Vérifie l'unicité de la transformation
        int isUnique = 1;
        for (int k = 0; k < uniqueCount; k++) {
            if (strcmp(transformations[k], chaine) == 0) {
                isUnique = 0;
                break;
            }
        }

        // Ajoute la transformation si elle est unique
        if (isUnique) {
            transformations[uniqueCount] = strdup(chaine);
            uniqueCount++;
        }
    }

    // Libération de la mémoire allouée pour chaque transformation unique
    for (int k = 0; k < uniqueCount; k++) {
        free(transformations[k]);
    }

    return uniqueCount;
}

