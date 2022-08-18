//scanf
// #include <stdio.h>
//
// int main(void) {
//   int num;
//   for (int i = 0; i < 1000; i++) {
//     scanf("%d", &num);
//     printf("%d\n", num);
//   }
//   return 0;
// }

// #include <stdio.h>
//
// int main(int argc, char const *argv[]) {
//   int i = 0;
//   int sum = 0;
//   int input;
//   // int input_1;
//   // int input_2;
//   // int input_3;
//   while (i < 10) {
//     scanf("%d", &input);
//     sum += input;
//     i++;
//   }
//   printf("%d\n", sum);
//   return 0;
// }

// archivos
// #include <stdio.h>
// #define MAXLINE 100
//
// int main(int argc, char const *argv[]) {
//   char line[MAXLINE];
//   FILE *fp; //puntero FILE/Archivo
//   fp = fopen("alumnos.txt", "r");
//   while (fgets(line, MAXLINE, fp) != NULL) {
//     printf("%s\n", line[i]);
//   }
//   fclose(fp);
//   return 0;
// }

// #include <stdio.h>
// #define MAXLINE 100
//
// int main(int argc, char const *argv[]) {
//   FILE *fp; //puntero FILE/Archivo
//   char *file_name = argv[1];
//   char line[MAXLINE];
//   fp = fopen("alumnos.txt", "r");
//   while (fgets(line, MAXLINE, fp) != NULL) {
//     printf("%s", line);
//   }
//   fclose(fp);
//   return 0;
// }

// #include <stdio.h>
// #define MAXLINE 100
//
// int main(int argc, char const *argv[]) {
//   // FILE *fp; //puntero FILE/Archivo
//   // char *file_name = argv[1];
//   int d, m, y;
//   char line[MAXLINE];
//   // // fp = fopen("alumnos.txt", "r");
//   while (fgets(line, MAXLINE, stdin) != NULL) {
//     // printf("%s", line);
//     sscanf(line, "%d/%d/%d", &d, &m, &y);
//   }
//   // fgets(line, MAXLINE, stdin);
//   // fclose(fp);
//   printf("Hoy es %d del %d del ano %d\n", d, m, y);
//   return 0;
// }

//caracter por caracter
// int c;
// while ((c = getchar()) != EOF) {
//   putchar
// }
// return 0;

// cifrados.c
// #include <stdio.h>
// #include <stdlib.h>
//
// int main(int argc, char const *argv[]) {
//   char *buffer[] = "";
//   char line[250];
//   char *filename = argv[1];
//   int shift = atoi(argv[2]);
//   FILE *fp;
//   FILE *temp_file;
//   fp = fopen(filename, "r");
//   while (fgets(line, 250, fp) != NULL) {
//     // strcat(line, '\n');
//     // strcpy(buffer,line);
//     fprintf(temp_file, "%s", line);
//     // printf("%s\n", line);
//   }
//   fclose(fp);
//   fclose(temp_file);
//   temp_file = fopen("temp.txt", "r");
//   // printf("%s", buffer);
//   fp = fopen(filename, 'w');
//   while (fgets(line, 250, temp_file) != NULL) {
//     //ciframos
//     for (int i = 0; i < 250; i++) {
//
//       // if (line[i] != ' ' && line[i] != '\n') {
//       //   line[i] = (((line[i] - 'a') + shift) % 26) + 'a';
//       //
//       // }
//     }
//     fprintf(temp_file, "%s", line);
//     // printf("%s\n", line);
//   }
//   return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #define MAXLINE 200
//
// int main(int argc, char const *argv[]) {
//   char *hash = argv[1];
//   char *wordlist = argv[2];
//   char buffer[MAXLINE];
//   FILE *temp;
//   FILE *fp;
//   fp = fopen(wordlist, "r");
//   while (fgets(buffer, MAXLINE, fp) != NULL) {
//     temp = fopen("temp", "w");
//     // fprintf(temp, "%s", buffer);
//     for (int i = 0; i < 200; i++) {
//       if (buffer[i] == '\n') buffer[i] = 0;
//     char commad[100] = "md5sum <<< \""; //armando el comando md5sum <<< ???
//     strcat(command, buffer);
//     strcat(command, "\"");
//     strcat(command, " > temp");
//     system(command);
//     fclose(temp);
//     //tenemos el hash en temp y veamos si coincide
//     char hash_to_compare[100];
//     temp = fopen("temp", "r");
//     fgets(line_read, MAXLINE, temp);
//     strncopy(hash_to_compare, line_read, 32)
//     hash_to_compare[32] = 0;
//     if (strcmp(hash, hash_to_compare) == 0) {
//       printf("Contraseña encontrada! Es: %s\n", line_read);
//     } else {
//       printf("Contraseña no encontrada...\n");
//     }
//     fclose(temp);
//     }
//     fclose(fp);
//   }
//   return 0;
// }

// #include <stdio.h>
//
// int main(void) {
//   int elegir;
//   int c;
//   FILE *fp;
//   char nota[100] = "";
//   printf("Hola, soy el bloq de notas\n");
//   printf("(1)Ver Notas\n");
//   printf("(2)Agregar Notas\n");
//   printf("(3)Borrar todas las notas\n");
//   printf("(4)Salir de la app\n");
//   printf("Elegi una opcion: ");
//   scanf("%s\n", &elegir);
//   switch (elegir) {
//     case 1:
//     fp = fopen("notitas.txt", "r");
//     printf("----- NOTAS -----\n");
//     while ((c = fgetc(fp)) != EOF) {
//       printf("%c", c);
//     }
//     printf("----- FIN -----\n");
//     fclose(fp);
//     break;
//     case 2:
//     fp = fopen("notitas.txt", "a");
//     printf("Anota las nuevas Notas: \n");
//     // char nota[100];
//     // int i = 0;
//     // c = getchar();
//     // while ((c = getchar()) != '\n') {
//     //   nota[i++] = c;
//     //   nota[i++] = '\n';
//     //   nota[i] = 0;
//     // }
//     // int caracter = getchar();
//     fgets(nota, 100, stdin);
//     fprintf(fp, "%s\n", nota);
//     fclose(fp);
//     break;
//     case 3:
//     fp = fopen("notitas.txt", "w");
//     fclose(fp);
//     break;
//     case 4:
//     return 0;
//     default:
//     printf("Opcion Desconocida\n");
//   }
//   return 0;
// }

// #include <stdio.h>
// //Escribir un programa en C que cuente la cantidad de lineas del programa.
//
// int main(int argc, char *argv[]) {
//   char *filename = argv[1];
//   FILE *fp;
//   fp = fopen(filename, "r");
//   int c;
//   int char_count = 0;
//   int line_count = 0;
//   int word_count = 0;
//   int in_word = 0;
//   // char descartar[100];
//   while ((c = fgetc(fp)) != EOF) {
//     if (c != '\n' && c != '\t' && c != ' ') {
//       in_word = 1;
//     } else {
//       if (in_word != 0) {
//         word_count++;
//       }
//       in_word = 0;
//     }
//     char_count++;
//     if (c == '\n') {
//       line_count++;
//     }
//   }
//   fclose(fp);
//   printf("Cantidad de chars: %d\n", char_count);
//   printf("Cantidad de líneas: %d\n", line_count);
//   printf("Cantidad de palabras: %d\n", word_count);
//   return 0;
// }

// #include <stdio.h>
// #define MAXLINE 100
//
// int main(void) {
//   char buffer[MAXLINE];
//   int http_codes[5] = { 200, 201, 307, 404, 500};
//   char *http_messages[5] = {
//     "OK",
//     "Created",
//     "Temporary Redirect",
//     "Not Found",
//     "Internal Server Error"
//   };
//   while (fgets(buffer, MAXLINE, stdin) != NULL) {
//     if (buffer[0] == '<') {
//       //printf("%s", buffer);
//       char c;
//       char protocol[10];
//       int code;
//       char message[50];
//       sscanf(buffer, "< %s %d %s", &c, protocol, &code, message);
//       int i = 0;
//       while (i < 5) {
//         if (code == http_codes[i]) {
//           break;
//         }
//         i++;
//       }
//       printf("%d %s\n", code, http_messages[i]);
//     }
//   }
//   return 0;
// }

// // numeros.c
// #include <stdio.h>
// #include <stdlib.h>
//
// int main(int argc, char *argv[]) {
//   int a = atoi(argv[1]);
//   int b = atoi(argv[2]);
//   for (int i = a; i <= b; i++) {
//     printf("%d ", i);
//   }
//   printf("\n");
//   return 0;
// }
//
// // duplicar.c
// #include <stdio.h>
// #include <stdlib.h>
//
// int main(void) {
//   int t;
//   while (scanf("%d", &t) != EOF) {
//     printf("%d ", t*2);
//   }
//   printf("\n");
//   return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// #define LINESIZE 1000
//
// int main(int argc, char *argv[]) {
//   char *filename = argv[1];
//   int shift_amount = atoi(argv[2]);
//   char line[LINESIZE];
//   FILE *fp;
//   fp = fopen(filename, "r");
//   while (fgets(line, LINESIZE, fp) != NULL) {
//     int i = 0;
//     while (line[i] != '\n') {
//       if (line[i] >= 'a' && line[i] <= 'z' ||
//       line[i] >= 'A' && line[i] <= 'Z') {
//         line[i] = ((line[i] - 'a') + shift_amount % 26) + 'a';
//       }
//       i++;
//     }
//     printf("%s", line);
//   }
//   return 0;
// }

// fuerzabruta.c
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #define HASH 23cdc18507b52418db7740cbb5543e54
//
// int main(int argc, char const *argv[]) {
//   char input[100] = "";
//   char line[100] = "";
//   FILE *fp;
//   system(clear);
//   fp = fopen("wordlist.txt", "r");
//   while (fgets(line, 1000, fp) != NULL) {
//     char command[100] = "";
//     strcat(command, "md5sum <<< ");
//     int i = 0;
//     while (line[i] != 0) {
//       if (line[i] == '\n') {
//         line[i] = 0;
//         i++;
//       }
//     }
//     strcat(command, line);
//     strcat(command, " > temp.txt");
//     system(command);
//   }
//   return 0;
// }
// char *s = "abc1234";
// char *t = "abc1234";
// if (!strcmp(s,t)) {
  //   printf("Son iguales\n");
  // }
  // printf("Que hasheamos hoy?\n");
  // scanf("%s", input);

  // #include <stdio.h>
  // #include <stdlib.h>
  // #include <string.h>
  // #define LINESIZE 400
  //
  // int main(int argc, char const *argv[]) {
  //   FILE *fp;
  //   char line[LINESIZE];
  //   fp = fopen("nombres.csv", "r");
  //   printf("%-20s\t&-10s\tAño\n", "Nombre", "Cantidad");
  //   printf("------------------------------------------------------\n");
  //   int read_n_lines = atoi(argv[1]);
  //   char *nombre = argv[2];
  //   int search_year[] = atoi(argv[3]);
  //   int k = 0;
  //   while (fgets(line, LINESIZE, fp) != NULL) { //fgets lee los elementos en parentesis
  //     // if (k == 0) { k++; continue; };
  //     // if (k++ == 10) break;
  //     if (k++ == read_n_lines && k != 0) {
  //       break;
  //     }
  //     k++;
  //     char name[60] = "";
  //     char count_char[10] = "";
  //     char year_char[10] = "";
  //     int i = 0;
  //     int j = 0;
  //     while (line[i] != ',' && line[i] != '\n') {
  //       name[i] = line[i];
  //       i++;
  //     }
  //     name[i++] = 0;//terminar el string
  //     while (line[i] != ',') {
  //       count_char[j] = line[i];
  //       i++;
  //       j++;
  //     }
  //     count_char[j] = 0; //terminar el string
  //     j = 0;
  //     i++;
  //     while (line[i] != '\n') {
  //       year_char[j] = line[i];
  //       i++;
  //       j++;
  //     }
  //     year_char[j] = 0; //terminar el string
  //     int count = atoi(count_char);
  //     int count = atoi(year_char);
  //     if (search_year == year && !strcmp(name, nombre))
  //       printf("%-20s\t%-10d\t%d\n", name, count, year);
  //   }
  //   fclose(fp);
  //   return 0;
  // }
