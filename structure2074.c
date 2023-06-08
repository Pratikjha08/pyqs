#include <stdio.h>

typedef struct student {
  char name[40];
  int roll;
  float percentage;
} s;

int main() {
  s s1[3];
  int i;
  for (i = 0; i < 3; i++) {
    printf("Enter detail of %d student \n", i + 1);
    printf("Enter name: ");
    scanf("%s", s1[i].name);
    printf("Enter roll: ");
    scanf("%d", &s1[i].roll);
    printf("Enter percentage: ");
    scanf("%f", &s1[i].percentage);
  }
  printf("name \t Roll \t Percentage\n");
  for (i = 0; i < 3; i++) {
    if (s1[i].percentage >= 60) {
      printf("%s \t %d \t %f\n", s1[i].name, s1[i].roll, s1[i].percentage);
    }
  }
  return 0;
}