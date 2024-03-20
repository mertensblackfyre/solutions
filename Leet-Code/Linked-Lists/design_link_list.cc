#include <iostream>
struct Node {
    int val;
    Node* next;
    Node() : val(0), next(nullptr) {}
    Node(int x) : val(x), next(nullptr) {}
    Node(int x, Node* next) : val(x), next(next) {}
};
class MyLinkedList {
public:
    Node* head;
    Node* tail;
    int size = 0;

    MyLinkedList(){
        head = nullptr;
        tail = head;
    };

    int get(int index) {
        int idx = 0;

        if (head == nullptr)
            return -1;

        Node* tmp = head;

        while (idx != index &&tmp != nullptr) {
            tmp = tmp->next;
            idx++;
        }

        if (tmp == nullptr) 
          return -1;

        return tmp->val;
    }

    void addAtHead(int val) {
        Node* node = new Node(val);
        if (head == nullptr) {
            head = node;
            tail = node;
            size++;
            return;
        }
        node->next = head;
        head = node;
        size++;
        return;
    }

    void addAtTail(int val) {

        Node* node = new Node(val);
        Node *tmp = head;

        if(head == nullptr){
          head = node;
          tail = head;
          size++;
          return;
        };

        while
          size++;
        return;
    }

    void addAtIndex(int index, int val) {

        Node* node = new Node(val);
        Node* tmp = head;
        int idx = 0;

        if (index == 0) {
            addAtHead(val);
            return;
        }

        if (index == size) {
            addAtTail(val);
            return;
        }

        while (idx + 1 != index && tmp != nullptr) {
            tmp = tmp->next;
            idx++;
        }

        node->next = tmp->next;
        tmp->next = node;
        size++;
        return;
    }

    void deleteAtIndex(int index) {

        Node* tmp = head;
        int idx = 0;

        if (index == 0) {
            head = head->next;
            return;
        }

        while (idx + 1 != index && tmp != nullptr) {
            tmp = tmp->next;
            idx++;
        }

        tmp->next = tmp->next->next;
        if (index == size) {
            tail = tmp->next->next;
        }
        size--;
        return;
    }

  void print() {
    Node *tmp = head;

    std::cout << "TAIL: " << tail->val << "\n";
    while (tmp != nullptr) {
      std::cout << "->" << tmp->val;
      tmp = tmp->next;
    }

    std::cout << std::endl;
  };
};

int main() {

  MyLinkedList *list = new MyLinkedList();
  list->addAtHead(5);
  list->addAtTail(3);
  list->addAtIndex(1, 2);
  std::cout << "GET: " << list->get(1);

/*
  myLinkedList.addAtHead(1);
  myLinkedList.addAtTail(3);
  myLinkedList.addAtIndex(1, 2);    // linked list becomes 1->2->3
  myLinkedList.get(1);              // return 2
  myLinkedList.deleteAtIndex(1);    // now the linked list is 1->3
  myLinkedList.get(1);              // return 3

*/
  //std::cout << "GET :" <<list->get(2);
  list->print();
};
