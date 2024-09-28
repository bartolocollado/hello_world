#include <stdio.h>
#include <string.h>
int main()
{
    char contraseña[] = "estas cerca";
    
    printf("Intenta adivinar mi contraseña\n");
    char entradaUsuario[100];
    scanf("%s", entradaUsuario);  // pillamos la entrada del usuario
    
    if (strcmp(contraseña, entradaUsuario) == 0) { // comparamos con la contrasña
        printf("¿Eres adivino?");
    } else {
        printf("¡Has fallado!");
    }

    return 0;
}
