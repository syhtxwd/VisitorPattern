// element.h
#ifndef ELEMENT_H
#define ELEMENT_H

class IVisitor;

// 地方
class IPlace
{
public:
    virtual ~IPlace() {}
    virtual void Accept(IVisitor *visitor) = 0;
};

#endif // ELEMENT_H
