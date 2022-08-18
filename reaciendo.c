// #include <stdio.h>
// #include <stdlib.h>
//
// int main(int argc, char const *argv[]) {
//   int n = atoi(argv[1]);
//   int i = 0;
//   int sum = 0;
//   int a;
//   while (i < n) {
//     scanf("%d", &a);
//     sum += a;
//     i++;
//   }
//   printf("%d\n", sum);
//   return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
//
// int main(int argc, char const *argv[]) {
//   int n = atoi(argv[1]);
//   int i = 0;
//   int a;
//   int sum = 0;
//   while (i < n) {
//     scanf("%d", &a);
//     sum += a;
//     if (a == 0) {
//       break;
//     }
//     i++;
//   }
//   printf("%d\n", sum);
//   return 0;
// }

// #include <stdio.h>
//
// int main(void) {
//   int n;
//   int i = 0;
//   int sum = 0;
//   int a;
//   scanf("%d", &n);
//   while (i < n) {
//     scanf("%d", &a);
//     sum += a;
//     i++;
//   }
//   printf("%d\n", sum);
//   return 0;
// }

// #include <stdio.h>
//
// int main(void) {
//   int a;
//   int sum = 0;
//   while (scanf("%d", &a) != EOF) {
//     sum += a;
//   }
//   printf("%d\n", sum);
//   return 0;
// }

// #include <stdio.h>
//
// int main(void) {
//   int c;
//   int char_count = 0;
//   while (c = getchar() != EOF) {
//     char_count++;
//   }
//   printf("Chars: %d\n", char_count);
//   return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
//
// int main(int argc, char const *argv[]) {
//   int a = atoi(argv[1]);
//   int b = atoi(argv[2]);
//   int n;
//   if (a > b) {
//     printf("Error\n");
//     return 0;
//   }
//   while (a < b) {
//     scanf("%d", &n);
//     if (n >= a && n <= b) {
//       printf("%d ", n);
//     }
//   }
//   printf("\n");
//   return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
//
// int main(int argc, char const *argv[]) {
//   srand(time(NULL));
//   int n = atoi(argv[1]);
//   int a = atoi(argv[2]);
//   int b = atoi(argv[3]);
//   int i = 0;
//   int r;
//   while (i < n) {
//     r = a + (rand() % b);
//     printf("%d ", r);
//     i++;
//   }
//   printf("\n");
//   return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
//
// int main(int argc, char const *argv[]) {
//   srand(time(NULL));
//   int correcta = (rand() % 1000) + 1;
//   int res;
//   for (int i = 0; i < 5; i++) {
//     printf("Adivina el numero entre 1 y 1000:\n");
//     scanf("%d", &res);
//     if (res == correcta) {
//       printf("Ganaste!\n");
//       return 0;
//     } else if (res < correcta) {
//       printf("Mas alto!\n");
//     } else if (res > correcta) {
//       printf("Mas bajo!\n");
//     }
//   }
//   printf("Perdiste...\n");
//   return 0;
// }

// #include <stdio.h>
//
// int main(void) {
//   int c;
//   int line_count = 0;
//   while ((c = getchar()) != EOF) {
//     if (c == '\n') {
//       line_count++;
//     }
//   }
//   printf("Lineas: %d\n", line_count);
//   return 0;
// }

// #include <stdio.h>
//
// int main(void) {
//   int c;
//   int word_count = 0;
//   int in_word = 0;
//   while ((c = getchar()) != EOF) {
//     if (c != '\n' && c != '\t' && c != ' ') {
//       in_word = 1;
//     } else {
//        if (in_word != 0) {
//          word_count++;
//        }
//        in_word = 0;
//       }
//   }
//   printf("Palabras: %d\n", word_count);
//   return 0;
// }

// #include <stdio.h>
//
// int main(void) {
//   int opcion;
//   while (1) {
//     printf("Hola, elige una opcion: \n");
//     printf("(1) Opcion 1\n");
//     printf("(2) Opcion 2\n");
//     printf("(3) Opcion 3\n");
//     printf("(4) Opcion 4\n");
//     printf("(5) Opcion 5\n");
//     printf("(6) Salir\n");
//     scanf("%d", &opcion);
//     switch (opcion) {
//       case 1:
//         printf("Elegiste 1\n");
//         break;
//       case 2:
//         printf("Elegiste 2\n");
//         break;
//       case 3:
//         printf("Elegiste 3\n");
//         break;
//       case 4:
//         printf("Elegiste 4\n");
//         break;
//       case 5:
//         printf("Elegiste 5\n");
//         break;
//       case 6:
//         return 0;
//       default:
//        printf("No existe esa opcion\n");
//        break;
//     }
//   }
//   return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
//
// int main(int argc, char *argv[]) {
//   int nota_1;
//   int nota_2;
//
//   char *alumno_A = argv[1];
//   double prom = (nota_1 + nota_2) / 2;
//
//   printf("Introducir las notas del alumno %s:\n", alumno_A);
//   scanf("%d %d", &nota_1, &nota_2);
//
//   printf("Nombre      Nota_1      Nota_2      Promedio\n");
//   printf("%s           %d          %d          %.1f   \n", alumno_A, nota_1, nota_2, prom);
//
//   return 0;
// }

// #include <stdio.h>
//
// int main(void) {
//   int elegir;
//   char nota[1000] = "";
//   FILE *fp;
//   int c;
//   printf("Hola, soy el Bloq de Notas, elige una opcion:\n");
//   printf("(1) Ver Notas.\n");
//   printf("(2) Agregar Notas.\n");
//   printf("(3) Borrar todas las Notas.\n");
//   printf("(4) Salir.\n");
//   while (1) {
//     scanf("%d", &elegir);
//     switch (elegir) {
//       case 1:
//       printf("-----NOTAS-----\n");
//       fp = fopen("Notas.txt", "r");
//       while ((c = fgetc(fp)) != EOF) {
//         printf("%c ", c);
//       }
//       printf("-----FIN-----\n");
//       fclose(fp);
//       break;
//       case 2:
//       printf("Agrega las notas:\n");
//       fp = fopen("Notas.txt", "a");
//       scanf("%s", stdin);
//       fgets(nota, 1000, stdin);
//       fprintf(fp, "%s", nota);
//       break;
//       case 3:
//       fp = fopen("Notas.txt", "w");
//       fclose(fp);
//       break;
//       case 4:
//       return 0;
//       default:
//       printf("No existe esa opcion\n");
//     }
//   }
//   return 0;
// }
