/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy_avec_chevauchement.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fetraand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 20:32:31 by fetraand          #+#    #+#             */
/*   Updated: 2026/02/03 20:33:00 by fetraand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int main() {
    printf("=== TEST DU CHEVAUCHEMENT AVEC MEMCPY ===\n");
    printf("ATTENTION: Comportement indéfini !\n\n");
    
    // Test 1: Chevauchement vers la droite
    printf("1. CHEVAUCHEMENT VERS LA DROITE\n");
    printf("--------------------------------\n");
    
    char buffer1[] = "0123456789";
    printf("Avant memcpy:        %s\n", buffer1);
    
    // DANGER: Comportement indéfini !
    memcpy(buffer1 + 5, buffer1, 5);
    
    printf("Après memcpy+2:      %s\n", buffer1);
    printf("(Résultat imprévisible)\n\n");
    
    // Test 2: Chevauchement vers la gauche
    printf("2. CHEVAUCHEMENT VERS LA GAUCHE\n");
    printf("--------------------------------\n");
    
    char buffer2[] = "ABCDEFGHIJ";
    printf("Avant memcpy:        %s\n", buffer2);
    
    // DANGER: Comportement indéfini !
    memcpy(buffer2, buffer2 + 3, 5);
    
    printf("Après memcpy-3:      %s\n", buffer2);
    printf("(Résultat imprévisible)\n\n");
}
