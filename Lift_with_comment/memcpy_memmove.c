/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy_memmove.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fetraand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 19:13:42 by fetraand          #+#    #+#             */
/*   Updated: 2026/02/03 19:13:49 by fetraand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void print_array(const char *name, const char *arr, size_t n) {
    printf("%s: ", name);
    for (size_t i = 0; i < n; i++) {
        printf("%c ", arr[i]);
    }
    printf("\n");
}

int main() {
    printf("=== TEST 1: Sans chevauchement ===\n");
    char src1[] = "ABCDEF";
    char dest1[10];
    
    memcpy(dest1, src1, 6);
    dest1[6] = '\0';
    printf("memcpy  (sans chevauchement): %s\n", dest1);
    
    memmove(dest1, src1, 6);
    dest1[6] = '\0';
    printf("memmove (sans chevauchement): %s\n", dest1);
    
    printf("\n=== TEST 2: Avec chevauchement (copie vers la droite) ===\n");
    char buffer2[] = "ABCDEFGHIJ";
    print_array("Avant ", buffer2, 10);
    
    // memcpy avec chevauchement (source < destination)
    char buffer2_copy[20];
    memcpy(buffer2_copy, buffer2, 10);
    memcpy(buffer2 + 2, buffer2_copy, 5);  // Évite UB en copiant d'abord
    
    print_array("Après memcpy (sécurisé)  ", buffer2, 10);
    
    // Réinitialisation
    strcpy(buffer2, "ABCDEFGHIJ");
    
    // memmove gère directement le chevauchement
    memmove(buffer2 + 2, buffer2, 5);
    print_array("Après memmove           ", buffer2, 10);
    
    printf("\n=== TEST 3: Avec chevauchement (copie vers la gauche) ===\n");
    char buffer3[] = "ABCDEFGHIJ";
    print_array("Avant  ", buffer3, 10);
    
    memmove(buffer3, buffer3 + 3, 4);
    print_array("Après  ", buffer3, 10);
    
    printf("\n=== TEST 4: memcpy avec chevauchement (COMPORTEMENT INDÉFINI) ===\n");
    char buffer4[] = "1234567890";
    print_array("Avant  ", buffer4, 10);
    
    // ATTENTION: Ceci a un comportement indéfini avec memcpy!
    // memcpy(buffer4 + 2, buffer4, 5);  // DANGER!
    // À la place, on montre ce qui pourrait arriver:
    printf("memcpy avec chevauchement: COMPORTEMENT INDÉFINI\n");
    printf("(Peut produire: 12 1 2 1 2 1 2 ... ou planter, ou autre)\n");
    
    return 0;
}
