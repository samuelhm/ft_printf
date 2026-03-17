# ft_printf

![Language](https://img.shields.io/badge/Language-C-blue)
![Norm](https://img.shields.io/badge/Norm-42%20School-green)
![Status](https://img.shields.io/badge/Status-Completed-brightgreen)

## Descripción

Reimplementación de la función `printf` de la biblioteca estándar de C. Este proyecto demuestra dominio de **argumentos variádicos**, **manejo de punteros** y **programación recursiva**, produciendo una biblioteca estática lista para integrar en otros proyectos.

## Características

- Soporte completo de especificadores de formato: `%c`, `%s`, `%d`, `%i`, `%u`, `%x`, `%X`, `%p`, `%%`
- Retorno del número de caracteres impresos (comportamiento idéntico a `printf` original)
- Manejo robusto de casos edge: strings NULL, INT_MIN, punteros NULL `(nil)`
- Biblioteca estática compilada con flags estrictos (`-Wall -Wextra -Werror`)
- Código modular y reutilizable

## Stack Tecnológico

| Categoría | Tecnología |
|-----------|------------|
| Lenguaje | C (C99) |
| Build System | Makefile |
| Output | Biblioteca estática (`libftprintf.a`) |

## Decisiones Técnicas

La arquitectura modular separa el parseo de la cadena de formato de la lógica de impresión, utilizando punteros a funciones implícitos y recursividad. El uso de `va_list` permite procesar un número variable de argumentos, mientras que las funciones auxiliares delegadas a archivos separados mejoran la mantenibilidad y reducen la complejidad ciclomática. Esta estructura facilita la extensión a nuevos especificadores sin modificar el flujo principal.

## Diagrama de Arquitectura

```mermaid
flowchart TD
    A[ft_printf] --> B{Detecta %?}
    B -->|No| C[write: imprimir carácter]
    B -->|Sí| D[printarg: dispatcher]
    D --> E[%c → ft_putchar]
    D --> F[%s → ft_putstr]
    D --> G[%d/%i → ft_putnbr]
    D --> H[%u → ft_putunbr]
    D --> I[%x/%X → ft_puthxnbr]
    D --> J[%p → ft_putptr]
    C --> K[Retorna contador]
    E --> K
    F --> K
    G --> K
    H --> K
    I --> K
    J --> K
```

## Instalación

```bash
# Clonar el repositorio
git clone https://github.com/samuelhm/ft_printf.git
cd ft_printf

# Compilar la biblioteca
make

# Limpiar archivos objeto
make clean

# Limpiar todo (incluye biblioteca)
make fclean

# Recompilar desde cero
make re
```

### Uso en tu proyecto

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hola %s! Número: %d\n", "mundo", 42);
    return (0);
}
```

```bash
# Compilar tu proyecto con la biblioteca
cc tu_programa.c -L. -lftprintf -o tu_programa
```

## Contacto

[![GitHub](https://img.shields.io/badge/GitHub-samuelhm-181717?logo=github)](https://github.com/samuelhm/)
[![LinkedIn](https://img.shields.io/badge/LinkedIn-shurtado--m-0A66C2?logo=linkedin)](https://www.linkedin.com/in/shurtado-m/)