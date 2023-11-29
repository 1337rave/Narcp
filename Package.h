#ifndef package_h
#define package_h

template<typename T>
struct Package
{
private:
	T data;
public:
	string place;
	float color;
	float cost;

	Package(T data, string place, float color, float cost)
	{
		this->place = place;
		this->color = color;
		this->cost = cost;
	}
	Package(T data)
	{
		this->data = data;
	}

	inline T getData() const
	{
		return data;
	}
};

#endif 