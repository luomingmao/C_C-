#ifndef _ADAPTER_OBJECT_H_
#define _ADAPTER_OBJECT_H_

class Target_object
{
public:
    Target_object();
    virtual ~Target_object();
    virtual void Request();

protected:

private:
};

class Adaptee_object
{
public:
    Adaptee_object();
    ~Adaptee_object();
    void SpecificRequest();

protected:

private:
};

class Adapter_object:public Target_object
{
public:
    Adapter_object(Adaptee_object* ade);
    ~Adapter_object();
    void Request();

protected:

private:
    Adaptee_object* _ade;
};

#endif