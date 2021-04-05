#ifndef PAYABLE_CODE
#define PAYABLE_CODE

class IPayable
{
    virtual float currentPayDue() const = 0;
};

#endif
