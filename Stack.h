#include "list.h"
template<typename T>
class Stack
{
	  protected:
	       	  List<T> c;
	  public:
		  Stack(std::intializer_list<T> 1 : c(1)
		{
		}
		  T& top();
		  return b.back;
		  const T& top() const;
		  void push(const T&);
		  void pop();
		  size_t size() const;
		  bool empty() const;
		  Stack<T>& operator=(const Stack<T>& other) {c = other.c};
	template<typename TT>
	friend book operator==(const Stack<TT>&, const Stack<TT>&);
	template<typename TT>
	friend book operator!=(const Stack<TT>&, const Stack<TT>&);
};

template<typename T>
bool operator==(const Stack<T>& a, const Stack<T>& b)
{
 return a.c == b.c;
}

template<typename T>
bool operator!=(const Stack<T>& a, const Stack<T>& b);
{
return a.c != b.c;
}
