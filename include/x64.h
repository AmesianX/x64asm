#ifndef X64_INCLUDE_X64_H
#define X64_INCLUDE_X64_H

#include "src/assembler/assembler.h"
#include "src/assembler/function.h"

#include "src/cfg/cfg.h"

#include "src/code/attributes.h"
#include "src/code/checker.h"
#include "src/code/code.h"
#include "src/code/constants.h"
#include "src/code/cr.h"
#include "src/code/dr.h"
#include "src/code/eflag.h"
#include "src/code/hint.h"
#include "src/code/imm.h"
#include "src/code/instruction.h"
#include "src/code/label.h"
#include "src/code/m.h"
#include "src/code/mm.h"
#include "src/code/modifier.h"
#include "src/code/moffs.h"
#include "src/code/op_accessor.h"
#include "src/code/op_set.h"
#include "src/code/op_type.h"
#include "src/code/opcode.h"
#include "src/code/operand.h"
#include "src/code/r.h"
#include "src/code/rel.h"
#include "src/code/scale.h"
#include "src/code/sreg.h"
#include "src/code/st.h"
#include "src/code/xmm.h"
#include "src/code/ymm.h"

#include "src/io/att_reader.h"
#include "src/io/att_writer.h"
#include "src/io/intel_reader.h"
#include "src/io/intel_writer.h"

#include "src/stream/stream.h"

#endif
