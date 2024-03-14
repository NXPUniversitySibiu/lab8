/***********************************************************************************************************************
 * This file was generated by the S32 Configuration Tools. Any manual edits made to this file
 * will be overwritten if the respective S32 Configuration Tools is used to update this file.
 **********************************************************************************************************************/

/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Peripherals v13.0
processor: S32K144
package_id: S32K144_LQFP100
mcu_data: s32sdk_s32k1xx_rtm_401
processor_version: 0.0.0
functionalGroups:
- name: BOARD_InitPeripherals
  UUID: aaf5a515-92bb-408c-96f9-1706a1a92f26
  called_from_default_init: true
  selectedCore: core0
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */

/*******************************************************************************
 * Included files 
 ******************************************************************************/
#include "peripherals_lpit_config_1.h"

/*******************************************************************************
 * lpit_config_1 initialization code
 ******************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'lpit_config_1'
- type: 'lpit_config'
- mode: 'general'
- custom_name_enabled: 'true'
- type_id: 'lpit'
- functional_group: 'BOARD_InitPeripherals'
- peripheral: 'LPIT_0'
- config_sets:
  - lpit:
    - lpitConfig:
      - name: 'lpit1_InitConfig'
      - enableRunInDebug: 'true'
      - enableRunInDoze: 'false'
    - lpitChannelConfig:
      - 0:
        - name: 'lpit1_ChnConfig0'
        - cfgReadOnly: 'false'
        - timerMode: 'LPIT_PERIODIC_COUNTER'
        - periodUnits: 'LPIT_PERIOD_UNITS_MICROSECONDS'
        - period: '1000000'
        - triggerSource: 'LPIT_TRIGGER_SOURCE_EXTERNAL'
        - triggerSelect: '0U'
        - enableReloadOnTrigger: 'false'
        - enableStopOnInterrupt: 'false'
        - enableStartOnTrigger: 'false'
        - chainChannel: 'false'
        - isInterruptEnabled: 'true'
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */

/**
 * @page misra_violations MISRA-C:2012 violations
 *
 * @section [global]
 * Violates MISRA 2012 Advisory Rule 8.7, External variable could be made static.
 * The external variables will be used in other source files in application code.
 *
 */

/* lPIT global configuration */
const lpit_user_config_t  lpit1_InitConfig = {
  .enableRunInDebug = true,
  .enableRunInDoze = false
};

/* Channel configuration 0*/
lpit_user_channel_config_t  lpit1_ChnConfig0 = {
  .timerMode = LPIT_PERIODIC_COUNTER,
  .periodUnits = LPIT_PERIOD_UNITS_MICROSECONDS,
  .period = 1000000UL,
  .triggerSource = LPIT_TRIGGER_SOURCE_EXTERNAL,
  .triggerSelect = 0U,
  .enableReloadOnTrigger = false,
  .enableStopOnInterrupt = false,
  .enableStartOnTrigger = false,
  .chainChannel = false,
  .isInterruptEnabled = true
};


