/*
 * ObterPlant_data.c
 *
 * Code generation for model "ObterPlant".
 *
 * Model version              : 1.14
 * Simulink Coder version : 8.8 (R2015a) 09-Feb-2015
 * C source code generated on : Thu Oct 20 11:49:54 2016
 *
 * Target selection: rtwin.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86/Pentium
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ObterPlant.h"
#include "ObterPlant_private.h"

/* Block parameters (auto storage) */
P_ObterPlant_T ObterPlant_P = {
  0.0,                                 /* Mask Parameter: AnalogOutput_FinalValue
                                        * Referenced by: '<Root>/Analog Output'
                                        */
  0.0,                                 /* Mask Parameter: AnalogOutput_InitialValue
                                        * Referenced by: '<Root>/Analog Output'
                                        */
  10.0,                                /* Mask Parameter: AnalogOutput_MaxMissedTicks
                                        * Referenced by: '<Root>/Analog Output'
                                        */
  10.0,                                /* Mask Parameter: AnalogInput_MaxMissedTicks
                                        * Referenced by: '<Root>/Analog Input'
                                        */
  0.0,                                 /* Mask Parameter: AnalogOutput_YieldWhenWaiting
                                        * Referenced by: '<Root>/Analog Output'
                                        */
  0.0,                                 /* Mask Parameter: AnalogInput_YieldWhenWaiting
                                        * Referenced by: '<Root>/Analog Input'
                                        */
  0,                                   /* Mask Parameter: AnalogOutput_Channels
                                        * Referenced by: '<Root>/Analog Output'
                                        */

  /*  Mask Parameter: AnalogInput_Channels
   * Referenced by: '<Root>/Analog Input'
   */
  { 0, 1, 2 },
  0,                                   /* Mask Parameter: AnalogOutput_RangeMode
                                        * Referenced by: '<Root>/Analog Output'
                                        */
  0,                                   /* Mask Parameter: AnalogInput_RangeMode
                                        * Referenced by: '<Root>/Analog Input'
                                        */
  0,                                   /* Mask Parameter: AnalogOutput_VoltRange
                                        * Referenced by: '<Root>/Analog Output'
                                        */
  0                                    /* Mask Parameter: AnalogInput_VoltRange
                                        * Referenced by: '<Root>/Analog Input'
                                        */
};
