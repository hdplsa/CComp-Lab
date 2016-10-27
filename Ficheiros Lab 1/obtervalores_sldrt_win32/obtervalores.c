/*
 * obtervalores.c
 *
 * Code generation for model "obtervalores".
 *
 * Model version              : 1.5
 * Simulink Coder version : 8.8 (R2015a) 09-Feb-2015
 * C source code generated on : Thu Oct 06 10:48:06 2016
 *
 * Target selection: rtwin.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86/Pentium
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "obtervalores.h"
#include "obtervalores_private.h"
#include "obtervalores_dt.h"

/* options for Simulink Desktop Real-Time board 0 */
static double RTWinBoardOptions0[] = {
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
};

/* list of Simulink Desktop Real-Time timers */
const int RTWinTimerCount = 1;
const double RTWinTimers[2] = {
  0.001, 0.0,
};

/* list of Simulink Desktop Real-Time boards */
const int RTWinBoardCount = 1;
RTWINBOARD RTWinBoards[1] = {
  { "National_Instruments/PCI-MIO-16E-4", 4294967295U, 6, RTWinBoardOptions0 },
};

/* Block signals (auto storage) */
B_obtervalores_T obtervalores_B;

/* Block states (auto storage) */
DW_obtervalores_T obtervalores_DW;

/* Real-time model */
RT_MODEL_obtervalores_T obtervalores_M_;
RT_MODEL_obtervalores_T *const obtervalores_M = &obtervalores_M_;

/* Model output function */
void obtervalores_output(void)
{
  real_T temp;

  /* SignalGenerator: '<Root>/Signal Generator' */
  temp = obtervalores_P.SignalGenerator_Frequency * obtervalores_M->Timing.t[0];
  if (temp - floor(temp) >= 0.5) {
    obtervalores_B.SignalGenerator = obtervalores_P.SignalGenerator_Amplitude;
  } else {
    obtervalores_B.SignalGenerator = -obtervalores_P.SignalGenerator_Amplitude;
  }

  /* End of SignalGenerator: '<Root>/Signal Generator' */
  /* S-Function Block: <Root>/Analog Output */
  {
    {
      ANALOGIOPARM parm;
      parm.mode = (RANGEMODE) obtervalores_P.AnalogOutput_RangeMode;
      parm.rangeidx = obtervalores_P.AnalogOutput_VoltRange;
      RTBIO_DriverIO(0, ANALOGOUTPUT, IOWRITE, 1,
                     &obtervalores_P.AnalogOutput_Channels,
                     &obtervalores_B.SignalGenerator, &parm);
    }
  }

  /* S-Function Block: <Root>/Analog Input */
  {
    ANALOGIOPARM parm;
    parm.mode = (RANGEMODE) obtervalores_P.AnalogInput_RangeMode;
    parm.rangeidx = obtervalores_P.AnalogInput_VoltRange;
    RTBIO_DriverIO(0, ANALOGINPUT, IOREAD, 3,
                   obtervalores_P.AnalogInput_Channels,
                   &obtervalores_B.AnalogInput[0], &parm);
  }

  /* Clock: '<Root>/Clock' */
  obtervalores_B.Clock = obtervalores_M->Timing.t[0];
}

/* Model update function */
void obtervalores_update(void)
{
  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++obtervalores_M->Timing.clockTick0)) {
    ++obtervalores_M->Timing.clockTickH0;
  }

  obtervalores_M->Timing.t[0] = obtervalores_M->Timing.clockTick0 *
    obtervalores_M->Timing.stepSize0 + obtervalores_M->Timing.clockTickH0 *
    obtervalores_M->Timing.stepSize0 * 4294967296.0;

  {
    /* Update absolute timer for sample time: [0.001s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick1"
     * and "Timing.stepSize1". Size of "clockTick1" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick1 and the high bits
     * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++obtervalores_M->Timing.clockTick1)) {
      ++obtervalores_M->Timing.clockTickH1;
    }

    obtervalores_M->Timing.t[1] = obtervalores_M->Timing.clockTick1 *
      obtervalores_M->Timing.stepSize1 + obtervalores_M->Timing.clockTickH1 *
      obtervalores_M->Timing.stepSize1 * 4294967296.0;
  }
}

/* Model initialize function */
void obtervalores_initialize(void)
{
  /* S-Function Block: <Root>/Analog Output */
  {
    {
      ANALOGIOPARM parm;
      parm.mode = (RANGEMODE) obtervalores_P.AnalogOutput_RangeMode;
      parm.rangeidx = obtervalores_P.AnalogOutput_VoltRange;
      RTBIO_DriverIO(0, ANALOGOUTPUT, IOWRITE, 1,
                     &obtervalores_P.AnalogOutput_Channels,
                     &obtervalores_P.AnalogOutput_InitialValue, &parm);
    }
  }
}

/* Model terminate function */
void obtervalores_terminate(void)
{
  /* S-Function Block: <Root>/Analog Output */
  {
    {
      ANALOGIOPARM parm;
      parm.mode = (RANGEMODE) obtervalores_P.AnalogOutput_RangeMode;
      parm.rangeidx = obtervalores_P.AnalogOutput_VoltRange;
      RTBIO_DriverIO(0, ANALOGOUTPUT, IOWRITE, 1,
                     &obtervalores_P.AnalogOutput_Channels,
                     &obtervalores_P.AnalogOutput_FinalValue, &parm);
    }
  }
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  obtervalores_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  obtervalores_update();
  UNUSED_PARAMETER(tid);
}

void MdlInitializeSizes(void)
{
}

void MdlInitializeSampleTimes(void)
{
}

void MdlInitialize(void)
{
}

void MdlStart(void)
{
  obtervalores_initialize();
}

void MdlTerminate(void)
{
  obtervalores_terminate();
}

/* Registration function */
RT_MODEL_obtervalores_T *obtervalores(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)obtervalores_M, 0,
                sizeof(RT_MODEL_obtervalores_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&obtervalores_M->solverInfo,
                          &obtervalores_M->Timing.simTimeStep);
    rtsiSetTPtr(&obtervalores_M->solverInfo, &rtmGetTPtr(obtervalores_M));
    rtsiSetStepSizePtr(&obtervalores_M->solverInfo,
                       &obtervalores_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&obtervalores_M->solverInfo, (&rtmGetErrorStatus
      (obtervalores_M)));
    rtsiSetRTModelPtr(&obtervalores_M->solverInfo, obtervalores_M);
  }

  rtsiSetSimTimeStep(&obtervalores_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&obtervalores_M->solverInfo,"FixedStepDiscrete");

  /* Initialize timing info */
  {
    int_T *mdlTsMap = obtervalores_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    obtervalores_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    obtervalores_M->Timing.sampleTimes =
      (&obtervalores_M->Timing.sampleTimesArray[0]);
    obtervalores_M->Timing.offsetTimes =
      (&obtervalores_M->Timing.offsetTimesArray[0]);

    /* task periods */
    obtervalores_M->Timing.sampleTimes[0] = (0.0);
    obtervalores_M->Timing.sampleTimes[1] = (0.001);

    /* task offsets */
    obtervalores_M->Timing.offsetTimes[0] = (0.0);
    obtervalores_M->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(obtervalores_M, &obtervalores_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = obtervalores_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    obtervalores_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(obtervalores_M, 10.0);
  obtervalores_M->Timing.stepSize0 = 0.001;
  obtervalores_M->Timing.stepSize1 = 0.001;

  /* External mode info */
  obtervalores_M->Sizes.checksums[0] = (2962616132U);
  obtervalores_M->Sizes.checksums[1] = (1239092161U);
  obtervalores_M->Sizes.checksums[2] = (3855291691U);
  obtervalores_M->Sizes.checksums[3] = (1745576536U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[1];
    obtervalores_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(obtervalores_M->extModeInfo,
      &obtervalores_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(obtervalores_M->extModeInfo,
                        obtervalores_M->Sizes.checksums);
    rteiSetTPtr(obtervalores_M->extModeInfo, rtmGetTPtr(obtervalores_M));
  }

  obtervalores_M->solverInfoPtr = (&obtervalores_M->solverInfo);
  obtervalores_M->Timing.stepSize = (0.001);
  rtsiSetFixedStepSize(&obtervalores_M->solverInfo, 0.001);
  rtsiSetSolverMode(&obtervalores_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  obtervalores_M->ModelData.blockIO = ((void *) &obtervalores_B);
  (void) memset(((void *) &obtervalores_B), 0,
                sizeof(B_obtervalores_T));

  /* parameters */
  obtervalores_M->ModelData.defaultParam = ((real_T *)&obtervalores_P);

  /* states (dwork) */
  obtervalores_M->ModelData.dwork = ((void *) &obtervalores_DW);
  (void) memset((void *)&obtervalores_DW, 0,
                sizeof(DW_obtervalores_T));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    obtervalores_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 14;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.B = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.P = &rtPTransTable;
  }

  /* Initialize Sizes */
  obtervalores_M->Sizes.numContStates = (0);/* Number of continuous states */
  obtervalores_M->Sizes.numY = (0);    /* Number of model outputs */
  obtervalores_M->Sizes.numU = (0);    /* Number of model inputs */
  obtervalores_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  obtervalores_M->Sizes.numSampTimes = (2);/* Number of sample times */
  obtervalores_M->Sizes.numBlocks = (6);/* Number of blocks */
  obtervalores_M->Sizes.numBlockIO = (3);/* Number of block outputs */
  obtervalores_M->Sizes.numBlockPrms = (16);/* Sum of parameter "widths" */
  return obtervalores_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
