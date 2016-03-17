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
//	delete next;
    }
    shared_ptr<Node> next;
    int value;
};

class List
{
public:
    List();
    ~List(){
//	delete first;
    }
    void add(shared_ptr<Node> node);        // dodaje element na koniec listy
    shared_ptr<Node> get(const int value);  // zwraca element o wskazanej wartości

private:
    shared_ptr<Node> first;
};

List::List() :
    first(nullptr)
{}

void List::add(shared_ptr<Node> node)
{
    if(!first)
    {
        first = node;
    }
    else
    {
        shared_ptr<Node> current = first;
        while(current->next)
        {
            current = current->next;
        }
        current->next = node;
    }
}

shared_ptr<Node> List::get(const int value)
{
    if(!first)
    {
        cout << "List is empty!" << endl;
        return nullptr;
    }
    else
    {
        shared_ptr<Node> current = first;
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
    auto node4 = make_shared<Node>(4);
    auto node7 = make_shared<Node>(7);

    lista.add(node4);
    lista.add(make_shared<Node>(2));
    lista.add(node7);
    lista.add(make_shared<Node>(9));
    auto node = lista.get(1);
    auto node2 = lista.get(7);
    return 0;
}

