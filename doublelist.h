#ifndef DOUBLELIST_H
#define DOUBLELIST_H
template<typename Item>
struct Node{
	Item info;
	Node<Item>* prev;
	Node<Item>* next;
};

class Encadeadas{
	public:
		void push_back(Item i);
		void push_front(Item i);
		void insert(Item i, size_t position);
		bool empty();
		Item pop_back();
		Item pop_front();
		Item remove(size_t position);
		Item& front();
		Item& back();
		size_t size();
		Node<Item>* search(Item i);
		void invert();
		void traverse(void (*callback)(Item&));
		void traverseReverse(void (*callback)(Item&));
	private:
		Node<Item>* head = nullptr;
		Node<Item>* last = nullptr;
};

#endif
