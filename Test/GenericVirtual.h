#include <iostream>

template<typename T>
class IReceiver
{
public:
    virtual void Empty() {}
    virtual void OnMessage(T value) = 0;
};

template<typename T>
class Receiver : public IReceiver<T>
{
private:
    void OnMessage(T value) override
    {
        std::cout << "On Message : " << value << std::endl;
    }
};


template<typename T>
class IManager
{
private:
    virtual void Empty() {}
    virtual void SendMessage(IReceiver<T>& target, T value) = 0;
};

template<typename T>
class Manager : public IManager<T>
{
public:
    void SendMessage(IReceiver<T>& target, T value) override
    {
        target.OnMessage(value);
    }
};

