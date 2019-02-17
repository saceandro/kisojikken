typedef struct _odd_box odd_box; 

typedef struct _even_box {
  int number;
  odd_box *next;
} even_box;

struct _odd_box {
  int number;
  even_box *next;
};

int main() {
  return 0;
}
