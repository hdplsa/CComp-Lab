  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 4;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc paramMap
    ;%
    paramMap.nSections           = nTotSects;
    paramMap.sectIdxOffset       = sectIdxOffset;
      paramMap.sections(nTotSects) = dumSection; %prealloc
    paramMap.nTotData            = -1;
    
    ;%
    ;% Auto data (model_real_P)
    ;%
      section.nData     = 12;
      section.data(12)  = dumData; %prealloc
      
	  ;% model_real_P.A
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% model_real_P.B
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 16;
	
	  ;% model_real_P.C
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 20;
	
	  ;% model_real_P.K
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 24;
	
	  ;% model_real_P.M
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 28;
	
	  ;% model_real_P.Nbar
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 32;
	
	  ;% model_real_P.AnalogOutput_FinalValue
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 33;
	
	  ;% model_real_P.AnalogOutput_InitialValue
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 34;
	
	  ;% model_real_P.AnalogInput_MaxMissedTicks
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 35;
	
	  ;% model_real_P.AnalogOutput_MaxMissedTicks
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 36;
	
	  ;% model_real_P.AnalogInput_YieldWhenWaiting
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 37;
	
	  ;% model_real_P.AnalogOutput_YieldWhenWaiting
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 38;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
      section.nData     = 6;
      section.data(6)  = dumData; %prealloc
      
	  ;% model_real_P.AnalogInput_Channels
	  section.data(1).logicalSrcIdx = 12;
	  section.data(1).dtTransOffset = 0;
	
	  ;% model_real_P.AnalogOutput_Channels
	  section.data(2).logicalSrcIdx = 13;
	  section.data(2).dtTransOffset = 3;
	
	  ;% model_real_P.AnalogInput_RangeMode
	  section.data(3).logicalSrcIdx = 14;
	  section.data(3).dtTransOffset = 4;
	
	  ;% model_real_P.AnalogOutput_RangeMode
	  section.data(4).logicalSrcIdx = 15;
	  section.data(4).dtTransOffset = 5;
	
	  ;% model_real_P.AnalogInput_VoltRange
	  section.data(5).logicalSrcIdx = 16;
	  section.data(5).dtTransOffset = 6;
	
	  ;% model_real_P.AnalogOutput_VoltRange
	  section.data(6).logicalSrcIdx = 17;
	  section.data(6).dtTransOffset = 7;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(2) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% model_real_P.Delay_InitialCondition
	  section.data(1).logicalSrcIdx = 18;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(3) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% model_real_P.Delay_DelayLength
	  section.data(1).logicalSrcIdx = 19;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(4) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (parameter)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    paramMap.nTotData = nTotData;
    


  ;%**************************
  ;% Create Block Output Map *
  ;%**************************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 1;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc sigMap
    ;%
    sigMap.nSections           = nTotSects;
    sigMap.sectIdxOffset       = sectIdxOffset;
      sigMap.sections(nTotSects) = dumSection; %prealloc
    sigMap.nTotData            = -1;
    
    ;%
    ;% Auto data (model_real_B)
    ;%
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% model_real_B.Fcn
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% model_real_B.Sum1
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% model_real_B.Sum
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 5;
	
	  ;% model_real_B.Sum_d
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 6;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (signal)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    sigMap.nTotData = nTotData;
    


  ;%*******************
  ;% Create DWork Map *
  ;%*******************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 3;
    sectIdxOffset = 1;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc dworkMap
    ;%
    dworkMap.nSections           = nTotSects;
    dworkMap.sectIdxOffset       = sectIdxOffset;
      dworkMap.sections(nTotSects) = dumSection; %prealloc
    dworkMap.nTotData            = -1;
    
    ;%
    ;% Auto data (model_real_DW)
    ;%
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% model_real_DW.Delay_DSTATE
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 6;
      section.data(6)  = dumData; %prealloc
      
	  ;% model_real_DW.FromWorkspace1_PWORK.TimePtr
	  section.data(1).logicalSrcIdx = 1;
	  section.data(1).dtTransOffset = 0;
	
	  ;% model_real_DW.AnalogInput_PWORK
	  section.data(2).logicalSrcIdx = 2;
	  section.data(2).dtTransOffset = 1;
	
	  ;% model_real_DW.AnalogOutput_PWORK
	  section.data(3).logicalSrcIdx = 3;
	  section.data(3).dtTransOffset = 2;
	
	  ;% model_real_DW.u_PWORK.LoggedData
	  section.data(4).logicalSrcIdx = 4;
	  section.data(4).dtTransOffset = 3;
	
	  ;% model_real_DW.x_PWORK.LoggedData
	  section.data(5).logicalSrcIdx = 5;
	  section.data(5).dtTransOffset = 4;
	
	  ;% model_real_DW.y_PWORK.LoggedData
	  section.data(6).logicalSrcIdx = 6;
	  section.data(6).dtTransOffset = 5;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% model_real_DW.FromWorkspace1_IWORK.PrevIndex
	  section.data(1).logicalSrcIdx = 7;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (dwork)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    dworkMap.nTotData = nTotData;
    


  ;%
  ;% Add individual maps to base struct.
  ;%

  targMap.paramMap  = paramMap;    
  targMap.signalMap = sigMap;
  targMap.dworkMap  = dworkMap;
  
  ;%
  ;% Add checksums to base struct.
  ;%


  targMap.checksum0 = 1374944158;
  targMap.checksum1 = 3053909891;
  targMap.checksum2 = 845427861;
  targMap.checksum3 = 3557003852;

