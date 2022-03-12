// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
return 0; // если ничего не найдено
int k = 0;
for (int i = 0; i < size; i++) {
if (arr[i] == value) {
k += 1;
}
}
return k;
}
