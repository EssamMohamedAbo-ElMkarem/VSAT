stk.v.11.0
WrittenBy    STK_v11.2.0

BEGIN Chain

Name  VAN_TO_EDLIN
BEGIN Definition

   Type        Chain
   Operator    Or
   Order       1
   Recompute   Yes
   IntervalType    0
   ComputeIntervalStart    0.000000
   ComputeIntervalStop     86400.000000
    ComputeIntervalPtr
	BEGIN	EVENTINTERVAL
			BEGIN Interval
				Start	5 Dec 2019 10:00:00.000000000
				Stop	6 Dec 2019 10:00:00.000000000
			END Interval
			IntervalState	Explicit
	END	EVENTINTERVAL

   UseSaveIntervalFile    No
   SaveIntervalFile    C:\Users\elhussein\Documents\STK 11 (x64)\VSAT\strand.int
   UseMinAngle     No
   UseMaxAngle     No
   UseMinLinkTime     No
   LTDelayCriterion    2.000000
   TimeConvergence     5.000000e-03
   AbsValueConvergence 1.000000e-14
   RelValueConvergence 1.000000e-08
   MaxTimeStep         360.000000
   MinTimeStep         1.000000e-02
   UseLightTimeDelay   Yes
    DetectEventsUsingSamplesOnly No
    Object  Facility/Vandenberg_STDN_WULY/Sensor/Vandenberg_Sensor/Transmitter/UP_Transmitter
    Object  Satellite/Amc21_33275/Sensor/VAN_sens/Receiver/UP_Receiver
    Object  Satellite/Amc21_33275/Sensor/Edlin_sens/Transmitter/DN_Transmitter
    Object  Facility/Eglin_AFB_AN-FPS_85_PAR_STDN_EG2F/Sensor/Eglin_Sensor/Receiver/DN_Receiver
   SaveMode    1
BEGIN StrandAccesses

  Strand    Facility/Vandenberg_STDN_WULY/Sensor/Vandenberg_Sensor/Transmitter/UP_Transmitter To Satellite/Amc21_33275/Sensor/VAN_sens/Receiver/UP_Receiver To Satellite/Amc21_33275/Sensor/Edlin_sens/Transmitter/DN_Transmitter To Facility/Eglin_AFB_AN-FPS_85_PAR_STDN_EG2F/Sensor/Eglin_Sensor/Receiver/DN_Receiver
    Start    0
    Stop     86400
END StrandAccesses

   UseLoadIntervalFile    No

END Definition

BEGIN Extensions
    
    BEGIN ADFFileData
    END ADFFileData
    
    BEGIN Desc
    Begin ShortText

    End ShortText
    Begin LongText

    End LongText
    END Desc
    
    BEGIN Crdn
    END Crdn
    
    BEGIN Graphics

BEGIN Attributes

StaticColor					#0000ff
AnimationColor					#ff0000
AnimationLineWidth					2.000000
StaticLineWidth					3.000000

END Attributes

BEGIN Graphics
    ShowGfx                On
    ShowStatic             Off
    ShowAnimationHighlight On
    ShowAnimationLine      On
    ShowLinkDirection      Off
END Graphics
    END Graphics
    
    BEGIN VO
    END VO

END Extensions

END Chain

