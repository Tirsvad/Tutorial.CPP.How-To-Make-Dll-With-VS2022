#define MAKEDLL_EXPORT

#include "pch.h"
#include "NumberList.h"

NumberList::NumberList(void)
{
    initAttributes();
}

void NumberList::addToList(int value)
{
    numberList.push_back(value);
}

std::vector<int> NumberList::getList()
{
    return numberList;
}
