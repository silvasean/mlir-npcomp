add_mlir_dialect_library(NPCOMPTCP
  TCPDialect.cpp
  TCPOps.cpp

  ADDITIONAL_HEADER_DIRS
  ${PROJECT_SOURCE_DIR}/include/npcomp/Dialect/TCP

  DEPENDS
  MLIRTCPOpsIncGen

  LINK_COMPONENTS
  Core

  LINK_LIBS PUBLIC
  MLIRIR
  MLIRSupport
  MLIRSideEffectInterfaces
  MLIRShape
  )
