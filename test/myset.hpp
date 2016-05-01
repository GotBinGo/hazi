#include<stdexcept>

template<class T, int n=1>
class Set
{
	T data[n];
	int db;

	public:
	Set()
	{
		db = 0;
	}
	bool isElement(const T &t)
	{
		for(int i = 0; i < db; i++)
			if(data[i] == t)
				return true;
		return false;
	}

	void insert(const T &t)
	{
		if(db < n)
			data[db++] = t;
		else
			throw std::exception();
	}
};

