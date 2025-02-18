#pragma once

#include <cstdint>

#include <red3lib/detail/Asserts.hpp>
#include <red3lib/detail/Common.hpp>

namespace red3lib
{
struct CFunction;
struct IScriptable;

struct [[nodiscard]] CScriptThread
{
    CScriptThread(CFunction* owner, IScriptable* context, std::uint8_t* locals, std::uint8_t* params,
                std::uint8_t* code) noexcept;

    constexpr CScriptThread(CScriptThread&&) noexcept = default;
    constexpr CScriptThread& operator=(CScriptThread&&) noexcept = default;

    constexpr ~CScriptThread() noexcept = default;

    RED3LIB_NON_COPYABLE(CScriptThread);

    IScriptable* context;      // 00 - TODO: Increase reference counter when this class is constructed and decrease it!
    std::int64_t unk8;         // 08 - Seems to be the reference counter of the context. NOTE: This NEEDS to be set!
    CScriptThread* parent;       // 10
    CFunction* owner;          // 18
    std::uint8_t* locals;      // 20
    std::uint8_t* params;      // 28
    std::uint8_t* code;        // 30
    std::int32_t unk38;        // 38
    std::int8_t unk3C;         // 3C
    std::int64_t return_value; // 40 - "scriptable" maybe?
    std::int64_t unk48;        // 48
    std::int64_t unk50;        // 50
    std::int64_t unk58;        // 58
    std::int64_t unk60;        // 60
    std::int64_t unk68;        // 68
    std::int64_t unk70;        // 70
    std::int64_t unk78;        // 78
    std::int64_t unk80;        // 80
    std::int64_t unk88;        // 88
    std::int64_t unk90;        // 90
    std::int64_t unk98;        // 98
    std::int64_t unkA0;        // A0
    std::int64_t unkA8;        // A8
    std::int64_t unkB0;        // B0
    std::int64_t unkB8;        // B8
    std::int64_t unkC0;        // C0
    std::int64_t unkC8;        // C8
    std::int64_t unkD0;        // D0
    std::int64_t unkD8;        // D8
    std::int64_t unkE0;        // E0
    std::int64_t unkE8;        // E8
    std::int64_t unkF0;        // F0
    std::int64_t unkF8;        // F8
    std::int64_t unk100;       // 100
    std::int32_t unk108;       // 108
    std::int64_t unk110;       // 110
    std::int64_t unk118;       // 118
};
RED3LIB_ASSERT_SIZE(CScriptThread, 0x120);
RED3LIB_ASSERT_OFFSET(CScriptThread, locals, 0x20);
RED3LIB_ASSERT_OFFSET(CScriptThread, params, 0x28);
RED3LIB_ASSERT_OFFSET(CScriptThread, code, 0x30);
RED3LIB_ASSERT_OFFSET(CScriptThread, unk38, 0x38);
} // namespace red3lib
