#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
  int data;
  struct Node* next;
} node;

node* head = NULL;
void insertNode(int data) {
  if (head == NULL) {
    head = (node*) malloc(sizeof(node));

    head->data = data;
  } else {
    node *temp = (node*) malloc(sizeof(node));
    temp->data = data;
    node *pointer = head;
    while(pointer-> next != NULL) {
      pointer = pointer->next;
    }
    pointer->next = temp;
  }
}

int countNode(node* head) {
  int count = 0;
  while(head != NULL) {
    count++;
    head = head->next;
  }
  return count;
}

void printList(node* head) {
  while(head->next != NULL) {
    printf("%d -> ", head->data);
    head = head->next;
  }
  printf("%d ", head->data);
}

int main() { 
  insertNode(1);
  insertNode(2);
  insertNode(3);
  insertNode(4);
  insertNode(5);

  printf("Number of nodes: %d ", countNode(head));
  printList(head);
}
