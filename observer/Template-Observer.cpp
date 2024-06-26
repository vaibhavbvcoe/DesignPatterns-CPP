
#include<string>
#include<vector>

template<typename T>
class Observer
{
public:
	virtual void Update(T data) = 0;
};

template<typename T>
class MyObserver : public Observer<T>
{
public:
	explicit MyObserver(const std::string& str) : name(str) {}
	void Update(T msg)
	{
		cout << name << " Got message " << msg << std::endl;
	}
private:
	std::string name;
};



template<typename T>
class Subject
{
	vector<Observer<T>*>ob;
public:
	void Add(Observer<T>* o)
	{
		ob.push_back(o);
	}
	void Remove(Observer<T>* o)
	{

		for (int i = 0; i < ob.size(); i++)
		{
			if (ob[i] == o)
			{
				ob.erase(ob.begin() + i)
					break;
			}
		}

	}
	void Notify(T val)
	{
		for (int i = 0; i < ob.size(); i++)
		{
			ob[i]->Update(val);
		}
	}
};

template<typename T>
class MySubject : public Subject<T>
{
public:
	enum Message { ADD, REMOVE };
};



void main()
{

	MySubject <char*>* x = new MySubject<char*>();

	MyObserver<char*>* obs1 = new MyObserver <char*>("observer1");
	MyObserver<char*>* obs2 = new MyObserver<char*>("observer2");
	MyObserver<char*>* obs23 = new MyObserver<char*>("observer23");

	x->Add(obs1);
	x->Add(obs2);
	x->Add(obs23);
	x->Notify("teddy");

}