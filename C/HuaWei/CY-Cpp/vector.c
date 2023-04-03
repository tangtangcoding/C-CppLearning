#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFFER_SIZE 20
int main() {
    char **str_array = NULL; // 声明字符串数组指针
    int capacity = 0; // 初始化容量
    int size = 0; // 初始化数组元素个数
    // 添加新字符串
    for (int i = 0; i < 10; i++) {
        char buffer[BUFFER_SIZE];
        snprintf(buffer, BUFFER_SIZE, "String %d", i);
        if (size == capacity) {
            // 如果数组已经满了，就扩容
            capacity = (capacity == 0) ? 1 : capacity * 2;
            str_array = (char **)realloc(str_array, capacity * sizeof(char *));
        }
        // 分配内存空间，存储新字符串
        str_array[size] = (char *)malloc(BUFFER_SIZE * sizeof(char));
        strcpy(str_array[size], buffer);
        size++;
    }
    // 输出字符串数组
    for (int i = 0; i < size; i++) {
        printf("%s\n", str_array[i]);
    }
    // 释放内存
    for (int i = 0; i < size; i++) {
        free(str_array[i]);
    }
    free(str_array);
    return 0;
}