#ifndef _INVOKER_H_
#define _INVOKER_H_

class Command;

class Invoker
{
public:
    Invoker(Command* cmd);
    ~Invoker();
    Invoker();

protected:

private:
    Command *_cmd;
};

#endif