/* SENSOR FULL SIZE */
#ifndef __SENSOR_H
#define __SENSOR_H



typedef enum _OV2655_OP_TYPE_ {
        OV2655_MODE_NONE,
        OV2655_MODE_PREVIEW,
        OV2655_MODE_CAPTURE,
        OV2655_MODE_QCIF_VIDEO,
        OV2655_MODE_CIF_VIDEO,
        OV2655_MODE_QVGA_VIDEO
    } OV2655_OP_TYPE;

extern OV2655_OP_TYPE OV2655_g_iOV2655_Mode;

/* START GRAB PIXEL OFFSET */
#define IMAGE_SENSOR_START_GRAB_X		        2	// 0 or 1 recommended
#define IMAGE_SENSOR_START_GRAB_Y		        2	// 0 or 1 recommended

/* MAX/MIN FRAME RATE (FRAMES PER SEC.) */
#define MAX_FRAME_RATE							15		// Limitation for MPEG4 Encode Only
#define MIN_FRAME_RATE							12

/* SENSOR PIXEL/LINE NUMBERS IN ONE PERIOD */
    #define OV2655_FULL_PERIOD_PIXEL_NUMS  (1940)  // default pixel#(w/o dummy pixels) in UXGA mode
    #define OV2655_FULL_PERIOD_LINE_NUMS   (1238)  // default line#(w/o dummy lines) in UXGA mode
    #define OV2655_PV_PERIOD_PIXEL_NUMS    (970)  // default pixel#(w/o dummy pixels) in SVGA mode
    #define OV2655_PV_PERIOD_LINE_NUMS     (670)   // default line#(w/o dummy lines) in SVGA mode

    /* SENSOR EXPOSURE LINE LIMITATION */
    #define OV2655_FULL_EXPOSURE_LIMITATION    (1236)
    #define OV2655_PV_EXPOSURE_LIMITATION      (671)

/* SENSOR FULL SIZE */
   #define OV2655_IMAGE_SENSOR_FULL_WIDTH	   (1600)
   #define OV2655_IMAGE_SENSOR_FULL_HEIGHT	  (1200)


/* SENSOR PV SIZE */
#define OV2655_IMAGE_SENSOR_PV_WIDTH   (800)
#define OV2655_IMAGE_SENSOR_PV_HEIGHT  (600)

#define OV2655_VIDEO_QCIF_WIDTH   (176)
#define OV2655_VIDEO_QCIF_HEIGHT  (144)

#define OV2655_VIDEO_30FPS_FRAME_LENGTH   (0x29E)
#define OV2655_VIDEO_20FPS_FRAME_LENGTH   (0x3ED)
#define OV2655_VIDEO_15FPS_FRAME_LENGTH   (0x53C)
#define OV2655_VIDEO_10FPS_FRAME_LENGTH   (0x7DA)

// SETUP TIME NEED TO BE INSERTED
#define OV2655_IMAGE_SENSOR_PV_INSERTED_PIXELS (390)
#define OV2655_IMAGE_SENSOR_PV_INSERTED_LINES  (9 - 6)

#define OV2655_IMAGE_SENSOR_FULL_INSERTED_PIXELS   (248)
#define OV2655_IMAGE_SENSOR_FULL_INSERTED_LINES    (11 - 2)

#define OV2655_PV_DUMMY_PIXELS			(600)
#define OV2655_VIDEO__CIF_DUMMY_PIXELS  (100)
#define OV2655_VIDEO__QCIF_DUMMY_PIXELS (0)

/* SENSOR SCALER FACTOR */
#define PV_SCALER_FACTOR					    3
#define FULL_SCALER_FACTOR					    1


/* DUMMY NEEDS TO BE INSERTED */
/* SETUP TIME NEED TO BE INSERTED */


/* SENSOR READ/WRITE ID */
	#define OV2655_WRITE_ID							    0x60
	#define OV2655_READ_ID								0x61


	/* SENSOR CHIP VERSION */
//	#define OV2655_SENSOR_ID							0x2656


//s_add for porting
//s_add for porting
//s_add for porting

//export functions
UINT32 OV2655Open(void);
UINT32 OV2655GetResolution(MSDK_SENSOR_RESOLUTION_INFO_STRUCT *pSensorResolution);
UINT32 OV2655GetInfo(MSDK_SCENARIO_ID_ENUM ScenarioId, MSDK_SENSOR_INFO_STRUCT *pSensorInfo, MSDK_SENSOR_CONFIG_STRUCT *pSensorConfigData);
UINT32 OV2655Control(MSDK_SCENARIO_ID_ENUM ScenarioId, MSDK_SENSOR_EXPOSURE_WINDOW_STRUCT *pImageWindow, MSDK_SENSOR_CONFIG_STRUCT *pSensorConfigData);
UINT32 OV2655FeatureControl(MSDK_SENSOR_FEATURE_ENUM FeatureId, UINT8 *pFeaturePara,UINT32 *pFeatureParaLen);
UINT32 OV2655Close(void);


//e_add for porting
//e_add for porting
//e_add for porting


#endif /* __SENSOR_H */
