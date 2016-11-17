/*
 * model_real_dt.h
 *
 * Code generation for model "model_real".
 *
 * Model version              : 1.16
 * Simulink Coder version : 8.8 (R2015a) 09-Feb-2015
 * C source code generated on : Thu Nov 17 10:33:56 2016
 *
 * Target selection: rtwin.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86/Pentium
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ext_types.h"

/* data type size table */
static uint_T rtDataTypeSizes[] = {
  sizeof(real_T),
  sizeof(real32_T),
  sizeof(int8_T),
  sizeof(uint8_T),
  sizeof(int16_T),
  sizeof(uint16_T),
  sizeof(int32_T),
  sizeof(uint32_T),
  sizeof(boolean_T),
  sizeof(fcn_call_T),
  sizeof(int_T),
  sizeof(pointer_T),
  sizeof(action_T),
  2*sizeof(uint32_T)
};

/* data type name table */
static const char_T * rtDataTypeNames[] = {
  "real_T",
  "real32_T",
  "int8_T",
  "uint8_T",
  "int16_T",
  "uint16_T",
  "int32_T",
  "uint32_T",
  "boolean_T",
  "fcn_call_T",
  "int_T",
  "pointer_T",
  "action_T",
  "timer_uint32_pair_T"
};

/* data type transitions for block I/O structure */
static DataTypeTransition rtBTransitions[] = {
  { (char_T *)(&model_real_B.Fcn), 0, 0, 10 }
  ,

  { (char_T *)(&model_real_DW.Delay_DSTATE[0]), 0, 0, 4 },

  { (char_T *)(&model_real_DW.FromWorkspace1_PWORK.TimePtr), 11, 0, 6 },

  { (char_T *)(&model_real_DW.FromWorkspace1_IWORK.PrevIndex), 10, 0, 1 }
};

/* data type transition table for block I/O structure */
static DataTypeTransitionTable rtBTransTable = {
  4U,
  rtBTransitions
};

/* data type transitions for Parameters structure */
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&model_real_P.A[0]), 0, 0, 39 },

  { (char_T *)(&model_real_P.AnalogInput_Channels[0]), 6, 0, 8 },

  { (char_T *)(&model_real_P.Delay_InitialCondition[0]), 0, 0, 4 },

  { (char_T *)(&model_real_P.Delay_DelayLength), 7, 0, 1 }
};

/* data type transition table for Parameters structure */
static DataTypeTransitionTable rtPTransTable = {
  4U,
  rtPTransitions
};

/* [EOF] model_real_dt.h */
