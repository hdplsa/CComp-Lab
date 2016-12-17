/*
 * model_real_int_data.c
 *
 * Code generation for model "model_real_int".
 *
 * Model version              : 1.42
 * Simulink Coder version : 8.8 (R2015a) 09-Feb-2015
 * C source code generated on : Thu Dec 15 17:45:59 2016
 *
 * Target selection: rtwin.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86/Pentium
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "model_real_int.h"
#include "model_real_int_private.h"

/* Block parameters (auto storage) */
P_model_real_int_T model_real_int_P = {
  /*  Variable: A
   * Referenced by: '<S1>/A'
   */
  { 3.29698189005776, 1.0, 0.0, 0.0, -4.2079102651795468, 0.0, 1.0, 0.0,
    2.4834854334823895, 0.0, 0.0, 1.0, -0.57255705836060289, 0.0, 0.0, 0.0 },

  /*  Variable: B
   * Referenced by: '<S1>/B'
   */
  { 1.0, 0.0, 0.0, 0.0 },

  /*  Variable: C
   * Referenced by: '<S1>/C'
   */
  { -0.049530954529740337, 0.0813028448109629, 0.030827617914448671, 0.0 },

  /*  Variable: K
   * Referenced by: '<Root>/K1'
   */
  { 0.12674267252781998, -0.28654689474832346, 0.23444774033067073,
    -0.068771540727715325 },

  /*  Variable: M
   * Referenced by: '<S1>/M'
   */
  { 53.591427967416379, 36.004907767378192, 20.493643692777322,
    9.9264775590758063 },
  0.093802292569101192,                /* Variable: Nbar
                                        * Referenced by: '<Root>/N1'
                                        */
  0.0,                                 /* Mask Parameter: AnalogOutput_FinalValue
                                        * Referenced by: '<S2>/Analog Output'
                                        */
  0.0,                                 /* Mask Parameter: AnalogOutput_InitialValue
                                        * Referenced by: '<S2>/Analog Output'
                                        */
  10.0,                                /* Mask Parameter: AnalogInput_MaxMissedTicks
                                        * Referenced by: '<S2>/Analog Input'
                                        */
  10.0,                                /* Mask Parameter: AnalogOutput_MaxMissedTicks
                                        * Referenced by: '<S2>/Analog Output'
                                        */
  0.0,                                 /* Mask Parameter: AnalogInput_YieldWhenWaiting
                                        * Referenced by: '<S2>/Analog Input'
                                        */
  0.0,                                 /* Mask Parameter: AnalogOutput_YieldWhenWaiting
                                        * Referenced by: '<S2>/Analog Output'
                                        */

  /*  Mask Parameter: AnalogInput_Channels
   * Referenced by: '<S2>/Analog Input'
   */
  { 0, 1, 2 },
  0,                                   /* Mask Parameter: AnalogOutput_Channels
                                        * Referenced by: '<S2>/Analog Output'
                                        */
  0,                                   /* Mask Parameter: AnalogInput_RangeMode
                                        * Referenced by: '<S2>/Analog Input'
                                        */
  0,                                   /* Mask Parameter: AnalogOutput_RangeMode
                                        * Referenced by: '<S2>/Analog Output'
                                        */
  0,                                   /* Mask Parameter: AnalogInput_VoltRange
                                        * Referenced by: '<S2>/Analog Input'
                                        */
  0,                                   /* Mask Parameter: AnalogOutput_VoltRange
                                        * Referenced by: '<S2>/Analog Output'
                                        */
  0.0018,                              /* Computed Parameter: DiscreteTimeIntegrator1_gainval
                                        * Referenced by: '<Root>/Discrete-Time Integrator1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Discrete-Time Integrator1'
                                        */

  /*  Expression: [0;0;0;0]
   * Referenced by: '<S1>/Delay'
   */
  { 0.0, 0.0, 0.0, 0.0 },
  10.0,                                /* Expression: 10
                                        * Referenced by: '<Root>/Saturation1'
                                        */
  -10.0,                               /* Expression: -10
                                        * Referenced by: '<Root>/Saturation1'
                                        */
  -0.28,                               /* Expression: -0.28
                                        * Referenced by: '<Root>/Dead Zone'
                                        */
  0.3,                                 /* Expression: 0.3
                                        * Referenced by: '<Root>/Dead Zone'
                                        */
  1U                                   /* Computed Parameter: Delay_DelayLength
                                        * Referenced by: '<S1>/Delay'
                                        */
};
