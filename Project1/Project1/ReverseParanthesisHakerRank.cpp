#include "forward.h"

class DoublyLinkedListNode{
public:
	int data;
	DoublyLinkedListNode *next;
	DoublyLinkedListNode *prev;

	DoublyLinkedListNode(int node_data) {
		this->data = node_data;
		this->next = nullptr;
		this->prev = nullptr;
	}
};

class DoublyLinkedList {
public:
	DoublyLinkedListNode * head;
	DoublyLinkedListNode *tail;

	DoublyLinkedList() {
		this->head = nullptr;
		this->tail = nullptr;
	}

	void insert_node(int node_data) {
		DoublyLinkedListNode* node = new DoublyLinkedListNode(node_data);

		if (!this->head) {
			this->head = node;
		}
		else {
			this->tail->next = node;
			node->prev = this->tail;
		}

		this->tail = node;
	}
};

void print_doubly_linked_list(DoublyLinkedListNode* node, string sep, ofstream& fout) {
	while (node) {
		fout << node->data;
		node = node->next;
		if (node) {
			fout << sep;
		}
	}
}

void free_doubly_linked_list(DoublyLinkedListNode* node) {
	while (node) {
		DoublyLinkedListNode* temp = node;
		node = node->next;

		free(temp);
	}
}

DoublyLinkedListNode* reverse(DoublyLinkedListNode* head) {
	

	struct DoublyLinkedListNode *current, *prev, *next;
	if (head == NULL)
		return NULL;
	current = head;
	prev = NULL;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		current->prev = next;
		prev = current;
		current = next;
	}
	head = prev;
	return head;
}