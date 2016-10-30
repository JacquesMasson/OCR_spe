#ifndef _MATBINTREE_H_
#define _MATBINTREE_H_

# include <SDL/SDL.h>

# include "matrix.h"
# include "rectangle.h"

typedef struct _MatBinTree{
  UnsignedMatrix     *key;
  Rect               pos;
  struct _MatBinTree *left;
  struct _MatBinTree *right;
}MatBinTree;

MatBinTree* new_matbintree(UnsignedMatrix* mat);
void free_matbintree(MatBinTree* mbt);
void mbt_print(MatBinTree *mbt, size_t h);
void display_leaves(MatBinTree* mbt);
unsigned get_all_rect(MatBinTree* mbt, Unsignedmatrix *mat, unsigned h);
#endif
