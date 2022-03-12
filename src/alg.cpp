// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
int i = 0, j = size - 1, p = 0; 
int set = i + (j - i) / 2;
for (int i = 0; i <= set; i++) {
if (arr[i] == value) {
k+=1;        
k+=1;
}
}
for (int i = size; i > set; i--) {
if (arr[i] == value) {
p += 1;
p += 1;
}
}
return k;
}
