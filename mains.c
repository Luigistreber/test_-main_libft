#include <stdio.h>
#include "libft.h" // Asegúrate de incluir tu cabecera

int main() {
    const char *str = "   -42";
    int result = ft_atoi(str);
    printf("ft_atoi: %d\n", result);
    return 0;
}

/*
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int main() {
    int *arr = (int *)ft_calloc(5, sizeof(int));
    for (int i = 0; i < 5; i++) {
        printf("ft_calloc[%d]: %d\n", i, arr[i]); // Debería imprimir 0
    }
    free(arr);
    return 0;
}
*/
/*
#include <stdio.h>
#include "libft.h"

int main() {
    int num = -1234;
    char *str = ft_itoa(num);
    printf("ft_itoa: %s\n", str);
    free(str);
    return 0;
}*/

/*
#include <stdio.h>
#include "libft.h"

int main() {
    t_list *lst = ft_lstnew("First");
    ft_lstadd_back(&lst, ft_lstnew("Second"));
    printf("ft_lstadd_back: %s\n", (char *)lst->next->content); // Debería imprimir "Second"
    ft_lstclear(&lst, free);
    return 0;
}
*/

/*
#include <stdio.h>
#include "libft.h"

int main() {
    t_list *new_node = ft_lstnew("New node");
    printf("ft_lstnew: %s\n", (char *)new_node->content); // Debería imprimir "New node"
    free(new_node->content);
    free(new_node);
    return 0;
}*/

/*
#include <stdio.h>
#include "libft.h"

int main() {
    char str[] = "Hello, World!";
    ft_memmove(str + 7, str, 5);
    printf("ft_memmove: %s\n", str); // Debería imprimir "Hello, Hello!"
    return 0;
}
*/

/*
#include <stdio.h>
#include "libft.h"

int main() {
    char *src = "Hello, World!";
    char *dup = ft_strdup(src);
    printf("ft_strdup: %s\n", dup); // Debería imprimir "Hello, World!"
    free(dup); // No olvides liberar la memoria
    return 0;
}
*/

/*
#include <stdio.h>
#include "libft.h"

int main() {
    const char *haystack = "Hello, World!";
    const char *needle = "World";
    char *result = ft_strstr(haystack, needle);
    printf("ft_strstr: %s\n", result ? result : "Not found"); // Debería imprimir "World!"
    return 0;
}*/

/*
#include <stdio.h>
#include "libft.h"

int main() {
    char str[] = "  Hello, World!  ";
    char *trimmed = ft_strtrim(str, " ");
    printf("ft_strtrim: '%s'\n", trimmed); // Debería imprimir "Hello, World!"
    free(trimmed); // No olvides liberar la memoria
    return 0;
}*/

/*
#include <stdio.h>
#include "libft.h"

int main() {
    char str1[] = "Hello, ";
    char str2[] = "World!";
    char *joined = ft_strjoin(str1, str2);
    printf("ft_strjoin: '%s'\n", joined); // Debería imprimir "Hello, World!"
    free(joined);
    return 0;
}*/

