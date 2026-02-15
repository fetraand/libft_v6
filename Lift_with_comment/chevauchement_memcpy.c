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
    
    memcpy(buffer1 + 2, buffer1, 5);
    
    printf("Après memcpy+2:      %s\n", buffer1);
}























/*    
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
*/
