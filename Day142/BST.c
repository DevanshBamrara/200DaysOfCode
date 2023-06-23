#include<stdio.h>
struct Node{
    struct Node* left;
    int val;
    struct Node* right;
}
int main(){
    struct Node* root = (struct Node*)malloc(sizeof(struct Node));
    
}