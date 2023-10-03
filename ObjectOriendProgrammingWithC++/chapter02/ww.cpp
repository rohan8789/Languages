#include<bits/stdc++.h>
using namespace std;

vold updateArray(char *arr, int n){

    int size;

    for(size =0; arr[size]!='\0'; size++);
    reverseArray( arr, 0, size-1);
    reverseArray(arr, 0, n-1);
    reverseArray(arr, n, size - 1); 



int main()
    char arr[] = "fhfrj*votbn";
    int n;

    for(n-0; arr[n]!='\0'; n++);

    struct TNode *root = arrayToTree(arr, 0, n-1); ;
    preOrder(root);
    printf("_");

    updateArray(arr, 4);
    root=arrayToTree(arr, 0, n-2); 
    preOrder(root);
    printf("_");

    updateArray(arr, 2);
    root =arrayToTree(arr, 0, n-1);
    preOrder(root); 
    printf("_");

    updateArray(arr, 1);
    root =arrayToTree(arr, 0, n-3);
    preOrder(root);

    return 0;
}