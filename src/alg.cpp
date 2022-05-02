// Copyright 2021 NNTU-CS
int countPairs1(int *arr, int len, int value) {
  int k = 0;
    for (int i = 0; i <= len - 1; i++) {
        for (int j = i + 1; j <= len - 1; j++) {
            if (arr[i] + arr[j] == value) k = k + 1;
        }
    }
    return k;
}
int countPairs2(int *arr, int len, int value) {
    int k = 0;
    int g = len - 1;
    for (int n = len - 1; arr[n] > value; n--) {
        g = g - 1;
    }
    for (int i = 0; i <= g; i++) {
        for (int j = i + 1; j <= g; j++) {
            if (arr[i] + arr[j] == value) k = k + 1;
        }
    }
    return k;
}
int countPairs3(int *arr, int len, int value) {
    int n = (len / 2) - 1;
    int g = (len / 2) - 1;
    int k = 0;
    while (arr[n] <= value) {
        g = g + 1;
        n = n + 1;
    }
    while (arr[n] > value) {
        g = g - 1;
        n = n - 1;
    }
    for (int i = 0; i <= g; i++) {
        for (int j = i + 1; j <= g; j++) {
            if (arr[i] + arr[j] == value) k = k + 1;
        }
    }
    return k;
}
