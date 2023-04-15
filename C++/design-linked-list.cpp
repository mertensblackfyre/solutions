#include <iostream>

struct Node {
  Node(int v) : val{v}, next{nullptr} {}
  int val;
  Node *next;
};

class MyLinkedList {
public:
  int size;
  Node *head;
  MyLinkedList() : head(nullptr), size(0) {}
  int get(int index) {
    Node *tmp = head;
    int i = 0;
    int value = -1;
    while (i != index) {
      if (tmp->next == NULL)
        return -1;
      value = tmp->val;
      tmp = tmp->next;
      i++;
    }
    return value;
  }

  void addAtHead(int val) {
    Node *tmp = head;
    Node *new_node = new Node(val);
    new_node->next = tmp;
    head = new_node;
    size++;
  }

  void addAtTail(int val) {
    Node *tmp = head;
    Node *new_node = new Node(val);

    while (tmp->next != NULL)
      tmp = tmp->next;

    tmp->next = new_node;
    size++;
  }

  void addAtIndex(int index, int val) {
    Node *prev = head;
    Node *next;

    Node *new_node = new Node(val);

    for (int i = 0; i < index; i++)
      prev = prev->next;

    new_node->next = prev->next;
    prev->next = new_node;
  }

  void deleteAtIndex(int index) {
    int i = 1;
    Node *curr = head;
    Node *next;
    Node *prev;

    while (i != index) {
      prev = curr->next;
      curr = curr->next->next;
      i++;
    };
    if (i == index) {
      next = curr->next;
      prev->next = next;
      curr = NULL;
    }
    size--;
  }

  void print() {

    Node *tmp = head;
    while (tmp->next != nullptr) {
      std::cout << tmp->val << "->";
      tmp = tmp->next;
    }

    std::cout << "\n";
  }
};

int main(int argc, char *argv[]) {

  MyLinkedList head;
  head.addAtHead(1);
head.addAtTail(3);
head.addAtHead(0);
head.addAtIndex(1,2);
head.deleteAtIndex(1);
  head.print();

  return 0;
}
