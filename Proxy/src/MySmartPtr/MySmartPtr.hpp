#pragma once

template<typename T>
class MySmartPtr
{
public:
    MySmartPtr(T* objectToManage);
    ~MySmartPtr();
    T& operator* ();
    T* operator->();
private:
    T* Instance;
};

template<typename T>
MySmartPtr<T>::MySmartPtr(T *objectToManage)
{
    //implement me!
    Instance = objectToManage;
    objectToManage=nullptr;
}

template<typename T>
MySmartPtr<T>::~MySmartPtr()
{
    //implement me!
	delete(Instance);
}
template<typename T>
T* MySmartPtr<T>::operator->()
{
     //implement me!
	return Instance;
}

template<typename T>
T& MySmartPtr<T>::operator*()
{
      //implement me!
	return *Instance;
}
