#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"
#include "matrix.h"

int main() {

  screen s;
  struct matrix *m1;
  struct matrix *m2;
  struct matrix *m3;

  m1 = new_matrix(4, 4);
  m2 = new_matrix(4, 4);
  m3 = new_matrix(4, 4);

  //add_edge
  printf("Testing add_edge. Adding (1, 2, 3), (4, 5, 6) \nm2 =\n");
  add_edge(m2,1,2,3,4,5,6);
  print_matrix(m2);

  //identity
  printf("Testing identity. \nm1 =\n");
  ident(m1);
  print_matrix(m1);

  //multiplication
  printf("Testing Matrix mult. \nm1 * m2 =\n");
  matrix_mult(m1,m2);
  print_matrix(m2);

  free_matrix( m1 );

  printf("m3 =\n");
  add_edge(m3,1,2,3,4,5,6);
  add_edge(m3,7,8,9,10,11,12);
  print_matrix(m3);

  printf("m3 * m2 =\n");
  matrix_mult(m3,m2);
  print_matrix(m2);



  free_matrix( m3 );
  free_matrix( m2 );
}
