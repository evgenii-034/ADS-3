// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
return 0; // если ничего не найдено
int x = 0;
for (int i = 0; i < size; i++) {
if (arr[i] == value) {
x += 1;
}
}
return x;
}
