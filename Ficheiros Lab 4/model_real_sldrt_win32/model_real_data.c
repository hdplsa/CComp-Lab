/*
 * model_real_data.c
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

#include "model_real.h"
#include "model_real_private.h"

/* Block parameters (auto storage) */
P_model_real_T model_real_P = {
  /*  Variable: A
   * Referenced by: '<S2>/A'
   */
  { 3.29698189005776, 1.0, 0.0, 0.0, -4.2079102651795468, 0.0, 1.0, 0.0,
    2.4834854334823895, 0.0, 0.0, 1.0, -0.57255705836060289, 0.0, 0.0, 0.0 },

  /*  Variable: B
   * Referenced by: '<S2>/B'
   */
  { 1.0, 0.0, 0.0, 0.0 },

  /*  Variable: C
   * Referenced by: '<S2>/C'
   */
  { -0.049530954529740337, 0.0813028448109629, 0.030827617914448671, 0.0 },

  /*  Variable: K
   * Referenced by: '<S1>/K'
   */
  { 0.6790893600807314, -1.41789247675388, 1.0743048663624415,
    -0.29165482583345048 },

  /*  Variable: M
   * Referenced by: '<S2>/M'
   */
  { 26.636404674578554, 20.159969653742252, 13.398100960564786,
    7.4693824614514117 },
  0.70043559637541775,                 /* Variable: Nbar
                                        * Referenced by: '<Root>/N'
                                        */
  0.0,                                 /* Mask Parameter: AnalogOutput_FinalValue
                                        * Referenced by: '<S3>/Analog Output'
                                        */
  0.0,                                 /* Mask Parameter: AnalogOutput_InitialValue
                                        * Referenced by: '<S3>/Analog Output'
                                        */
  10.0,                                /* Mask Parameter: AnalogInput_MaxMissedTicks
                                        * Referenced by: '<S3>/Analog Input'
                                        */
  10.0,                                /* Mask Parameter: AnalogOutput_MaxMissedTicks
                                        * Referenced by: '<S3>/Analog Output'
                                        */
  0.0,                                 /* Mask Parameter: AnalogInput_YieldWhenWaiting
                                        * Referenced by: '<S3>/Analog Input'
                                        */
  0.0,                                 /* Mask Parameter: AnalogOutput_YieldWhenWaiting
                                        * Referenced by: '<S3>/Analog Output'
                                        */

  /*  Mask Parameter: AnalogInput_Channels
   * Referenced by: '<S3>/Analog Input'
   */
  { 0, 1, 2 },
  0,                                   /* Mask Parameter: AnalogOutput_Channels
                                        * Referenced by: '<S3>/Analog Output'
                                        */
  0,                                   /* Mask Parameter: AnalogInput_RangeMode
                                        * Referenced by: '<S3>/Analog Input'
                                        */
  0,                                   /* Mask Parameter: AnalogOutput_RangeMode
                                        * Referenced by: '<S3>/Analog Output'
                                        */
  0,                                   /* Mask Parameter: AnalogInput_VoltRange
                                        * Referenced by: '<S3>/Analog Input'
                                        */
  0,                                   /* Mask Parameter: AnalogOutput_VoltRange
                                        * Referenced by: '<S3>/Analog Output'
                                        */

  /*  Expression: [0;0;0;0]
   * Referenced by: '<S2>/Delay'
   */
  { 0.0, 0.0, 0.0, 0.0 },
  1U                                   /* Computed Parameter: Delay_DelayLength
                                        * Referenced by: '<S2>/Delay'
                                        */
};
