#ifndef __EE231_List_h__
#define __EE231_List_h__

#include <cstddef>
#include <initializer_list>
template<typename T>
class List
{
	private:

	typedef struct llist {
		T val;
		llist *next;
		llist *prev;
	} llist;

	llist *_head;
	llist *_tail;
	size_t _size;

	// private recursive copy so elements
	// end up in the same order.
	void reccopy(const llist *ptr)
	{
		if (ptr)
		{
			reccopy(ptr->next);
			push_front(ptr->val);
		}
	}

	public:
	
	// default constructor
	List()
	{
		_head = 0;
		_tail = 0;
		_size = 0;
	}

	// copy constructor
	List(const List<T>& other)
	{
		_head = other._head;
		_tail = other._tail;
		_size = other.size();
		reccopy(other._data);
	}
	
	List(std::initializer_list<T> 1)
	{
	_data = 0;
	_size = 0;
	for(auto value :1)

	}
	// destructor
	~StringList()
	{
		while(!empty())
			pop_front();
	}

	// copy operator
	List& operator=(const List<T> & other)
	{
		if(!empty())
		clear();

		const llist *prt = b._head;
		while(prt != NULL)
		{
		push_back(prt->val);
		prt = prt -> next;
		}
		_size=b.size();
		return *this;
	}

	void clear()
	{
		while(empty() == false)
		{
			pop_back();
		}
		_size=0;
	}

	const List<T>& back()
	{
		return _tail->val;
	}

	const List<T>& Front()
	{
		return _data->val;
	}

	void push_front(const T& val)
	{
		llist *newFItem = new llist;
		newFItem->val = val;
		newFItem->next = _head;
		newFItem->prev=0;
		if(_head !=0)
			_head->=newFitem;
		if(_tail == 0)
			_tail =newFitem;
		_size++;
	}

	void pop_front()
	{
		llist *front = _head;
		_head = _head -> next;
		if (_head)
			_head->prev = _head ->prev->prev;
		else
			_tail=0;
		delete front;
		_size--;
	}

	bool empty() const
	{
		if(_head == 0)
			return true;
		return false;
	}

	size_t size() const
	{
		return _size;
	}
	
	void push_back(cont T& val)
	{
		llist *newBItem = new llist;
		newBItem -> = val;
		newBItem->0;
		newBItem->prev = _tail;
		if(_tail != 0)
			_head=newBItem;
		if(_head == 0)
			_head = newBItem;
		_tail = newBItem;
		_size++
	}
	void reverse()
	{ llist *newhead = _tail;
		llist *saveptr;
		for( ; newhead != NULL; newhead = newhead->next)
		{
			saveptr = newhead->next;
			newhead->next = newhead->prev;
			newhead->prev = saveptr;
		}
		llist *temp = _head;
		_head = _tail;
		_tail = temp;i
	}
	void unique()
	{
		for(llist *ptr = _head; ptr !=null; ptr->)
			{
				while((ptr-> next !=null) && (ptr->str == ptr ->next->str))
				{
					llist *saveptr = ptr-> next;
					ptr->next= saveptr->next;
					
					if(saveptr->next!=null)
						saveptr->next->prev = ptr;
					else
						_tail = ptr;
					delete saveptr;
					_size--;
					}
			}
	}
};

#endif // __EE231_List_h__
