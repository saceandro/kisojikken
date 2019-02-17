typedef struct _even_box {
  int number;
  odd_box *next;
} even_box;

typedef struct _odd_box {
  int number;
  even_box *next;
} odd_box;
