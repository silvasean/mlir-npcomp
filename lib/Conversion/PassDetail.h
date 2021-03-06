//===- PassDetail.h - Conversion Pass class details -------------*- C++ -*-===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef NPCOMP_CONVERSION_PASSDETAIL_H
#define NPCOMP_CONVERSION_PASSDETAIL_H

#include "mlir/Pass/Pass.h"

namespace mlir {
namespace NPCOMP {

#define GEN_PASS_CLASSES
#include "npcomp/Conversion/Passes.h.inc"

} // namespace NPCOMP
} // end namespace mlir

#endif // NPCOMP_CONVERSION_PASSDETAIL_H
