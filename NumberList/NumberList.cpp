#include "pch.h"
#include "NumberList.h"

NumberList::NumberList(void)
{
    initAttributes();
}

void NumberList::addToList(int value)
{
    mNumberList.push_back(value);
}

std::vector<int> NumberList::getNumbers() const
{
    return mNumberList;
}
