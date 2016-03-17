#include <iostream>
#include <memory>
//TODO inteligentne wskazniki - readme
using namespace std;

class Node
{
public:
    Node(const int v) :
        next(nullptr),
        value(v)
    {}
    ~Node(){
	delete next;
    }
    Node* next;
    int value;
};

class List
{
public:
    List();
    ~List(){
	delete first;
    }
    void add(Node* node);        // dodaje element na koniec listy
    Node* get(const int value);  // zwraca element o wskazanej wartości

private:
    Node* first;
};

List::List() :
    first(nullptr)
{}

void List::add(Node* node)
{
    if(!first)
    {
        first = node;
    }
    else
    {
        Node* current = first;
        while(current->next)
        {
            current = current->next;
        }
        current->next = node;
    }
}

Node* List::get(const int value)
{
    if(!first)
    {
        cout << "List is empty!" << endl;
        return nullptr;
    }
    else
    {
        Node* current = first;
        do
        {
            if(current->value == value)
            {
                cout << "Found value " << current->value << endl;
                return current;
            }
            else
            {
                cout << "Going through " << current->value << endl;
                current = current->next;
            }
        } while(current);
        cout << "Not found: value " << value << endl;
        return nullptr;
    }
}

int main()
{
    List lista;
    Node* node4 = new Node(4);
    Node* node7 = new Node(7);

    lista.add(node4);
    lista.add(new Node(2));
    lista.add(node7);
    lista.add(new Node(9));
    auto node = lista.get(1);
    auto node2 = lista.get(7);
    return 0;
}

