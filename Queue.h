template<typename T>
Queue
{
	  protected:
	     	  List<T> c;
	  public:
		  T& front()
		  {
			  return c.front();
		  }
		  T& back()
		{
			return c.back();
		}
		  const T& front() const;
		  {
			  return c.front();
		  }
		  const T& back() const
		  {
			 reutrn c.back();
		  }
		  void push(const T&)
		{
			v.push_back(val);
		}
		  void pop()
		  {
			  c.pop_front;
		}
		  size_t size() const
		  {
			return c.size;
		}
		  bool empty() const;
		  {
			return c.empty();
		}
		  Queue<T>& operator=(const Queue<T>& b)
		  {
			return c=b
		}
};

bool operator==(const Queue<T>&, const Queue<T>&)
{
	for(int i = 0; c.front* != c.back*; i++){
		if(c.front + i != b.front + i){
			return false;
		}
	}
	return true;
}
bool operator!=(const Queue<T>&, const Queue<T>&)
{
	if(c==b)
		return false;
	return true;
}
};
