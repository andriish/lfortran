#ifndef LIBASR_PASS_DEAD_CODE_REMOVAL_H
#define LIBASR_PASS_DEAD_CODE_REMOVAL_H

#include <libasr/asr.h>

namespace LFortran {

    void pass_dead_code_removal(Allocator &al, ASR::TranslationUnit_t &unit, const std::string& rl_path);

} // namespace LFortran

#endif
