#include <red3lib/CScriptThread.hpp>

red3lib::CScriptThread::CScriptThread(CFunction* owner, IScriptable* context, std::uint8_t* locals, std::uint8_t* params,
                                  std::uint8_t* code) noexcept
    : context(context)
    , unk8(0)
    , parent(parent)
    , owner(owner)
    , locals(locals)
    , params(params)
    , code(code)
    , unk38(0)
    , unk3C(0)
    , return_value(0)
    , unk48(0)
    , unk50(0)
    , unk58(0)
    , unk60(0)
    , unk68(0)
    , unk70(0)
    , unk78(0)
    , unk80(0)
    , unk88(0)
    , unk90(0)
    , unk98(0)
    , unkA0(0)
    , unkA8(0)
    , unkB0(0)
    , unkB8(0)
    , unkC0(0)
    , unkC8(0)
    , unkD0(0)
    , unkD8(0)
    , unkE0(0)
    , unkE8(0)
    , unkF0(0)
    , unkF8(0)
    , unk100(0)
    , unk108(0)
    , unk110(0)
    , unk118(0)

{
}
