/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : clockMan1.h
**     Project     : MK02ECU
**     Processor   : MK02FN128VLF10
**     Component   : fsl_clock_manager
**     Version     : Component 1.3.0, Driver 01.00, CPU db: 3.00.000
**     Repository  : KSDK 1.3.0
**     Compiler    : GNU C Compiler
**     Date/Time   : 2016-04-19, 14:03, # CodeGen: 1
**     Contents    :
**         CLOCK_SYS_SetOutDiv1                       - static inline void CLOCK_SYS_SetOutDiv1(uint8_t outdiv1);
**         CLOCK_SYS_GetOutDiv1                       - static inline uint8_t CLOCK_SYS_GetOutDiv1(void);
**         CLOCK_SYS_SetOutDiv2                       - static inline void CLOCK_SYS_SetOutDiv2(uint8_t outdiv2);
**         CLOCK_SYS_GetOutDiv2                       - static inline uint8_t CLOCK_SYS_GetOutDiv2(void);
**         CLOCK_SYS_SetOutDiv4                       - static inline void CLOCK_SYS_SetOutDiv4(uint8_t outdiv4);
**         CLOCK_SYS_GetOutDiv4                       - static inline uint8_t CLOCK_SYS_GetOutDiv4(void);
**         CLOCK_SYS_SetOutDiv                        - static inline void CLOCK_SYS_SetOutDiv(uint8_t outdiv1,uint8_t...
**         CLOCK_SYS_GetOutDiv                        - static inline void CLOCK_SYS_GetOutDiv(uint8_t * outdiv1,uint8_t *...
**         CLOCK_SYS_GetPllFllClockFreq               - uint32_t CLOCK_SYS_GetPllFllClockFreq(void);
**         CLOCK_SYS_SetPllfllSel                     - static inline void CLOCK_SYS_SetPllfllSel(clock_pllfll_sel_t setting);
**         CLOCK_SYS_GetPllfllSel                     - static inline clock_pllfll_sel_t CLOCK_SYS_GetPllfllSel(void);
**         CLOCK_SYS_GetFixedFreqClockFreq            - static inline uint32_t CLOCK_SYS_GetFixedFreqClockFreq(void);
**         CLOCK_SYS_GetInternalRefClockFreq          - static inline uint32_t CLOCK_SYS_GetInternalRefClockFreq(void);
**         CLOCK_SYS_GetExternalRefClock32kFreq       - uint32_t CLOCK_SYS_GetExternalRefClock32kFreq(void);
**         CLOCK_SYS_SetExternalRefClock32kSrc        - static inline void CLOCK_SYS_SetExternalRefClock32kSrc(clock_er32k_src_t src);
**         CLOCK_SYS_GetExternalRefClock32kSrc        - static inline clock_er32k_src_t CLOCK_SYS_GetExternalRefClock32kSrc(void);
**         CLOCK_SYS_GetOsc0ExternalRefClockFreq      - uint32_t CLOCK_SYS_GetOsc0ExternalRefClockFreq(void);
**         CLOCK_SYS_GetOsc0ExternalRefClockUndivFreq - uint32_t CLOCK_SYS_GetOsc0ExternalRefClockUndivFreq(void);
**         CLOCK_SYS_GetWdogFreq                      - uint32_t CLOCK_SYS_GetWdogFreq(uint32_t instance,clock_wdog_src_t wdogSrc);
**         CLOCK_SYS_GetTraceSrc                      - static inline clock_trace_src_t CLOCK_SYS_GetTraceSrc(uint32_t instance);
**         CLOCK_SYS_SetTraceSrc                      - static inline void CLOCK_SYS_SetTraceSrc(uint32_t instance,clock_trace_src_t...
**         CLOCK_SYS_GetTraceFreq                     - uint32_t CLOCK_SYS_GetTraceFreq(uint32_t instance);
**         CLOCK_SYS_GetPortFilterFreq                - uint32_t CLOCK_SYS_GetPortFilterFreq(uint32_t...
**         CLOCK_SYS_GetLptmrFreq                     - uint32_t CLOCK_SYS_GetLptmrFreq(uint32_t instance,clock_lptmr_src_t lptmrSrc);
**         CLOCK_SYS_GetEwmFreq                       - static inline uint32_t CLOCK_SYS_GetEwmFreq(uint32_t instance);
**         CLOCK_SYS_GetFtfFreq                       - static inline uint32_t CLOCK_SYS_GetFtfFreq(uint32_t instance);
**         CLOCK_SYS_GetCrcFreq                       - static inline uint32_t CLOCK_SYS_GetCrcFreq(uint32_t instance);
**         CLOCK_SYS_GetCmpFreq                       - static inline uint32_t CLOCK_SYS_GetCmpFreq(uint32_t instance);
**         CLOCK_SYS_GetVrefFreq                      - static inline uint32_t CLOCK_SYS_GetVrefFreq(uint32_t instance);
**         CLOCK_SYS_GetPdbFreq                       - static inline uint32_t CLOCK_SYS_GetPdbFreq(uint32_t instance);
**         CLOCK_SYS_GetPitFreq                       - static inline uint32_t CLOCK_SYS_GetPitFreq(uint32_t instance);
**         CLOCK_SYS_GetSpiFreq                       - static inline uint32_t CLOCK_SYS_GetSpiFreq(uint32_t instance);
**         CLOCK_SYS_GetI2cFreq                       - static inline uint32_t CLOCK_SYS_GetI2cFreq(uint32_t instance);
**         CLOCK_SYS_GetAdcAltFreq                    - static inline uint32_t CLOCK_SYS_GetAdcAltFreq(uint32_t instance);
**         CLOCK_SYS_GetAdcAlt2Freq                   - static inline uint32_t CLOCK_SYS_GetAdcAlt2Freq(uint32_t instance);
**         CLOCK_SYS_GetFtmFixedFreq                  - static inline uint32_t CLOCK_SYS_GetFtmFixedFreq(uint32_t instance);
**         CLOCK_SYS_GetFtmSystemClockFreq            - static inline uint32_t CLOCK_SYS_GetFtmSystemClockFreq(uint32_t instance);
**         CLOCK_SYS_GetFtmExternalFreq               - uint32_t CLOCK_SYS_GetFtmExternalFreq(uint32_t instance);
**         CLOCK_SYS_GetFtmExternalSrc                - static inline sim_ftm_clk_sel_t CLOCK_SYS_GetFtmExternalSrc(uint32_t instance);
**         CLOCK_SYS_SetFtmExternalSrc                - static inline void CLOCK_SYS_SetFtmExternalSrc(uint32_t...
**         CLOCK_SYS_GetUartFreq                      - uint32_t CLOCK_SYS_GetUartFreq(uint32_t instance);
**         CLOCK_SYS_GetGpioFreq                      - static inline uint32_t CLOCK_SYS_GetGpioFreq(uint32_t instance);
**         CLOCK_SYS_EnableDmaClock                   - static inline void CLOCK_SYS_EnableDmaClock(uint32_t instance);
**         CLOCK_SYS_DisableDmaClock                  - static inline void CLOCK_SYS_DisableDmaClock(uint32_t instance);
**         CLOCK_SYS_GetDmaGateCmd                    - static inline bool CLOCK_SYS_GetDmaGateCmd(uint32_t instance);
**         CLOCK_SYS_EnableDmamuxClock                - static inline void CLOCK_SYS_EnableDmamuxClock(uint32_t instance);
**         CLOCK_SYS_DisableDmamuxClock               - static inline void CLOCK_SYS_DisableDmamuxClock(uint32_t instance);
**         CLOCK_SYS_GetDmamuxGateCmd                 - static inline bool CLOCK_SYS_GetDmamuxGateCmd(uint32_t instance);
**         CLOCK_SYS_EnablePortClock                  - void CLOCK_SYS_EnablePortClock(uint32_t instance);
**         CLOCK_SYS_DisablePortClock                 - void CLOCK_SYS_DisablePortClock(uint32_t instance);
**         CLOCK_SYS_GetPortGateCmd                   - bool CLOCK_SYS_GetPortGateCmd(uint32_t instance);
**         CLOCK_SYS_EnableEwmClock                   - static inline void CLOCK_SYS_EnableEwmClock(uint32_t instance);
**         CLOCK_SYS_DisableEwmClock                  - static inline void CLOCK_SYS_DisableEwmClock(uint32_t instance);
**         CLOCK_SYS_GetEwmGateCmd                    - static inline bool CLOCK_SYS_GetEwmGateCmd(uint32_t instance);
**         CLOCK_SYS_EnableFtfClock                   - static inline void CLOCK_SYS_EnableFtfClock(uint32_t instance);
**         CLOCK_SYS_DisableFtfClock                  - static inline void CLOCK_SYS_DisableFtfClock(uint32_t instance);
**         CLOCK_SYS_GetFtfGateCmd                    - static inline bool CLOCK_SYS_GetFtfGateCmd(uint32_t instance);
**         CLOCK_SYS_EnableCrcClock                   - static inline void CLOCK_SYS_EnableCrcClock(uint32_t instance);
**         CLOCK_SYS_DisableCrcClock                  - static inline void CLOCK_SYS_DisableCrcClock(uint32_t instance);
**         CLOCK_SYS_GetCrcGateCmd                    - static inline bool CLOCK_SYS_GetCrcGateCmd(uint32_t instance);
**         CLOCK_SYS_EnableAdcClock                   - void CLOCK_SYS_EnableAdcClock(uint32_t instance);
**         CLOCK_SYS_DisableAdcClock                  - void CLOCK_SYS_DisableAdcClock(uint32_t instance);
**         CLOCK_SYS_GetAdcGateCmd                    - bool CLOCK_SYS_GetAdcGateCmd(uint32_t instance);
**         CLOCK_SYS_EnableCmpClock                   - static inline void CLOCK_SYS_EnableCmpClock(uint32_t instance);
**         CLOCK_SYS_DisableCmpClock                  - static inline void CLOCK_SYS_DisableCmpClock(uint32_t instance);
**         CLOCK_SYS_GetCmpGateCmd                    - static inline bool CLOCK_SYS_GetCmpGateCmd(uint32_t instance);
**         CLOCK_SYS_EnableDacClock                   - void CLOCK_SYS_EnableDacClock(uint32_t instance);
**         CLOCK_SYS_DisableDacClock                  - void CLOCK_SYS_DisableDacClock(uint32_t instance);
**         CLOCK_SYS_GetDacGateCmd                    - bool CLOCK_SYS_GetDacGateCmd(uint32_t instance);
**         CLOCK_SYS_EnableVrefClock                  - static inline void CLOCK_SYS_EnableVrefClock(uint32_t instance);
**         CLOCK_SYS_DisableVrefClock                 - static inline void CLOCK_SYS_DisableVrefClock(uint32_t instance);
**         CLOCK_SYS_GetVrefGateCmd                   - static inline bool CLOCK_SYS_GetVrefGateCmd(uint32_t instance);
**         CLOCK_SYS_EnablePdbClock                   - static inline void CLOCK_SYS_EnablePdbClock(uint32_t instance);
**         CLOCK_SYS_DisablePdbClock                  - static inline void CLOCK_SYS_DisablePdbClock(uint32_t instance);
**         CLOCK_SYS_GetPdbGateCmd                    - static inline bool CLOCK_SYS_GetPdbGateCmd(uint32_t instance);
**         CLOCK_SYS_EnableFtmClock                   - void CLOCK_SYS_EnableFtmClock(uint32_t instance);
**         CLOCK_SYS_DisableFtmClock                  - void CLOCK_SYS_DisableFtmClock(uint32_t instance);
**         CLOCK_SYS_GetFtmGateCmd                    - bool CLOCK_SYS_GetFtmGateCmd(uint32_t instance);
**         CLOCK_SYS_EnablePitClock                   - static inline void CLOCK_SYS_EnablePitClock(uint32_t instance);
**         CLOCK_SYS_DisablePitClock                  - static inline void CLOCK_SYS_DisablePitClock(uint32_t instance);
**         CLOCK_SYS_GetPitGateCmd                    - static inline bool CLOCK_SYS_GetPitGateCmd(uint32_t instance);
**         CLOCK_SYS_EnableLptmrClock                 - static inline void CLOCK_SYS_EnableLptmrClock(uint32_t instance);
**         CLOCK_SYS_DisableLptmrClock                - static inline void CLOCK_SYS_DisableLptmrClock(uint32_t instance);
**         CLOCK_SYS_GetLptmrGateCmd                  - static inline bool CLOCK_SYS_GetLptmrGateCmd(uint32_t instance);
**         CLOCK_SYS_EnableSpiClock                   - void CLOCK_SYS_EnableSpiClock(uint32_t instance);
**         CLOCK_SYS_DisableSpiClock                  - void CLOCK_SYS_DisableSpiClock(uint32_t instance);
**         CLOCK_SYS_GetSpiGateCmd                    - bool CLOCK_SYS_GetSpiGateCmd(uint32_t instance);
**         CLOCK_SYS_EnableI2cClock                   - void CLOCK_SYS_EnableI2cClock(uint32_t instance);
**         CLOCK_SYS_DisableI2cClock                  - void CLOCK_SYS_DisableI2cClock(uint32_t instance);
**         CLOCK_SYS_GetI2cGateCmd                    - bool CLOCK_SYS_GetI2cGateCmd(uint32_t instance);
**         CLOCK_SYS_EnableUartClock                  - void CLOCK_SYS_EnableUartClock(uint32_t instance);
**         CLOCK_SYS_DisableUartClock                 - void CLOCK_SYS_DisableUartClock(uint32_t instance);
**         CLOCK_SYS_GetUartGateCmd                   - bool CLOCK_SYS_GetUartGateCmd(uint32_t instance);
**         CLOCK_SYS_SetFtmExternalFreq               - static inline void CLOCK_SYS_SetFtmExternalFreq(uint32_t srcInstance,uint32_t...
**         CLOCK_SYS_Init                             - clock_manager_error_code_t CLOCK_SYS_Init(clock_manager_user_config_t const...
**         CLOCK_SYS_UpdateConfiguration              - clock_manager_error_code_t CLOCK_SYS_UpdateConfiguration(uint8_t...
**         CLOCK_SYS_SetConfiguration                 - clock_manager_error_code_t CLOCK_SYS_Se...
**         CLOCK_SYS_GetCurrentConfiguration          - uint8_t CLOCK_SYS_GetCurrentConfiguration(void);
**         CLOCK_SYS_GetErrorCallback                 - clock_manager_callback_user_config_t* CLOCK_SYS_GetErrorCallback(void);
**         CLOCK_SYS_BootToFee                        - mcg_mode_error_t CLOCK_SYS_BootToFee(const mcg_config_t * config);
**         CLOCK_SYS_BootToFei                        - mcg_mode_error_t CLOCK_SYS_BootToFei(const mcg_config_t * config);
**         CLOCK_SYS_BootToBlpi                       - mcg_mode_error_t CLOCK_SYS_BootToBlpi(const mcg_config_t * config);
**         CLOCK_SYS_BootToBlpe                       - mcg_mode_error_t CLOCK_SYS_BootToBlpe(const mcg_config_t * config);
**         CLOCK_SYS_SetMcgMode                       - mcg_mode_error_t CLOCK_SYS_SetMcgMode(mcg_config_t const * targetConfig);
**         CLOCK_SYS_SetSimConfigration               - void CLOCK_SYS_SetSimConfigration(sim_config_t const * simConfig);
**         CLOCK_SYS_OscInit                          - clock_manager_error_code_t CLOCK_SYS_OscInit(uint32_t...
**         CLOCK_SYS_OscDeinit                        - void CLOCK_SYS_OscDeinit(uint32_t instance);
**         CLOCK_SYS_SetOscerConfigration             - void CLOCK_SYS_SetOscerConfigration(uint32_t instance,oscer_config_t const *...
**         CLOCK_SYS_GetFreq                          - clock_manager_error_code_t CLOCK_SYS_GetFreq(clock_names_t clockName,uint32_t...
**         CLOCK_SYS_GetCoreClockFreq                 - uint32_t CLOCK_SYS_GetCoreClockFreq(void);
**         CLOCK_SYS_GetSystemClockFreq               - uint32_t CLOCK_SYS_GetSystemClockFreq(void);
**         CLOCK_SYS_GetBusClockFreq                  - uint32_t CLOCK_SYS_GetBusClockFreq(void);
**         CLOCK_SYS_GetFlashClockFreq                - uint32_t CLOCK_SYS_GetFlashClockFreq(void);
**         CLOCK_SYS_GetLpoClockFreq                  - static inline uint32_t CLOCK_SYS_GetLpoClockFreq(void);
**         CLOCK_SYS_SetSystickSrc                    - static inline void CLOCK_SYS_SetSystickSrc(clock_systick_src_t src);
**         CLOCK_SYS_GetSystickFreq                   - inline uint32_t CLOCK_SYS_GetSystickFreq(void);
**
**     Copyright : 1997 - 2015 Freescale Semiconductor, Inc. 
**     All Rights Reserved.
**     
**     Redistribution and use in source and binary forms, with or without modification,
**     are permitted provided that the following conditions are met:
**     
**     o Redistributions of source code must retain the above copyright notice, this list
**       of conditions and the following disclaimer.
**     
**     o Redistributions in binary form must reproduce the above copyright notice, this
**       list of conditions and the following disclaimer in the documentation and/or
**       other materials provided with the distribution.
**     
**     o Neither the name of Freescale Semiconductor, Inc. nor the names of its
**       contributors may be used to endorse or promote products derived from this
**       software without specific prior written permission.
**     
**     THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
**     ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
**     WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
**     DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
**     ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
**     LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
**     ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
**     (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
**     SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
**     
**     http: www.freescale.com
**     mail: support@freescale.com
** ###################################################################*/
/*!
** @file clockMan1.h
** @version 01.00
*/         
/*!
**  @addtogroup clockMan1_module clockMan1 module documentation
**  @{
*/         
#ifndef __clockMan1_H
#define __clockMan1_H
/* MODULE clockMan1. */
        
/* Include inherited beans */
#include "osa1.h"
#include "Cpu.h"
        


/*! @brief Count of user Callbacks */
#define FSL_CLOCK_MANAGER_CALLBACK_CNT 0U
            
/*! @brief Array of User callbacks */
extern clock_manager_callback_user_config_t *g_clockManCallbacksArr[];
#endif /* ifndef __clockMan1_H */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.5 [05.21]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
        
