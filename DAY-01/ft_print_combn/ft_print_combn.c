/*
 * Écrire une fonction qui affiche toutes les différentes combinaisons de n chiffres dans
 * l’ordre croissant.
 * • n sera tel que : 0 < n < 10.
 * • Si n = 2, cela donne quelque chose comme ça :
 * $>./a.out | cat -e
 * 01, 02, 03, ..., 09, 12, ..., 79, 89$>
 *
 */

#include <stdio.h>

void ft_print_combn(int n)
{


  switch(n)
  {
    case 1:
      for(int a = 0; a<= 9; a++){
        putchar(a + '0');
      }
    break;
   case 2:
      for (int a = 0; a <= 9; a++){
        for (int b = a +1; b <= 9; b++){
          putchar(a + '0');
          putchar(b + '0');
          putchar(',');
         }
       }
    break;
  case 3:
    for(int a = 0; a <= 9; a++){
      for (int b = a + 1; b <= 9;b++){
        for(int c = b + 1; c <= 9;c++){
          putchar(a + '0');
          putchar(b + '0');
          putchar(c + '0');
          putchar(',');
         }
       }
     }
    break;
  case 4:
    for(int a = 0; a <= 9; a++){
      for (int b = a + 1; b <= 9;b++){
        for(int c = b + 1; c <= 9;c++){
          for(int d = c +1; d <= 9;d++){
           putchar(a + '0');
           putchar(b + '0');
           putchar(c + '0');
           putchar(d + '0');
           putchar(',');
          }
        }
      }
    }
    break;
  case 5:
    for(int a = 0; a <= 9; a++){
      for (int b = a + 1; b <= 9;b++){
        for(int c = b + 1; c <= 9;c++){
          for(int d = c +1; d <= 9;d++){
            for(int e = d +1; e <= 9;e++){
              putchar(a + '0');
              putchar(b + '0');
              putchar(c + '0');
              putchar(d + '0');
              putchar(e + '0');
              putchar(',');           
             } 
           }
         }
       }
     }
    break;
  case 6:
    for(int a = 0; a <= 9; a++){
      for (int b = a + 1; b <= 9;b++){
        for(int c = b + 1; c <= 9;c++){
          for(int d = c + 1; d <= 9;d++){
            for(int e = d + 1; e <= 9;e++){
              for(int f = e + 1; f <= 9;f++){
               putchar(a + '0');
               putchar(b + '0');
               putchar(c + '0');
               putchar(d + '0');
               putchar(e + '0');
               putchar(f + '0');
               putchar(',');                    }
              } 
            }
          }
        }
      }
    break;
  case 7:
    for(int a = 0 ; a <= 9; a++){
      for (int b = a + 1; b <= 9;b++){
        for(int c = b + 1; c <= 9;c++){
          for(int d = c + 1; d <= 9;d++){
            for(int e = d + 1; e <= 9;e++){
              for(int f = e + 1; f <= 9;f++){
                for(int g = f +1; g <= 9;g++){
                 putchar(a + '0');
                 putchar(b + '0');
                 putchar(c + '0');
                 putchar(d + '0');
                 putchar(e + '0');
                 putchar(f + '0');
                 putchar(g + '0');
                 putchar(',');                     }
                }
              } 
            }
          }
        }
      }
    break;
  case 8:
    for(int a = 0 ; a <= 9; a++){
      for (int b = a + 1; b <= 9;b++){
        for(int c = b + 1; c <= 9;c++){
          for(int d = c + 1; d <= 9;d++){
            for(int e = d + 1; e <= 9;e++){
              for(int f = e + 1; f <= 9;f++){
                for(int g = f + 1; g <= 9;g++){
                  for(int h = g + 1; h <= 9;h++){
                   putchar(a + '0');
                   putchar(b + '0');
                   putchar(c + '0');
                   putchar(d + '0');
                   putchar(e + '0');
                   putchar(f + '0');
                   putchar(g + '0');
                   putchar(h + '0');
                   putchar(',');                        }
                  }
                }
              } 
            }
          }
        }
      }
    break;
  case 9:
    for(int a = 0 ; a <= 9; a++){
      for (int b = a + 1; b <= 9;b++){
        for(int c = b + 1; c <= 9;c++){
          for(int d = c + 1; d <= 9;d++){
            for(int e = d + 1; e <= 9;e++){
              for(int f = e + 1; f <= 9;f++){
                for(int g = f + 1; g <= 9;g++){
                  for(int h = g + 1; h <= 9;h++){
                    for(int i = h + 1; i <= 9;i++){
                     putchar(a + '0');
                     putchar(b + '0');
                     putchar(c + '0');
                     putchar(d + '0');
                     putchar(e + '0');
                     putchar(f + '0');
                     putchar(g + '0');
                     putchar(h + '0');
                     putchar(i + '0');
                     putchar(',');      
                      }
                    }
                  }
                }
              } 
            }
          }
        }
      }
    break;
  };


   
}
