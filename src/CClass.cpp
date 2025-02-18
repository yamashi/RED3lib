#include <red3lib/CClass.hpp>
#include <red3lib/CFunction.hpp>

red3lib::CFunction* red3lib::CClass::FindFunction(red3lib::CName func_name) const
{
    // TODO: Improve this after some more RE is done.
    for (uint32_t i = 0; i < functions.size; i++)
    {
        auto function = functions.entries[i];
        auto name1 = function->name.AsChar();
        auto name2 = func_name.AsChar();
        if (name1 == name2)
        {
            return function;
        }
    }

    if (base)
    {
        return base->FindFunction(func_name);
    }

    return nullptr;
}
