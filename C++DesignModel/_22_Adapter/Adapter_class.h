#ifndef _ADAPTER_CLASS_H_
#define _ADAPTER_CLASS_H_

class Target_class
{
public:
    Target_class();
    virtual ~Target_class();
    virtual void Request();

protected:

private:
};

class Adaptee_class
{
public:
    Adaptee_class();
    ~Adaptee_class();
    void SpecificRequest();

protected:

private:
};

class Adapter_class:public Target_class,private Adaptee_class
{
public:
    Adapter_class();
    ~Adapter_class();
    void Request();

protected:

private:
};

#endif