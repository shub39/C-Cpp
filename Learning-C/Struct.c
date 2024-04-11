#include <stdio.h>
#include <string.h>

typedef struct book{
  int price;
  int pages;
  char name[50];
}book;

void printBook(book *s) {
  printf("%s\n", s->name);
  printf("%d\n", s->pages);
  printf("%d\n", s->price);
}

int main(){
  int n;  
  book atomic_habits;
  strcpy(atomic_habits.name, "Atomic Habits");
  atomic_habits.price = 200;
  atomic_habits.pages = 420;
  printBook(&atomic_habits);
  return 0;
}
